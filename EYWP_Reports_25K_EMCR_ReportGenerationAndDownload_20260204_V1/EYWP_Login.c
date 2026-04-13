EYWP_Login()
{
	web_set_max_html_param_len("99999");
	web_cache_cleanup();
	web_cleanup_cookies();
	web_cleanup_auto_headers();
	web_set_sockets_option("SSL_VERSION", "AUTO");
	//web_set_sockets_option("SSL_VERSION","2&3");
	//web_set_sockets_option("SSL_VERSION", "TLS1.2");

		
	web_set_user("ey.com\\{P_UserID}","{P_Password}","perf.opp.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","auth-qa02.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","login.microsoftonline.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","globalaccess.ey.com:443");
	web_set_user("ey.com\\{P_UserID}","{P_Password}","usedsub0lgsnr01.service.signalr.net:443");
	
	lr_start_transaction("EYWP_Login_001_Launch");
	
	web_reg_find("Fail=NotFound",
		"Search=All",
		"SaveCount=Count_EYWP",
		"Text=EY Workforce Platform",
		LAST);


	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("perf.opp.ey.com", 
		"URL=https://perf.opp.ey.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t001.inf", 
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
	
	   if(atoi(lr_eval_string("{Count_EYWP}"))>0)
	{
		lr_end_transaction("EYWP_Login_001_Launch",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Login_001_Launch",LR_FAIL);
		lr_error_message("EYWP_Login_001_Launch failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	
	lr_think_time(v_tt);

	lr_start_transaction("EYWP_Login_002_Enter_Username");
	
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
		lr_end_transaction("EYWP_Login_002_Enter_Username",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Login_002_Enter_Username",LR_FAIL);
		lr_error_message("EYWP_Login_002_Enter_Username failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	
	lr_think_time(v_tt);

	lr_start_transaction("EYWP_Login_003_SignIn");
	
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
	
	
//		web_reg_save_param_regexp(
//		"ParamName=C_code_1",
//		"RegExp=code=(.*?)&state",
//		SEARCH_FILTERS,
//		"Scope=Headers",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/resume*",
//		LAST);
	
	
	/*Correlation comment: Automatic rules - Do not change!  
Original value='rQQIARAA02I20jOwUrE0skxLNLdM0TUzTE7SNTG1TNNNTDWx1DU0NrCwME60TDNNMy0S4hKYuDdP20FGwW3xtdPyLkled1YxqmeUlBQUW-nrJ5aWZOgWJhoY6aVW6iXn5-rn5Kdn5uknJ-bkJCUmZ-9gZLzAyPiCkXESk3iAnnOInk-Qs15AalGagYGBA0THKiYRo9LwMMtyX_1ybX9j_ezU5OIAbf9bTPz-jkDDjUBEflFmVeosZgXz0uTSbC8zvwwPL6_UyvASt8KUjCzL8LSs8gyT7Pwk303MIqmVhYl6-Xm5mclF-cX5aSUgK04xi-QXpOZlpigUFOWnZeakKqTmJmbm3GBmvMDC-IqFx4DZioODS4BBgkGB4QcL4yJWoJ9XXBQOYvpW7D-zKm_ryhg-hlOs-iVFXkZlYfrOwQHFlRVmrgW--QFlFdnmiZ6J4VFhuZXe-b6FBskGPnnpSb62BlaGE9gYP7AxdbAz7OIkNrgO8DL84Jsz49L7lyefvPV4xa8TllJmVGCalulTmZ2fXhGepl-WGRhQ6m9QYOKapa9tGBagnVnuq-1RnBtkYQsA0' 
Name ='ctx' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=C_ctx_login.srf",
		"RegExp=sCtx\":\"(.*?)\",",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='d35d8229-8755-4cb0-8f59-13365cd51b00' Name ='C_hpgrequestid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=C_hpgrequestid_login.srf",
		"RegExp=x-ms-request-id:\\ (.*?)\\\r\\\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='AQABAAEAAAAtyolDObpQQ5VtlI4uGjEPz2paSBKetjEb2wZvt4FL6ymBxph4HqeuP2cw4zz11CENXmH8TyWhIvNMErEzWw3WAktQFVDur3DIUTDr_ybRCdnxu_fUVYwVRoYXs89R05dNc-0l1x0g49JlpWOsIt5OUiK28C1GrF0RMO8dVAYkRENrXAVh4-FAx-Jizx8ujDRjw6pJ8Pwp92jkf9gTx33haJZ15YRfbIAYLdYNIxmT0gNZNEpxs4iCFcNODRKbC0my0UaWshREOaHSPgGIWvIjLOpb9rGatpZ0veXlwtrPhy8KD67X11Teg2mFszwk9Qr8uyJILXCPa05COJm2039HjpW7ZXDRh5LWS0PYYPOxHnucQXlZiR2MuXhtqsKeQWAE0w3zO_fzKMCEO_CLBhwsjzwMC7hiUN8SXTmSgbhF8x3rjqRkhJUhNgURSuii0xqhqf9HPpVAts_3Sn4nubEz7I-DvI-VTfOo5sWGGjlwZs6N-sQLEkxAhNudnPLfYSR1Kegw-zn7n4xCfPxdr_YiNfQyJLf3HbLZ5ZvChElSbQb-hmE9y4GNyaUp7XV4hHBrULZQOqi3AmfAu4hi0xUjKzUidP7e6LqV33SLLt6wfOeL5xhx1madyTImyW2PMRLhskS1K-k1HjyYuROupksJJ-E-ZeZ6CRJYoDCCuSSzj0_IqBLydPzLt5jICSmJTrpDdFEh2ea5IJ_HpD4AioXZ4KCfUdhIKV8tYOsmvIVqpt6XKYawzjKc_dpigSD7T-AeOywydQOn_sjyYFMzTAUnGCtfU4pmAuAFhAgrz5qDvG1Bd8bn-Hl2KL_oTY5cejz8c6IXiNA_uvR-mYfheHmb6uWsB6Cl0kETPqw9tpd3OQYfUaEZhwi0DD671jQdoozAQgBAyLGyqTvYaZSVw2nVvmGjabWTB8xpMz6M_H7RaBw4oX1Fk8T9F_dioxnvYtVLFKA5QwiN-UrRVESSf8uMC9oiNgDG2G9YQalijEK-jAlEASYHaY-TiQmZYv7KCAyi1YUsxL4WpB-LxViQq_mV63QzU7zuUc_by_65S64n6ZfdDXTF_pqBuAH4AwDVgWJ1x9qQybxwJ0beLcuwLeItepQiRmxjNnIilF1R6kSJMRrr7A4vkT6yl5Z0_3_GwrQgAA' 
Name ='CorrelationParameter' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=C_flowtoken_login.srf",
		"RegExp=sFT\":\"(.*?)\",",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='trJ2vV/CSPsyx6EpMoPvxk7aIaWZVmyKoMq0c0LngbM=7:1:CANARY:yz4KWbsboMi8/x8QISWnzFzwehFvpH5HYo6eitu+saM=' 
Name ='canary' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=C_canary_login.srf",
		"RegExp=canary\":\"(.*?)\",",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
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
		
		
		web_reg_save_param_regexp(
		"ParamName=C_code_1",
		"RegExp=code=(.*?)&state",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/resume*",
		LAST);
	
	
	
	web_submit_data("appverify",
		"Action=https://login.microsoftonline.com/appverify",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://login.microsoftonline.com/",
		"Snapshot=t1735.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=ContinueAuth", "Value=true", ENDITEM,
		"Name=ctx", "Value={C_ctx_login.srf}", ENDITEM,
		"Name=hpgrequestid", "Value={C_hpgrequestid_login.srf}", ENDITEM,
		"Name=flowToken", "Value={C_flowtoken_login.srf}", ENDITEM,
		"Name=iscsrfspeedbump", "Value=true", ENDITEM,
		"Name=canary", "Value={C_canary_login.srf}", ENDITEM,
		"Name=i19", "Value=40940", ENDITEM,
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

	//web_add_cookie("_legacy_auth0.{C_client_id_2}.is.authenticated=true; DOMAIN=perf.opp.ey.com");

	//web_add_cookie("auth0.{C_client_id_2}.is.authenticated=true; DOMAIN=perf.opp.ey.com");
	
	
    web_add_cookie("_legacy_auth0.nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp.is.authenticated=true; DOMAIN=perf.opp.ey.com");

	web_add_cookie("auth0.nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp.is.authenticated=true; DOMAIN=perf.opp.ey.com");

    web_add_auto_header("authorization","Bearer {C_BearerToken}");
    
    web_custom_request("login", 
		"URL=https://perf.opp.ey.com/opp/authorization-perf/api/v2.0/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t98.inf", 
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
    
    /******Choose Tenant********/
    
    web_reg_save_param_regexp(
		"ParamName=C_OPP_SESSION_COOKIE",
		"RegExp=OPP_SESSION_COOKIE=(.*?);",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
    
    
    web_custom_request("login_2", 
		"URL=https://perf.opp.ey.com/opp/authorization-perf/api/v2.0/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"tenantId\":\"{P_TenantID}\"}", 
		LAST);
    
    web_url("updateAvailable", 
		"URL=https://perf.opp.ey.com/api/p-source-data-timestamp-sync/v1.0/notifications/updateAvailable", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);
		
		web_url("permissions", 
		"URL=https://perf.opp.ey.com/opp/authorization-perf/api/v2.0/access-group/permissions", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);
    
    web_url("stringDict", 
		"URL=https://perf.opp.ey.com/opp/configservice-perf/api/v1.0/config/stringDict", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t330.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("transactionLogs", 
		"URL=https://perf.opp.ey.com/opp/authorization-perf/api/v2.0/transactionLogs", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);
   
	
		if(atoi(lr_eval_string("{Count_AccessToken}"))>0)
	{
			lr_output_message("EYWP_Login_003_SignIn passed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_end_transaction("EYWP_Login_003_SignIn",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Login_003_SignIn",LR_FAIL);
		lr_error_message("EYWP_Login_003_SignIn failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	
	
	lr_think_time(v_tt);
	
	
	return 0;
}
