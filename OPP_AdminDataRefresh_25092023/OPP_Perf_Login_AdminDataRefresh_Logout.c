OPP_Perf_Login_AdminDataRefresh_Logout()
{
    web_set_max_html_param_len("99999");
	web_cache_cleanup();
	web_cleanup_cookies();
	web_cleanup_auto_headers();
	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","perf.opp.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","auth-qa02.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","login.microsoftonline.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","globalaccess.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","usedsub0lgsnr01.service.signalr.net:443");
	
	lr_start_transaction("OPP_Login_001_Launch");
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=Count_OPP",
		"Text=Organization People Platform",
		LAST);


	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("perf.opp.ey.com", 
		"URL=https://perf.opp.ey.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		LAST);

/*Correlation comment - Do not change!  Original value='nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp' Name ='C_client_id_2' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=C_client_id_2",
		"QueryString=$.REACT_APP_AUTH0_CLIENTID",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("defaultAppConfig.json", 
		"URL=https://perf.opp.ey.com/assets/defaultAppConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t414.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_url("UIStringDictionary.json", 
		"URL=https://perf.opp.ey.com/assets/UIStringDictionary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t416.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("translation.json", 
		"URL=https://perf.opp.ey.com/locales/en/translation.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t417.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_url("en.json", 
		"URL=https://perf.opp.ey.com/assets/locales/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t421.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_url("fr.json", 
		"URL=https://perf.opp.ey.com/assets/locales/fr.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t423.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("did=s%3Av0%3A81b92c60-55fc-11ee-9ace-5da894d994d3.kLFjCtcsKnIpQRX5S1fyjXlbwjn4DWXYAmR6DA2pSk4; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("auth0=s%3Av1.gadzZXNzaW9ugqZoYW5kbGXEQIkCvfdzG-EoETcculqP9BkGnKsySSP90XKT8o7Rz4lHBjBlK1lm5rK2QUYgA3_IdEL_OxoOgnWSjN0fas38ot-mY29va2llg6dleHBpcmVz1_8574sAZQv9Ra5vcmlnaW5hbE1heEFnZc4PcxQAqHNhbWVTaXRlpG5vbmU.aR0Y44rYDqZyJoWU8OVnh94Iemd%2BFcjbnhcsIKgn4lM; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("did_compat=s%3Av0%3A81b92c60-55fc-11ee-9ace-5da894d994d3.kLFjCtcsKnIpQRX5S1fyjXlbwjn4DWXYAmR6DA2pSk4; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("auth0_compat=s%3Av1.gadzZXNzaW9ugqZoYW5kbGXEQIkCvfdzG-EoETcculqP9BkGnKsySSP90XKT8o7Rz4lHBjBlK1lm5rK2QUYgA3_IdEL_OxoOgnWSjN0fas38ot-mY29va2llg6dleHBpcmVz1_8574sAZQv9Ra5vcmlnaW5hbE1heEFnZc4PcxQAqHNhbWVTaXRlpG5vbmU.aR0Y44rYDqZyJoWU8OVnh94Iemd%2BFcjbnhcsIKgn4lM; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("__cf_bm=XDbt4QMnOq8VK3HUpDntUcB.OG36TztAys9wGkev2Zc-1695025349-0-AQpE7p6Y5aBprBzvEVF6wwwyK148cGdJwqEtkXB+Sqdn6/CW1tqKfyfQ7lmyPfJqCkekgA7rI+boQ5SNJXCidAs=; DOMAIN=auth-qa02.ey.com");

    web_reg_save_param_regexp(
		"ParamName=C_state_1",
		"RegExp=state=(.*?)\\\r\\\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/authorize*",
		LAST);
	
	web_url("authorize",
		"URL=https://auth-qa02.ey.com/authorize?scope=openid%20profile%20email%20offline_access&audience=https%3A%2F%2Foppintegration-dev&client_id={C_client_id_2}&redirect_uri=https%3A%2F%2Fperf.opp.ey.com&response_type=code&response_mode=query&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D&nonce=eFEyOFZ4enczWlNDc25ydjdZTVZHVHZrMFhjaWVJYWlvNjd2U2thTjgwMw%3D%3D&code_challenge=DrfNg1VfKc-ljloRR2ih-7_Hn8pzA9wwtj2NQ_I8P_0&code_challenge_method=S256&auth0Client=eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://perf.opp.ey.com/",
		"Snapshot=t424.inf",
		"Mode=HTTP",
		LAST);
	
	   if(atoi(lr_eval_string("{Count_OPP}"))>0)
	{
		lr_end_transaction("OPP_Login_001_Launch",LR_PASS);
	}
	else
	{
		lr_end_transaction("OPP_Login_001_Launch",LR_FAIL);
		lr_error_message("OPP_Login_001_Launch failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	lr_think_time(v_tt);

	lr_start_transaction("OPP_Login_002_Enter_Username");
	
	web_reg_save_param_regexp(
		"ParamName=C_wctx_1",
		"RegExp=u0026wctx=(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/authorize*",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=C_estsrequest_1",
		"RegExp=estsrequest%3d(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/authorize*",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=client-request-id",
		"RegExp=correlationId\":\"(.*?)\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/authorize*",
		LAST);
		
		web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=Count_User",
		"Text={P_UserID}",
		LAST);

	web_submit_data("identifier", 
		"Action=https://auth-qa02.ey.com/u/login/identifier?state={C_state_1}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=state", "Value={C_state_1}", ENDITEM, 
		"Name=username", "Value={P_Username}", ENDITEM, 
		"Name=js-available", "Value=true", ENDITEM, 
		"Name=webauthn-available", "Value=true", ENDITEM, 
		"Name=is-brave", "Value=false", ENDITEM, 
		"Name=webauthn-platform-available", "Value=false", ENDITEM, 
		"Name=action", "Value=default", ENDITEM, 
		LAST);


	web_url("ls", 
		"URL=https://globalaccess.ey.com/adfs/ls/?login_hint={P_UserID}%40ey.com&client-request-id=83a18d4d-9c38-4269-8478-dabc79bf3944&username={P_UserID}%40ey.com&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx={C_wctx_1}"
		"WxrZmU4gY3xAxtjBzvDLk5ig-sAL8MPvj3Ld83obnn31uMVv06Uf5aBoVlhiUFySqJzWVVQWJlrRUlhukdEeYpZultOoZuFl6tfcpZFlVuoLQA1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://login.microsoftonline.com/", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		LAST);

	if(atoi(lr_eval_string("{Count_User}"))>0)
	{
		lr_end_transaction("OPP_Login_002_Enter_Username",LR_PASS);
	}
	else
	{
		lr_end_transaction("OPP_Login_002_Enter_Username",LR_FAIL);
		lr_error_message("OPP_Login_002_Enter_Username failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	lr_think_time(v_tt);

	lr_start_transaction("OPP_Login_003_SignIn");
	
	web_reg_save_param_regexp(
		"ParamName=C_wresult",
		"RegExp=wresult\" value=\"&lt;(.*?)\" ",
		SEARCH_FILTERS,
		LAST);

	web_submit_data("ls_2", 
		"Action=https://globalaccess.ey.com/adfs/ls/?login_hint={P_UserID}%40ey.com&client-request-id={client-request-id}&username={P_UserID}%40ey.com&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx={C_wctx_1}", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t441.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=UserName", "Value={P_Username}", ENDITEM, 
		"Name=Password", "Value={P_Password}", ENDITEM, 
		"Name=AuthMethod", "Value=FormsAuthentication", ENDITEM, 
		LAST);
	
	web_convert_param(
        "C_wresult",
        "SourceString={C_wresult}",
        "SourceEncoding=HTML",
        "TargetEncoding=PLAIN",
         LAST );
	
	
		web_reg_save_param_regexp(
		"ParamName=C_code_1",
		"RegExp=code=(.*?)&state",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/resume*",
		LAST);
	

	web_submit_data("login.srf", 
		"Action=https://login.microsoftonline.com/login.srf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t442.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=wa", "Value=wsignin1.0", ENDITEM, 
		"Name=wresult", "Value=<{C_wresult}", ENDITEM, 
		"Name=wctx", "Value=estsredirect=2&estsrequest={C_estsrequest_1}", ENDITEM, 
		LAST);

	

	web_url("defaultAppConfig.json_2", 
		"URL=https://perf.opp.ey.com/assets/defaultAppConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t459.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("translation.json_2", 
		"URL=https://perf.opp.ey.com/locales/en/translation.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t460.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_custom_request("token", 
		"URL=https://auth-qa02.ey.com/oauth/token", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t462.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("UIStringDictionary.json_2", 
		"URL=https://perf.opp.ey.com/assets/UIStringDictionary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t463.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=Count_AccessToken",
		"Text=access_token",
		LAST);


     web_reg_save_param_regexp(
		"ParamName=C_BearerToken",
		"RegExp={\"access_token\":\"(.*?)\"",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("token_2",
		"URL=https://auth-qa02.ey.com/oauth/token",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://perf.opp.ey.com/",
		"Snapshot=t464.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"client_id\":\"{C_client_id_2}\",\"code_verifier\":\"raKjeXlos6xy.XIZEHn7gNJLpcOoLMZyEBfNivkwDd5\",\"grant_type\":\"authorization_code\",\"code\":\"{C_code_1}\",\"redirect_uri\":\"https://perf.opp.ey.com\"}",
		LAST);

	web_url("en.json_2", 
		"URL=https://perf.opp.ey.com/assets/locales/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t465.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("_legacy_auth0.{C_client_id_2}.is.authenticated=true; DOMAIN=perf.opp.ey.com");

	web_add_cookie("auth0.{C_client_id_2}.is.authenticated=true; DOMAIN=perf.opp.ey.com");

    web_add_auto_header("Authorization","Bearer {C_BearerToken}");

	web_custom_request("login", 
		"URL=https://perf.opp.ey.com/opp/authentication-perf/api/v1.1/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t467.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("fr.json_2", 
		"URL=https://perf.opp.ey.com/assets/locales/fr.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t468.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("UIStringDictionary.json_3", 
		"URL=https://perf.opp.ey.com/assets/UIStringDictionary.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t469.inf", 
		"Mode=HTTP", 
		LAST);
    
    

	web_url("updateAvailable", 
		"URL=https://perf.opp.ey.com/api/p-source-data-timestamp-sync/v1.0/notifications/updateAvailable", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t470.inf", 
		"Mode=HTTP", 
		LAST);
    
    
    
    web_add_header("tenantId","AAAAAA01-C1A0-442B-AA60-76535ADE9681");

	web_custom_request("login_2", 
		"URL=https://perf.opp.ey.com/opp/authentication-perf/api/v1.1/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t471.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);
    

	
		if(atoi(lr_eval_string("{Count_AccessToken}"))>0)
	{
		lr_end_transaction("OPP_Login_003_SignIn",LR_PASS);
	}
	else
	{
		lr_end_transaction("OPP_Login_003_SignIn",LR_FAIL);
		lr_error_message("OPP_Login_003_SignIn failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	lr_think_time(v_tt);

    /* click on see updates */

	lr_think_time(v_tt);
	lr_start_transaction("OPP_AdminRefresh_SeeUpdates");


	web_url("updateDetails", 
		"URL=https://perf.opp.ey.com/opp/data-sync-perf/api/v1.0/notifications/updateDetails?versionId=6", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OPP_AdminRefresh_SeeUpdates", LR_AUTO);

	lr_think_time(v_tt);
	
	lr_start_transaction("OPP_AdminRefresh_UpdateAll");

	/* click on update all */
	
	web_url("updateDetails_all", 
		"URL=https://perf.opp.ey.com/opp/data-sync-perf/api/v1.0/notifications/updateDetails?versionId=7", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);
	
//	web_add_cookie("OPP_SESSION_COOKIE=eyJTRVNTSU9OX0VYUElSQVRJT04iOiIyMDIzLTA5LTIyVDIyOjAyOjI0LjA5Mzk1Njc2M1oiLCJURU5BTlRfSUQiOiJhYWFhYWEwMS1jMWEwLTQ0MmItYWE2MC03NjUzNWFkZTk2ODEiLCJST0xFX0lEIjoiYWFhYWFhMDEtY2EwMS00NDJiLWFhNjAtNzY1MzVhZGU5Njc4IiwiU0VTU0lPTl9JRCI6IjE1NDJiNGFlLTU0YzMtNGE5MC04OGI5LTkyZjJhYWIxNmNiMiJ9; DOMAIN=perf.opp.ey.com");
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=updateCount",
		"Text=\"OK\"",
		LAST);

	web_custom_request("acceptAllGroup", 
		"URL=https://perf.opp.ey.com/opp/data-sync-perf/api/v1.0/group/acceptAllGroup", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body=[{\"versionId\":7,\"tenantOfferingGroupId\":2},{\"versionId\":7,\"tenantOfferingGroupId\":1}]",
		LAST);

	if(atoi(lr_eval_string("{updateCount}"))>0)
	{
		lr_end_transaction("OPP_AdminRefresh_UpdateAll",LR_PASS);
	}
	else
	{
		lr_end_transaction("OPP_AdminRefresh_UpdateAll",LR_FAIL);
		lr_error_message("OPP_AdminRefresh_UpdateAll failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
//	lr_end_transaction("OPP_AdminRefresh_UpdateAll", LR_AUTO);
	/**************************************************************************logout******************************************************************/

	lr_start_transaction("OPP_099_Logout");

	
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
	
	lr_end_transaction("OPP_099_Logout", LR_AUTO);
	
	return 0;
}