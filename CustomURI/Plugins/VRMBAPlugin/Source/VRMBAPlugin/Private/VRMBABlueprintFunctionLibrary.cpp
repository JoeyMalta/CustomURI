// Fill out your copyright notice in the Description page of Project Settings.


#include "VRMBABlueprintFunctionLibrary.h"
//#include "GenericPlatform/GenericPlatformProcess.h"
#include <iostream>
#if PLATFORM_WINDOWS
	#include "Windows/AllowWindowsPlatformTypes.h"
	#include <winreg.h>
	#include <winerror.h>
//#include <windows.h>
#include <Windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
//#include "vrmbauth.h"
//#include "GoogleSession.h"
#endif

//#include <WinBase.h>


//#include <string>


//static const utility::string_t s_googleapi_key = U("410892375705-pnokoevsdt8ngonvoi53febq4farcto3.apps.googleusercontent.com");
//static const utility::string_t s_googleapi_secret = U("s4Vzh0avpUTKqicpsOQm73Ch");

#define URL_PROTOCOL_STRING			L"URL:%s"
#define URL_PROTOCOL				L"URL Protocol"
#define URL_PROTOCOL_DEFAULTICON	L"DefaultIcon"
#define URL_PROTOCOL_COMMAND		L"Shell\\Open\\command"
#define URL_PROTOCOL_OPEN			L"Shell\\Open"
#define URL_PROTOCOL_SHELL			L"Shell"




void UVRMBABlueprintFunctionLibrary::IsSingleInstance(bool bIsEnabled)
{
#if !UE_EDITOR	
	// Only one instance of the game can be initialized!
	const UGeneralProjectSettings& ProjectSettings = *GetDefault<UGeneralProjectSettings>();
	const FString LockFilePath = FPlatformProcess::UserTempDir() + ProjectSettings.ProjectID.ToString();
	if (!IFileManager::Get().CreateFileWriter(*LockFilePath, 0) && bIsEnabled)
	{
		FPlatformApplicationMisc::RequestMinimize();
		FPlatformMisc::RequestExit(0);
	}
#endif
}


void UVRMBABlueprintFunctionLibrary::SetURIScheme(FString protocolName, FString executablePath, FString executableCommand)
{
#if PLATFORM_WINDOWS

	//const TCHAR * l_path = FGenericPlatformProcess::ExecutablePath();
	//FString lauchdir = FPaths::LaunchDir();
	//FString gamedir = FPaths::GameDevelopersDir();
	//FString ThePath1 = FPaths::ProjectDir();
	//FString ThePath = FString(FPlatformProcess::BaseDir());
	//std::wstring m_wszProtocolName = L"vrmba";
	std::wstring m_wszCompanyName = L"VRMBA";
	//std::wstring m_wszAppPath = L"Notepad.exe";

	std::wstring m_wszProtocolName(*protocolName);
	std::wstring m_wszAppPath(*executablePath);
	std::wstring m_wszAppCommand(*executableCommand);

	DWORD				m_dwErrorCode;
	std::wstring		m_wszErrorMsg;


	WCHAR szValue[MAX_PATH] = { 0 };
	WCHAR szPathValue[1064] = { 0 };
	HKEY hKey = NULL;
	HKEY hKeyDefaultIcon = NULL;
	HKEY hKeyCommand = NULL;
	bool IsRegAlreadyPresent = false;

	do
	{
		if ((m_dwErrorCode = RegOpenKeyExW(HKEY_CLASSES_ROOT, m_wszProtocolName.c_str(), 0L, KEY_READ, &hKey)) != ERROR_SUCCESS)
		{
			if ((m_dwErrorCode = RegCreateKeyExW(HKEY_CLASSES_ROOT,
				m_wszProtocolName.c_str(),
				0,
				NULL,
				REG_OPTION_NON_VOLATILE,
				KEY_ALL_ACCESS,
				NULL,
				&hKey,
				NULL)) == ERROR_SUCCESS)
			{
				swprintf_s(szValue, MAX_PATH, URL_PROTOCOL_STRING, m_wszProtocolName.c_str());
				if ((m_dwErrorCode = RegSetValueExW(hKey, L"", 0, REG_SZ, (BYTE*)&szValue, wcslen(szValue) * 2 + 2)) != ERROR_SUCCESS)
					break;

				if ((m_dwErrorCode = RegSetValueExW(hKey, URL_PROTOCOL, 0, REG_SZ, (BYTE*)"", sizeof(REG_SZ))) != ERROR_SUCCESS)
					break;

				if ((m_dwErrorCode = RegCreateKeyW(hKey, URL_PROTOCOL_DEFAULTICON, &hKeyDefaultIcon)) == ERROR_SUCCESS)
				{
					swprintf_s(szValue, MAX_PATH, L"%s", m_wszAppPath.c_str());
					if ((m_dwErrorCode = RegSetValueExW(hKeyDefaultIcon, L"", 0, REG_SZ, (BYTE*)&szValue, wcslen(szValue) * 2 + 2)) != ERROR_SUCCESS)
						break;

					if ((m_dwErrorCode = RegCreateKeyW(hKey, URL_PROTOCOL_COMMAND, &hKeyCommand)) == ERROR_SUCCESS)
					{
						swprintf_s(szPathValue, 1064, L"%s \"%%1\"", m_wszAppCommand.c_str());
						m_dwErrorCode = RegSetValueExW(hKeyCommand, L"", 0, REG_SZ, (BYTE*)&szPathValue, wcslen(szPathValue) * 2 + 2);
					}
				}
			}
		}
		else

		{
			m_dwErrorCode = -1;
			IsRegAlreadyPresent = true;
			swprintf_s(szValue, MAX_PATH, L"%s Key is already present.", m_wszProtocolName.c_str());
			m_wszErrorMsg = szValue;
		}
	} while (0);

	if (m_dwErrorCode != ERROR_SUCCESS)
	{
		LPVOID lpMsgBuf;
		LPVOID lpDisplayBuf;

		FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER |
			FORMAT_MESSAGE_FROM_SYSTEM |
			FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL,
			m_dwErrorCode,
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
			(LPTSTR)&lpMsgBuf,
			0, NULL);

		// Display the error message and exit the process
		lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT,
			(lstrlen((LPCTSTR)lpMsgBuf) + 40) * sizeof(TCHAR));

		StringCchPrintf((LPTSTR)lpDisplayBuf,
			LocalSize(lpDisplayBuf) / sizeof(TCHAR),
			TEXT("CustomURLProtocol::Failed with error %d: %s"),
			m_dwErrorCode, lpMsgBuf);

		m_wszErrorMsg.append((LPCTSTR)lpDisplayBuf);
		OutputDebugStringW((LPCTSTR)lpDisplayBuf);

		LocalFree(lpMsgBuf);
		LocalFree(lpDisplayBuf);
	}

	if (hKeyCommand)
	{
		::RegCloseKey(hKeyCommand);
		hKeyCommand = NULL;
	}
	if (hKeyDefaultIcon)
	{
		::RegCloseKey(hKeyDefaultIcon);
		hKeyDefaultIcon = NULL;
	}
	if (hKey)
	{
		::RegCloseKey(hKey);
		hKey = NULL;
	}

