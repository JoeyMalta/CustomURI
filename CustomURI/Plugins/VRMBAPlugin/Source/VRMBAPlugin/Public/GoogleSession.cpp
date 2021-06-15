#include "GoogleSession.h"
#include "UObject/Script.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"

#include "vrmbauth.h"



//UGoogle::UGoogle(google_session* google) 
//{
//    this->google = google;
//}

UGoogle::UGoogle()
{
    //this->google = google;
}

void UGoogle::CallTokenRecieved(FString accessToken, FString refreshToken)
{
    int t = 0;
    OnTokenRecieved.Broadcast(accessToken, refreshToken);
}

void callbackFunction(void* cb_arg, const wchar_t* a, const wchar_t* b ) {
	std::wcout << "Value of a: " << a << std::endl;
	std::wcout << "Value of a: " << a << std::endl;

	UGoogle *goog = (UGoogle*)cb_arg;
	goog->OnTokenRecieved.Broadcast(FString(a), FString("fssd"));

	/*std::wstring accessToken = std::move(a);
	std::wstring refreshToken = std::move(b);
	UGoogle* google = NewObject<UGoogle>();
	google->CallTokenRecieved(FString(a), FString(b));*/
	//UGoogle* google = NewObject<UGoogle>();
	//this->OnTokenRecieved.Broadcast(FString(L"shjdhfj"), FString("fssd"));
	//OnTokenRecieved.Broadcast(FString(L"shjdhfj"), FString("fssd"));

	//googleA->CallTokenRecieved(FString(L"ya29.a0AfH6SMDnTbLgvtqB-XXqE62p0SVF25HZ3UXhuZY_7imoHbb7URdEi8GmG9iyUM1nwmqGBk1ZS6faTTguoyLFZTG49gpQvdP_7WS2LA3rcyQLbGcdDE-9F7MNK27kM48ceJrfpGgPxfKPsyKqwDOlH-sh8wOT"), FString(L""));

}


void UGoogle::GetGoogleToken(const FString& ApiId, const FString& ApiSecret)
{
#if PLATFORM_WINDOWS


	//std::wstring m_ApiName = L"410892375705-pnokoevsdt8ngonvoi53febq4farcto3.apps.googleusercontent.com";
	//std::wstring m_ApiSecret = L"s4Vzh0avpUTKqicpsOQm73Ch";

	////UVRMBABlueprintFunctionLibrary api = UVRMBABlueprintFunctionLibrary();
	////api.AddToRoot();
	////AddToRoot();
	////self->AddToRoot();
	//std::wstring tokenString = getGoogleTokenString(m_ApiName, m_ApiSecret);
	//FString str = FString(tokenString.c_str());
	////FString str = TEXT("nostring");
	//return str;

	std::wstring key = std::move(std::wstring(*ApiId));
	std::wstring secret = std::move(std::wstring(*ApiSecret));
	//googleA = goolge;

	//std::wstring key = L"378562644015-lvikbv4tilsb6291s44k3g16invdd822.apps.googleusercontent.com";
	//std::wstring secret = L"ciJE5d2eKv4-PeCtmpFUFVNg";
	void (*callback)(void* cb_arg, const wchar_t*, const wchar_t* );
	callback = callbackFunction;
	
	void* a = (void*)this;
	getGoogleToken(key.c_str(), secret.c_str(), (void *)this, callback);
	//getGoogleToken(L"378562644015-lvikbv4tilsb6291s44k3g16invdd822.apps.googleusercontent.com", L"ciJE5d2eKv4-PeCtmpFUFVNg", (void *)this, callback);
	int t = 0;

#endif



}
