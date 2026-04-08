//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Evaluate JavaScript code Utils.clearCookies(); Utils.clearCache()", "snapshot=Action_1.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_01_LAUNCH");
	truclient_step("2", "Navigate to 'https://consume.eyfabric.ey.com/'", "snapshot=Action_2.inf");
	truclient_step("3", "Wait until Email address * textbox exists", "snapshot=Action_3.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_01_LAUNCH",0);
	truclient_step("4", "Click on Email address * label", "snapshot=Action_4.inf");
	truclient_step("5", "Type P_UID in Email address * textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Next button", "snapshot=Action_6.inf");
	truclient_step("7", "Enter credentials in authentication dialog", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Password passwordbox", "snapshot=Action_8.inf");
	truclient_step("9", "Type ***** in Password passwordbox", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Sign in", "snapshot=Action_10.inf");
	truclient_step("11", "Wait until Do you trust ey.com? exists", "snapshot=Action_11.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_02_LOGIN");
	truclient_step("12", "Click on Continue button", "snapshot=Action_12.inf");
	truclient_step("19", "Wait until Consume button exists", "snapshot=Action_19.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_02_LOGIN",0);
	truclient_step("20", "Click on Search by Tags or Offering... searchbox", "snapshot=Action_20.inf");
	truclient_step("21", "Type The combined value in Search by Tags or Offering... searchbox", "snapshot=Action_21.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_03_SEARCHWORKBENCH");
	truclient_step("24", "Click on button (1) button", "snapshot=Action_24.inf");
	truclient_step("26", "Wait until Workbench exists", "snapshot=Action_26.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_03_SEARCHWORKBENCH",0);
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_04_CLICKCONSUME");
	truclient_step("27", "Click on Consume button", "snapshot=Action_27.inf");
	truclient_step("28", "Wait until ARADS Product Development heading exists", "snapshot=Action_28.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_04_CLICKCONSUME",0);
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_05_SELECT_BILLING_PROJECT");
	truclient_step("31", "Click on Select button", "snapshot=Action_31.inf");
	truclient_step("33", "Wait until Configure the Instance textbox exists", "snapshot=Action_33.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_05_SELECT_BILLING_PROJECT",0);
	truclient_step("59", "Click on Configure the Instance textbox", "snapshot=Action_59.inf");
	truclient_step("60", "Type P_TIID in Configure the Instance textbox", "snapshot=Action_60.inf");
	truclient_step("62", "Click on Location (required)", "snapshot=Action_62.inf");
	truclient_step("67", "Select India Central from US West 2 listbox", "snapshot=Action_67.inf");
	truclient_step("72", "Scroll Data Science empowers... heading into view", "snapshot=Action_72.inf");
	truclient_step("73", "Click on YES label", "snapshot=Action_73.inf");
	truclient_step("74", "Scroll Create Storage Account label into view", "snapshot=Action_74.inf");
	truclient_step("75", "Wait until Create Storage Account label exists", "snapshot=Action_75.inf");
	truclient_step("79", "Click on Create Storage Account label", "snapshot=Action_79.inf");
	truclient_step("80", "Scroll Create Standard General... label into view", "snapshot=Action_80.inf");
	truclient_step("83", "Click on Create Standard General... label", "snapshot=Action_83.inf");
	truclient_step("94", "Scroll Next button into view", "snapshot=Action_94.inf");
	truclient_step("95", "Click on Cost Summary", "snapshot=Action_95.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_06_CONFIGURE_INSTANCE");
	truclient_step("97", "Click on Next button", "snapshot=Action_97.inf");
	truclient_step("100", "Wait until Terms & Conditions heading exists", "snapshot=Action_100.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_06_CONFIGURE_INSTANCE",0);
	truclient_step("101", "Scroll I’ve read and agree to... label into view", "snapshot=Action_101.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_07_AGREE_T&C");
	truclient_step("102", "Click on I’ve read and agree to... label", "snapshot=Action_102.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_07_AGREE_T&C",0);
	truclient_step("104", "Click on Cost Summary", "snapshot=Action_104.inf");
	truclient_step("105", "Scroll Submit button into view", "snapshot=Action_105.inf");
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_08_T&C_SUBMIT");
	truclient_step("106", "Click on Submit button", "snapshot=Action_106.inf");
	truclient_step("107", "Click on Submit button", "snapshot=Action_107.inf");
	truclient_step("112", "Wait until Consume button exists", "snapshot=Action_112.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_08_T&C_SUBMIT",0);
	lr_start_transaction("WORKBENCH_01_MAIN_OFFERING_09_LOGOUT");
	truclient_step("113", "Click on element (1)", "snapshot=Action_113.inf");
	truclient_step("115", "Click on Logout button", "snapshot=Action_115.inf");
	lr_end_transaction("WORKBENCH_01_MAIN_OFFERING_09_LOGOUT",0);

	return 0;
}