#endif
}

bool UVRMBABlueprintFunctionLibrary::IsURISchemeSet(FString protocolName)
{
#if PLATFORM_WINDOWS

	std::wstring m_wszProtocolName(*protocolName);
	HKEY hKey;

	LONG Result = RegOpenKeyExW(HKEY_CLASSES_ROOT, m_wszProtocolName.c_str(), 0, KEY_READ, &hKey);
	if (Result != ERROR_SUCCESS)
	{
		return false;
	}
	return true;

#endif
}

BOOL RegDelnodeRecurse(HKEY hKeyRoot, LPTSTR lpSubKey)
{
	LPTSTR lpEnd;
	LONG lResult;
	DWORD dwSize;
	TCHAR szName[MAX_PATH];
	HKEY hKey;
	FILETIME ftWrite;

	// First, see if we can delete the key without having
	// to recurse.

	lResult = RegDeleteKey(hKeyRoot, lpSubKey);

	if (lResult == ERROR_SUCCESS)
		return true;

	lResult = RegOpenKeyEx(hKeyRoot, lpSubKey, 0, KEY_READ, &hKey);

	if (lResult != ERROR_SUCCESS)
	{
		if (lResult == ERROR_FILE_NOT_FOUND) {
			printf("Key not found.\n");
			return true;
		}
		else {
			printf("Error opening key.\n");
			return true;
		}
	}

	// Check for an ending slash and add one if it is missing.

	lpEnd = lpSubKey + lstrlen(lpSubKey);

	if (*(lpEnd - 1) != TEXT('\\'))
	{
		*lpEnd = TEXT('\\');
		lpEnd++;
		*lpEnd = TEXT('\0');
	}

	// Enumerate the keys

	dwSize = MAX_PATH;
	lResult = RegEnumKeyEx(hKey, 0, szName, &dwSize, NULL,
		NULL, NULL, &ftWrite);

	if (lResult == ERROR_SUCCESS)
	{
		do {

			*lpEnd = TEXT('\0');
			StringCchCat(lpSubKey, MAX_PATH * 2, szName);

			if (!RegDelnodeRecurse(hKeyRoot, lpSubKey)) {
				break;
			}

			dwSize = MAX_PATH;

			lResult = RegEnumKeyEx(hKey, 0, szName, &dwSize, NULL,
				NULL, NULL, &ftWrite);

		} while (lResult == ERROR_SUCCESS);
	}

	lpEnd--;
	*lpEnd = TEXT('\0');

	RegCloseKey(hKey);

	// Try again to delete the key.

	lResult = RegDeleteKey(hKeyRoot, lpSubKey);

	if (lResult == ERROR_SUCCESS)
		return true;

	return false;
}

