EYWP_Logout()
{
   
//	web_remove_auto_header("Authorization","ImplicitGen=No",LAST);
//	
//	lr_start_transaction("SC01_OPP_EMCR_009b_FileDownload");
//	web_add_header("Accept","text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7");
//	
//	web_url("EmployeeMasterCensusReport.xlsx",
//		"URL={C_URL}", 
//		"TargetFrame=", 
//		"Resource=1", 
//		"Snapshot=t657.inf", 
//		LAST);
//
//	Download_Size= web_get_int_property(HTTP_INFO_DOWNLOAD_SIZE);
//		lr_output_message("Downloaded File Size is: %.2ld Bytes", Download_Size);
////		33451520
//		if(Download_Size>14000000)
//		{
//			lr_end_transaction("SC01_OPP_EMCR_009b_FileDownload",LR_PASS);
//		}
//		else
//		{
//			lr_end_transaction("SC01_OPP_EMCR_009b_FileDownload",LR_FAIL);
//		}
			
	lr_start_transaction("EYWP_099_Logout");
	
	web_add_auto_header("authorization","Bearer {C_BearerToken}");

	
	web_url("logout",
		"URL=https://auth-qa02.ey.com/v2/logout?client_id={C_client_id_2}&auth0Client=eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://perf.opp.ey.com/",
		"Snapshot=t512.inf",
		"Mode=HTTP",
		LAST);


	web_url("translation.json_3", 
		"URL=https://perf.opp.ey.com/locales/en/translation.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t529.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_url("defaultAppConfig.json_3", 
		"URL=https://perf.opp.ey.com/assets/defaultAppConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t531.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("UIStringDictionary.json_4", 
		"URL=https://perf.opp.ey.com/assets/UIStringDictionary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t532.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("en.json_3", 
		"URL=https://perf.opp.ey.com/assets/locales/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t533.inf", 
		"Mode=HTTP", 
		LAST);


	web_add_cookie("did_compat=s%3Av0%3A81b92c60-55fc-11ee-9ace-5da894d994d3%3A48d3a9029ed28e6be7c31e6bcc7dbb48b46a96f43d63c2f4a8aaec5f0144ddbd.LSNZMjMbcbnAElIWIV80XFbOEmEZlh438p10WX7VkNY; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("auth0_compat=s%3Av1.gadzZXNzaW9ugqZoYW5kbGXEQFfSvGifeeO0Dc50-F166MLpleLTVlE-1AwpXEIZeqnO45wo_0k2enOLN2BsQbv9wvPGw55UGS2TEhXUMk-tR1emY29va2llg6dleHBpcmVz1__OeHIAZQv-qK5vcmlnaW5hbE1heEFnZc4PcxQAqHNhbWVTaXRlpG5vbmU.hzXL40LuGAQ8qNOEcKDjcoDPj4jZ6gkgfY5OJV96WqM; DOMAIN=auth-qa02.ey.com");

	web_url("authorize_2",
		"URL=https://auth-qa02.ey.com/authorize?scope=openid%20profile%20email%20offline_access&audience=https%3A%2F%2Foppintegration-dev&client_id={C_client_id_2}&redirect_uri=https%3A%2F%2Fperf.opp.ey.com&response_type=code&response_mode=query&state=Q0Q3dEFKZGJkN29ZLUY1bFcwZ2NPMnI2bUZVaWdnYWtJQVdDX0pWN1ZleQ%3D%3D&nonce=RXZTQ2dDM0Z3ZFhuMnpqeWoxdnhub2JaaGVIckdQbi1HN1lIWXZRNVdaMw%3D%3D&code_challenge=sE1G-DS8fb12EH3hjX_ar4VOgaEBnNcqvRmwfL3vBMo&code_challenge_method=S256&auth0Client=eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://perf.opp.ey.com/",
		"Snapshot=t535.inf",
		"Mode=HTTP",
		LAST);

	web_url("fr.json_3", 
		"URL=https://perf.opp.ey.com/assets/locales/fr.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t536.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("EYWP_099_Logout", LR_AUTO);

	return 0;
}
