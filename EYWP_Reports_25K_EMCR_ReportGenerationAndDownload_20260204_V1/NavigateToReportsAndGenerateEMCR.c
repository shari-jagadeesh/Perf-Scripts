NavigateToReportsAndGenerateEMCR()
{
	
	
   long Download_Size = 0;
   float Download_Time = 0;

	web_add_auto_header("Tenantid","{P_TenantID}");
	web_add_cookie("OPP_SESSION_COOKIE={C_OPP_SESSION_COOKIE}; DOMAIN={P_Env}.opp.ey.com");
	web_add_auto_header("Roleid","admin");

	web_reg_find("Search=Body",
		"SaveCount=TextCheck_2",
		"Text={P_reportname}",
		LAST);
		
	lr_start_transaction("EYWP_Reports_EMCR_005_ReportingTab");
 
  	web_add_auto_header("Accept-Language","en-US,en;q=0.9");

	web_custom_request("reporting_list", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/reporting/list", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("analyticalReports", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/list/analyticalReports", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);
 
 
	if(atoi(lr_eval_string("{TextCheck_2}"))>0)
	{
		lr_end_transaction("EYWP_Reports_EMCR_005_ReportingTab",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Reports_EMCR_005_ReportingTab",LR_FAIL);
		lr_error_message("EYWP_Reports_005_ReportingTab failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	lr_think_time(v_tt);

	
	lr_start_transaction("EYWP_Reports_EMCR_006_ClickGenerate_EMCR");

    web_custom_request("EmployeeMasterCensusReport", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/recentTransaction/{P_reportname}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);
		
	web_reg_find("Search=Body",
		"SaveCount=TextCheck_3",
		"Text=Your request has been queued for processing",
		LAST);

	web_custom_request("requestreport", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/downloadable/requestreport",
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"reportName\":\"{P_reportname}\",\"outputFormat\":\"excel\"}", 
		LAST);
	
	
	web_custom_request("reporting_list", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/reporting/list", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);
		
	web_custom_request("analyticalReports", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/list/analyticalReports", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);
	
	if(atoi(lr_eval_string("{TextCheck_3}"))>0)
	{
		lr_end_transaction("EYWP_Reports_EMCR_006_ClickGenerate_EMCR",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Reports_EMCR_006_ClickGenerate_EMCR",LR_FAIL);
		lr_error_message("EYWP_Reports_ClickGenerate_EMCR failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	
	lr_think_time(v_tt);
	
	lr_start_transaction("EYWP_Reports_EMCR_007_RequestHistory");
	
	web_custom_request("reporting_list", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/reporting/list", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_reg_find("Search=Body",
		"SaveCount=TextCheck_4",
		"Text={P_reportname}",
		LAST);
	

	web_reg_save_param("C_filename","LB=,\"reportName\":\"{P_reportname}\",\"userEmail\":\"{P_UsernameSmall}\",\"fileName\":\"","RB=\"}","ORD=1",LAST);
	
	web_custom_request("history_list", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/history/list", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/request-history", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_custom_request("analyticalReports", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/list/analyticalReports", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/reports", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);
	
	if(atoi(lr_eval_string("{TextCheck_4}"))>0)
	{
		lr_end_transaction("EYWP_Reports_EMCR_007_RequestHistory",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Reports_EMCR_007_RequestHistory",LR_FAIL);
		lr_error_message("EYWP_Reports_EMCR_007_RequestHistory failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}

	lr_think_time(v_tt);
	

	lr_start_transaction("EYWP_Reports_EMCR_008_EMCRProcessingTime_ClickRefresh");
	retry:		
	for(i=1;i<=300;i++)
	{
		
		
		web_add_header("Content-Type",
		"application/json");
		
		web_add_header("Accept-Encoding",
		"gzip, deflate, br, zstd");
		
		web_reg_save_param_regexp(
		"ParamName=C_ReportStatus",
		"RegExp=\"status\":\"(.*?)\",",
		"NotFound=warning",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);

		
		web_custom_request("Refresh_history_list", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/history/list", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/request-history", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);
		
		if(strcmp(lr_eval_string("{C_ReportStatus}"),"COMPLETED")==0)
						{
							lr_output_message("The value is: %s", lr_eval_string("{C_ReportStatus}"));
							lr_output_message("Report Generation Completed");
							break;
						}
						else
						{
							lr_output_message("The value is: %s", lr_eval_string("{C_ReportStatus}"));
							lr_output_message("Report Generation is processing now");
							lr_think_time(10);
							goto retry;
						}
		}
	
	lr_end_transaction("EYWP_Reports_EMCR_008_EMCRProcessingTime_ClickRefresh",LR_PASS);
	
	
	lr_think_time(v_tt);

	web_reg_find("Search=Body",
		"SaveCount=TextCheck_12",
		"Text=\"status\":200",
		LAST);

	web_reg_save_param("C_URL","LB=,\"data\":\"","RB=\"}","ORD=1",LAST);

	lr_start_transaction("EYWP_Reports_EMCR_009_ClickDownload");

	web_custom_request("EmployeeMasterCensusReport.xlsx_Download", 
		"URL=https://perf.opp.ey.com/opp/reports-perf/api/v1.0/downloadable/export/{C_filename}", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/reporting/request-history", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);
	
    web_remove_auto_header("Authorization","ImplicitGen=No",LAST);
    
	web_custom_request("EmployeeMasterCensusReport_Download", 
		"URL={C_URL}", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("EmployeeMasterCensusReport_Download", 
		"URL={C_URL}", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t112.inf", 
		LAST);
	
	// Capture download metrics
	Download_Size = web_get_int_property(HTTP_INFO_DOWNLOAD_SIZE);
	Download_Time = web_get_int_property(HTTP_INFO_DOWNLOAD_TIME);
	
	lr_output_message("Downloaded File Size is: %ld Bytes", Download_Size);
	lr_output_message("File Download Size is: %ld KB", Download_Size / 1024);
	lr_output_message("File Download Time is: %.2f Seconds", Download_Time / 1000);

	
	if(Download_Size >14000000)
		{
			lr_end_transaction("EYWP_Reports_EMCR_009_ClickDownload",LR_PASS);
			lr_output_message("Report Generation is Completed");
		}
		else
		{
			lr_end_transaction("EYWP_Reports_EMCR_009_ClickDownload",LR_FAIL);
			lr_output_message("Report Generation is Failed");
		}
	
	/*	
		if(atoi(lr_eval_string("{TextCheck_12}"))>0)
	{
		lr_end_transaction("EYWP_Reports_EMCR_009_ClickDownload",LR_PASS);
	}
	else
	{
		lr_end_transaction("EYWP_Reports_EMCR_009_ClickDownload",LR_FAIL);
		lr_error_message("EYWP_Reports_EMCR_009_ClickDownload failed for used id : %s iteration: %s",lr_eval_string("{P_Username}"),lr_eval_string("{P_IterationNumber}"));
		lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_FAIL);
	}
	*/

	return 0;
}