BOOL RegDelnode(HKEY hKeyRoot, LPCTSTR lpSubKey)
{
	TCHAR szDelKey[MAX_PATH * 2];

	StringCchCopy(szDelKey, MAX_PATH * 2, lpSubKey);
	return RegDelnodeRecurse(hKeyRoot, szDelKey);

}

bool UVRMBABlueprintFunctionLibrary::DeleteURIScheme(FString protocolName)
{
#if PLATFORM_WINDOWS
	std::wstring m_wszProtocolName(*protocolName);
	return RegDelnode(HKEY_CLASSES_ROOT, m_wszProtocolName.c_str());
#endif
}




FString UVRMBABlueprintFunctionLibrary::getExecutableName()
{
	return FString(FPlatformProcess::ExecutableName());
}

FString UVRMBABlueprintFunctionLibrary::getExecutablePath()
{
	return FString(FPlatformProcess::ExecutablePath());
}

FString UVRMBABlueprintFunctionLibrary::getCommandLineOriginal()
{
	return FString(FCommandLine::GetOriginal());
}


//FString ReadRegistryValue(const FString& KeyName, const FString& ValueName)
//{
//#if PLATFORM_WINDOWS
//
//	HKEY hKey;
//	LONG Result = RegOpenKeyExW(HKEY_CURRENT_USER, *KeyName, 0, KEY_READ, &hKey);
//	if (Result != ERROR_SUCCESS)
//	{
//		// Handle error 
//	}
//	TCHAR Buffer[MAX_PATH];
//	DWORD BufferSize = sizeof(Buffer);
//	HRESULT hResult = RegQueryValueEx(hKey, *ValueName, 0, nullptr, reinterpret_cast<LPBYTE>(Buffer), &BufferSize);
//	if (hResult != ERROR_SUCCESS)
//	{
//		// Handle error 
//	}
//	return FString(Buffer);
//
//#endif
//}



//void callbackFunction(const wchar_t* a, const wchar_t* b) {
//	std::wcout << "Value of a: " << a << std::endl;
//	std::wcout << "Value of a: " << a << std::endl;
//
//	/*std::wstring accessToken = std::move(a);
//	std::wstring refreshToken = std::move(b);
//	UGoogle* google = NewObject<UGoogle>();
//	google->CallTokenRecieved(FString(a), FString(b));*/
//	UGoogle* google = NewObject<UGoogle>();
//	
//	googleA->CallTokenRecieved(FString(L"ya29.a0AfH6SMDnTbLgvtqB-XXqE62p0SVF25HZ3UXhuZY_7imoHbb7URdEi8GmG9iyUM1nwmqGBk1ZS6faTTguoyLFZTG49gpQvdP_7WS2LA3rcyQLbGcdDE-9F7MNK27kM48ceJrfpGgPxfKPsyKqwDOlH-sh8wOT"), FString(L""));
//
//}



//void UVRMBABlueprintFunctionLibrary::GetGoogleToken(const FString& ApiId, const FString& ApiSecret, UGoogle* goolge)
//{
//#if PLATFORM_WINDOWS
//	
//
//	//std::wstring m_ApiName = L"410892375705-pnokoevsdt8ngonvoi53febq4farcto3.apps.googleusercontent.com";
//	//std::wstring m_ApiSecret = L"s4Vzh0avpUTKqicpsOQm73Ch";
//
//	////UVRMBABlueprintFunctionLibrary api = UVRMBABlueprintFunctionLibrary();
//	////api.AddToRoot();
//	////AddToRoot();
//	////self->AddToRoot();
//	//std::wstring tokenString = getGoogleTokenString(m_ApiName, m_ApiSecret);
//	//FString str = FString(tokenString.c_str());
//	////FString str = TEXT("nostring");
//	//return str;
//	
//	//std::wstring key = std::move(std::wstring(*ApiId));
//	//std::wstring secret = std::move(std::wstring(*ApiSecret));
//	googleA = goolge;
//	
//	std::wstring key = L"378562644015-lvikbv4tilsb6291s44k3g16invdd822.apps.googleusercontent.com";
//	std::wstring secret = L"ciJE5d2eKv4-PeCtmpFUFVNg";
//	void (*callback)(const wchar_t*, const wchar_t*);
//	callback = callbackFunction;
//	//getGoogleToken(key, secret, callback);
//	getGoogleToken(L"378562644015-lvikbv4tilsb6291s44k3g16invdd822.apps.googleusercontent.com", L"ciJE5d2eKv4-PeCtmpFUFVNg", callback);
//	int t = 0;
//
//#endif
//
//
//
//}





