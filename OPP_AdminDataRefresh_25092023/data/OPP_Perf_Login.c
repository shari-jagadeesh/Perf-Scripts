OPP_Perf_Login()
{

	lr_start_transaction("launch");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("homeCloud", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/settings/homeCloud", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t376.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&scpfull=0&scpguard=0&scpver=0&osver=10.0.19045&devicefamily=desktop&installdate=1646007663&clientversion=117.0.2045.31&experimentationmode=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t377.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=117.0.2045.31&lang=en-US&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.0%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t379.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("MC1=GUID=f800f1e54a98429cb0f3c5d9788145c1&HASH=f800&LV=202306&V=4&LU=1685949271509; DOMAIN=edge.microsoft.com");

	web_add_cookie("MUID=3BAABFEF6FFB65542B78ACC86E0C649F; DOMAIN=edge.microsoft.com");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("installverify", 
		"URL=https://edge.microsoft.com/extensioninstallverifier/v1.1/installverify", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t380.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"hash\":\"sWsDD1Iz2w3yPpqgJHx3ZgRG0E0YYXyvCjecOgd3h74=\",\"ids\":[\"higleibocjmgcnbikjneplkibiopjnkp\",\"jmjflgjpcpepeafmmgdpfkogkghcpiha\",\"lgliocaeggimgcpgbbejhdnbmajgaiii\",\"mhncbalhhpmgdjjinoggebdcaimmmccf\"],\"protocol_version\":1}", 
		LAST);

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=w2Exo4tKPVJP12SD%2F%2BFhag%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t381.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18w2Exo4tKPVJP12SD/+Fhag==\\x10c\\x18\\x02*#\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xFC\\xDE$2\\x0E\\x08\\x81\\xF5\\x02\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00H\\x07\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR\\x18\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:w2Exo4tKPVJP12SD/+Fhag==", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_custom_request("sync", 
		"URL=https://europe.smartscreen.microsoft.com/api/browser/edge/navigate/3/sync", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t382.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/117.0.0.0 Safari/537.36 Edg/117.0.2045.31\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEONmeYwtIxrzS99ZihZsgDbgADP955H1RjvpI22FshvIUi+cqk3nMnIqK7CANO1HU1dGYTHnsHHIC0MK7MQj4f2FtpDI1z+Cx4uMt0rQCG92KFlJP+aM5PUOzqLnD1iBan2tRPGmNl1AxH+rpA6WRUiWpN7Xnu7GWQoHopEHuySi7lHGqujk8eVj25sgnEmM/"
		"b6KhHrUj8KVfZtQNGA1qD5aDzoufv4wQiM3zB4+u+LQBgZhoXIY2MbtA0E4D9cL3J7im9tHqpEhotWQp43ymt4O2mmROrdZxQQ7SwP5+gxkt5XL7dwQMtU5cElMD4Z7PjUrHwE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3448.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":3,\"enterprise\":{\"geoId\":\"EU\",\"organizationId\":\"6ac0ba9f-f8fa-4bec-9137-6d9a10b5a623\",\"senseId\":\"995f6ea81bfcbf29e65f4be332c1e8d50f080927\",\"enabled\":true},\"cloudSku\":false,\"architecture\":9},\""
		"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"117.0.2045.31 (Official build) \"},\"client\":{\"version\":281483717836801,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"638306185376166667-59929144\",\"synchronousLookupUris\":\"638306176237111632\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://cloud.applearn.tv/auth/extension/?url=chrome-extension://mhncbalhhpmgdjjinoggebdcaimmmccf&extensionID=mhncbalhhpmgdjjinoggebdcaimmmccf\",\"ip\":null},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"92302e99-fda0-4699-81c4-d4d9885a5279\",\"synchronous\":true}", 
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

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_think_time(19);

	web_url("extension", 
		"URL=https://cloud.applearn.tv/auth/extension/?url=chrome-extension://mhncbalhhpmgdjjinoggebdcaimmmccf&extensionID=mhncbalhhpmgdjjinoggebdcaimmmccf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_url("crx_2", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=117.0.2045.31&lang=en-US&acceptformat=crx3,puff&x=id%3Dhigleibocjmgcnbikjneplkibiopjnkp%26v%3D23.8.1%26installedby%3Dpolicy%26uc&x=id%3Dlgliocaeggimgcpgbbejhdnbmajgaiii%26v%3D16.0.101%26installedby%3Dpolicy%26uc&x=id%3Dmhncbalhhpmgdjjinoggebdcaimmmccf%26v%3D4.2.3%26installedby%3Dpolicy%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(9);

	web_custom_request("subscriptions", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t386.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelExpireTime\":\"Fri, 01 Mar 2024 17:53:33 GMT\",\"channelurl\":\"https://wns2-sg2p.notify.windows.com/w/?token=BQYAAAApSh47T%2byRNmy7edWL8X79JSjnrKAKmBCMjrG2Ry%2fpPKlDEnUQL1qR3UDTBXiHqOeJBWyG6YMS71whDGxAK3S1m4miG%2f8WqtixYWeJa7k4799dL%2fiPSt8VYJaws4cb8p5BeVB0Tmr%2fuRxpsK0shv7in9cBdhHje4gAdsKmEuryyGCjLF7GY87T1VDv%2bthtrrcNwNdvVDIecGi04Ja86FIGcHUEBQ7QG4w1LHcAMd3iR2o03NpNpzn%2fVzw5GsEX4ps%3d\",\"deviceId\":\"chr:w2Exo4tKPVJP12SD/+Fhag==\",\"publisherFilters\":[{\"activityTypes\":[64,65,"
		"66,67,70,71,72,77,79,82,103,104,106,108,109,112,113],\"application\":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=w2Exo4tKPVJP12SD%2F%2BFhag%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t387.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18w2Exo4tKPVJP12SD/+Fhag==\\x10c\\x18\\x02*\\xD1\\x04\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xB4\\x13\\xF1\\x9C\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9E\\x95+\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002 \\x08\\xC7\\x87\\x03\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t"
		"\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08MT\\\\\\xA7\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08\\x96\\xCD\\x97\\xA6\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08MT\\\\\\xA7\\x8A\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionR\\xE1\\x06\n+\\x12)8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\\x92\\x03\\x18S70BxbCBRoauX0YGPOVfDV.1\n"
		"!*\\x1F\\x08\\x88\\x81\\x02h\\x00x\\x92\\xC3\\x96\\x0C\\x90\\x01\\xC6\\xA6\\x02\\x90\\x01\\x9A\\xB7\t\\x90\\x01\\xFC\\xDE$\\x90\\x01\\xD0\\xAF:\n\\x11*\\x0F\\x08\\xC6\\xA6\\x02h\\x00x\\xF0\\xEE|\\x90\\x01\\x81\\xF5\\x02\n\\x12*\\x10\\x08\\xB1\\xE6\\x02h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\n\\x17*\\x15\\x08\\xF1\\xF7\\x01h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\n\\x1C*\\x1A\\x08\\x9E\\x95+"
		"h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\n!*\\x1F\\x08\\xCD\\xBE\\x02h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\n&*$\\x08\\xF7\\xF7\\x02h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\n+*)"
		"\\x08\\xC7\\x87\\x03h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\n0*.\\x08\\x9F\\xEF\\x05h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\n5*3\\x08\\xEB\\x95\t"
		"h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\n\\x16*\\x14\\x08\\x9A\\xB7\th\\x00x\\xF0\\xEE|\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\n:*8\\x08\\xEE\\xF7!h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+"
		"\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\n\\x1E*\\x1C\\x08\\xFC\\xDE$h\\x9E\\xD4\\x99\\x0Bx\\xF0\\xEE|\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\n?*=\\x08\\xC9\\x8B)h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+"
		"\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\nD*B\\x08\\xA1\\xDD'h\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\n *\\x1E\\x08\\xD0\\xAF:h\\x00x\\xF0\\xEE|"
		"\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\\x98\\x01\\xFC\\xDE$\nI*G\\x08\\xA9\\xF0Oh\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\\x98\\x01\\xA1\\xDD'\n"
		"N*L\\x08\\xB5\\xDADh\\x00x\\x83\\xD0\\x96\\x0C\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\\x98\\x01\\xA1\\xDD'\\x98\\x01\\xA9\\xF0O\n\\x0C*\n\\x08\\x81\\xF5\\x02h\\x00x\\xFF\\xE6|\n\\x04\\x18\\xEE\\xF7!\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b "
		"00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:w2Exo4tKPVJP12SD/+Fhag==", 
		LAST);

	lr_think_time(7);

	web_url("main.9f34b9b5.js", 
		"URL=https://perf.opp.ey.com/static/js/main.9f34b9b5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t388.inf", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:dsOC8U4lFHBoaU8c_BpkzQ1S2PFnjBoI0gRH1hN1CJ8&cup2hreq=9449d3a84733418dcb67320fc32b12be5a300baa52865588a4e2e7070691b397", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.47,\"AppVersion\":\"117.0.2045.31\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.08\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.08\",\"AppMajorVersion\":\"117\",\"AppRollout\""
		":0.08,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.03\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.03\",\""
		"AppMajorVersion\":\"117\",\"AppRollout\":0.03,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8AA3F8BEEA3F8DFB32ECD478C874CA438D2EB07F78DECF5B0A7121C3557C45ED\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.72,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"10.34.0.49\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.14\",\"AppMajorVersion\":\""
		"117\",\"AppRollout\":0.14,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.59,\"AppVersion\":\"117.0.2045.31\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.3,\""
		"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.23\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.23\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.23,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,"
		"\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.79\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.94F5B3A4C0895033D87F313223769323CE951CCC51960109807DA84CA3EEFED4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.79\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.79,\"AppVersion\":\"117.0.2045.31\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.2.32\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.61\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.61\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.61,\""
		"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.54\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.54\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.54,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.13\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.13\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.13,\"AppVersion\":\""
		"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.90\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.F6B0FD1E30DE28D6137D2AFAA2A9148C816AF035CFDD68E5C38BE18F8D238C4E\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.90\",\"AppMajorVersion\":\"117\",\""
		"AppRollout\":0.9,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2.0.5870.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.29\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2BC302F76A4E272A833D6BF17EFDF9CFC48E12EF025ABABFCF2DF2D4F6459747\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.29\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.29,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2983\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]}"
		",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.58,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.12\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.12\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.12,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.2B45F3322B8B3D3DF82B41EAB4FBEFE7F8D57605FCCA0738085350FBA40EE35B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.24,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2.0.0.2\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.98\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0DB50494B994B55F9F816257EC371B55BA4E52689C03231B141B8D3FF1D394C3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.98\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.98,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"4.0.0.4\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\""
		"WULS\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.866C32CA8E7113B198C8B1C0533FD7A79685C6112EFF95D5991F2D7E4AEE580A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.95\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.95,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"116.16260.16236.1\"}"
		",{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.92\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.92\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.92,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.177.11\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.31\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.EAD1B290335287222EB188219F6CB2852E0C43736ADC53D3F2CDB8768AAC6335\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.31\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.31,\"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"WULS\",\"cohort\":\"rrf@0.87\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.D1841099A7991456D26FF9911CEF149249E88EF9A25993329C88FDCF7CF45B4C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.87\",\"AppMajorVersion\":\"117\",\"AppRollout\":0.87,\""
		"AppVersion\":\"117.0.2045.31\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.177.11\"},\"updatecheck\":{},\"version\":\"2023.8.9.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3448\"},\"prodversion"
		"\":\"117.0.2045.31\",\"protocol\":\"3.1\",\"requestid\":\"{66f62a44-a77a-49d2-858d-104f932effca}\",\"sessionid\":\"{05ddd35d-aba3-4562-9cc7-b986a9b51333}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.177.11\"},\"updaterversion\":\"117.0.2045.31\"}}", 
		LAST);

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("auth.js", 
		"URL=https://cloud.applearn.tv/auth.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t390.inf", 
		LAST);

	web_custom_request("3", 
		"URL=https://europe.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t391.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/117.0.0.0 Safari/537.36 Edg/117.0.2045.31\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEONmeYwtIxrzS99ZihZsgDbgADP955H1RjvpI22FshvIUi+cqk3nMnIqK7CANO1HU1dGYTHnsHHIC0MK7MQj4f2FtpDI1z+Cx4uMt0rQCG92KFlJP+aM5PUOzqLnD1iBan2tRPGmNl1AxH+rpA6WRUiWpN7Xnu7GWQoHopEHuySi7lHGqujk8eVj25sgnEmM/"
		"b6KhHrUj8KVfZtQNGA1qD5aDzoufv4wQiM3zB4+u+LQBgZhoXIY2MbtA0E4D9cL3J7im9tHqpEhotWQp43ymt4O2mmROrdZxQQ7SwP5+gxkt5XL7dwQMtU5cElMD4Z7PjUrHwE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3448.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":3,\"enterprise\":{\"geoId\":\"EU\",\"organizationId\":\"6ac0ba9f-f8fa-4bec-9137-6d9a10b5a623\",\"senseId\":\"995f6ea81bfcbf29e65f4be332c1e8d50f080927\",\"enabled\":true},\"cloudSku\":false,\"architecture\":9},\""
		"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"117.0.2045.31 (Official build) \"},\"client\":{\"version\":281483717836801,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"638306185376166667-59929144\",\"synchronousLookupUris\":\"638306176237111632\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://auth.applearn.tv/auth/realms/yeself/protocol/openid-connect/login-status-iframe.html\",\"ip\":null},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"a663b76a-ed8d-4db4-b24f-8c5df845ea35\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://europe.smartscreen.microsoft.com/api/browser/edge/data/bloomfilter/x/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t392.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEONmeYwtIxrzS99ZihZsgDbgADP955H1RjvpI22FshvIUi+cqk3nMnIqK7CANO1HU1dGYTHnsHHIC0MK7MQj4f2FtpDI1z+Cx4uMt0rQCG92KFlJP+aM5PUOzqLnD1iBan2tRPGmNl1AxH+rpA6WRUiWpN7Xnu7GWQoHopEHuySi7lHGqujk8eVj25sgnEmM/b6KhHrUj8KVfZtQNGA1qD5aDzoufv4wQiM3zB4+u+LQBgZhoXIY2MbtA0E4D9cL3J7im9tHqpEhotWQp43ymt4O2mmROrdZxQQ7SwP5+gxkt5XL7dwQMtU5cElMD4Z7PjUrHwE=&p=\",\""
		"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3448.vb_release\",\"browser\":{\"internet_explorer\":\"9.11.19041.0\"},\"netJoinStatus\":3,\"enterprise\":{\"geoId\":\"EU\",\"organizationId\":\"6ac0ba9f-f8fa-4bec-9137-6d9a10b5a623\",\"senseId\":\"995f6ea81bfcbf29e65f4be332c1e8d50f080927\",\"enabled\":true},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"117.0.2045.31 (Official build) \"},\"client\":{\"version\":281483717836801,\"data\":"
		"{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"638306185376166667-59929144\",\"synchronousLookupUris\":\"638306176237111632\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"correlationId\":\"A663B76A-ED8D-4DB4-B24F-8C5DF845EA35\",\"debugInfo\":{\"clientId\":\"4DE56B42-9876-4342-9051-23C72D527052\"}}", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(12);

	web_custom_request("command_3", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=w2Exo4tKPVJP12SD%2F%2BFhag%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t393.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18w2Exo4tKPVJP12SD/+Fhag==\\x10c\\x18\\x01\"\\xF0\\x19\n\\xE4\\x01\n$1a62038e-3519-4550-96f8-7817733e9f4d \\xAD\\xC1\\xF6\\xB9\\xAA1(\\xF8\\xF2\\xCE\\xBA\\xAA10\\xA9\\x98\\xC8\\xD4\\xD20:\\x14IN2448830W2 (header)\\x90\\x01\\x00\\xAA\\x01n\\xBA\\xBC\\x18j\n\\x18w2Exo4tKPVJP12SD/+Fhag==\\x12N\\x12=\\x08\\x90\\xD2\\xC0\\xE5\\x02\\x10\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x18\\x01 \\x91\\xD2\\xC0\\xE5\\x02 \\xC5\\xD2\\xC0\\xE5\\x02 \\xCE\\xD2\\xC0\\xE5\\x02 "
		"\\xCF\\xD2\\xC0\\xE5\\x02 \\xD2\\xD2\\xC0\\xE5\\x02 \\xD5\\xD2\\xC0\\xE5\\x02 \\xD8\\xD2\\xC0\\xE5\\x02\\x1A\\x0BIN2448830W2 \\x01\\xBA\\x01\\x1C3taREmxNuSPNbgxN8PIkzDFQksY=\n_\n$5a825500-96eb-4085-be45-94c19e6955a7 \\xAE\\xC1\\xF6\\xB9\\xAA1(\\xE8\\xB2\\xF7\\xB9\\xAA1:\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1CIL0VYblx2LpFlwYxIVkMZqfrslw=\n_\n$583a877d-06a3-4fd9-b0cd-f4646fa024ba \\xB0\\xC1\\xF6\\xB9\\xAA1(\\xF7\\xF2\\xCE\\xBA\\xAA1"
		":\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1CR0cHXXEQa22bhAG8oLMZ6yahwRg=\n_\n$06ecef76-0a7e-420a-bbc6-16aac7490256 \\xB1\\xC1\\xF6\\xB9\\xAA1(\\xE8\\xB2\\xF7\\xB9\\xAA1:\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1CUfHVXBlYWFRgvp0YUOtoVaw9T/g=\n\\xE5\\x10\n$5652db61-34fb-4a89-a613-bd16162e675c \\xB3\\xC1\\xF6\\xB9\\xAA1(\\xE9\\xAB\\x81\\xBA\\xAA10\\x95\\x8D\\x9C\\xB6\\xAA1:\\x18IN2448830W2 (tab node 1)"
		"\\x90\\x01\\x00\\xAA\\x01\\xEA\\x0F\\xBA\\xBC\\x18\\xE5\\x0F\n\\x18w2Exo4tKPVJP12SD/+Fhag==\\x1A\\xC6\\x0F\\x08\\xC5\\xD2\\xC0\\xE5\\x02\\x10\\x90\\xD2\\xC0\\xE5\\x02\\x18\\x00 \\x06(\\x002\\x00:\\xA7\\x02\\x12Hhttps://mail.google.com/mail/u/0/#inbox/FMfcgzGtxKPHTFNwngBbbfdgBWngPxvf\\x1A\\x00\"BRAJAT, here's your PIN 083858 - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xB5\\x01H\\x89\\xBA\\xA2\\xB9\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\xA8\\xD6\\xAE\\xF9\\xB3\\x86\\xD9\\x17\\x8A\\x016https://"
		"ssl.gstatic.com/ui/v1/icons/mail/rfr/gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xF7\\x01\\x12'https://mail.google.com/mail/u/0/#inbox\\x1A\\x00\"3Inbox (14,380) - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xD7\\x01H\\xF1\\x82\\xF4\\xB9\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\xE8\\xC2\\xCF\\xF6\\xB8\\x86\\xD9\\x17\\x8A\\x016https://ssl.gstatic.com/ui/v1/icons/mail/rfr/"
		"gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xB5\\x02\\x12Hhttps://mail.google.com/mail/u/0/#inbox/FMfcgzGtxKPHTGTWmGxPmjGnPFMqbJnM\\x1A\\x00\"PRAJAT, your password was successfully reset - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xD8\\x01H\\x89\\xBA\\xF4\\xB9\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\xA8\\xD6\\xFE\\xF9\\xB8\\x86\\xD9\\x17\\x8A\\x016https://"
		"ssl.gstatic.com/ui/v1/icons/mail/rfr/gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xF7\\x01\\x12'https://mail.google.com/mail/u/0/#inbox\\x1A\\x00\"3Inbox (14,379) - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xD9\\x01H\\xFF\\xD0\\xF4\\xB9\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\x98\\xE0\\xB1\\xFB\\xB8\\x86\\xD9\\x17\\x8A\\x016https://ssl.gstatic.com/ui/v1/icons/mail/rfr/"
		"gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xAD\\x02\\x12Hhttps://mail.google.com/mail/u/0/#inbox/FMfcgzGtxKPHBQwjwTCmSVXfcfJcMGzh\\x1A\\x00\"HView your new badge from Databricks - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xDA\\x01H\\xDC\\xB2\\xF7\\xB9\\xAA1P\\x01X\\x00`\\x00h\\x00p\\x00x\\xE0\\x9E\\xFD\\x90\\xB9\\x86\\xD9\\x17\\x8A\\x016https://ssl.gstatic.com/ui/v1"
		"/icons/mail/rfr/gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x06\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xF7\\x01\\x12'https://mail.google.com/mail/u/0/#inbox\\x1A\\x00\"3Inbox (14,379) - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xE1\\x01H\\xE5\\xB4\\xFD\\xB9\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\x88\\xB5\\xFD\\xBF\\xB9\\x86\\xD9\\x17\\x8A\\x016https://ssl.gstatic.com/ui/v1/icons/mail/rfr/"
		"gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00:\\xAD\\x02\\x12Hhttps://mail.google.com/mail/u/0/#inbox/FMfcgzGtxKPHBQwjwTCmSVXfcfJcMGzh\\x1A\\x00\"HView your new badge from Databricks - rajatvinayakumar@gmail.com - Gmail0\\x00@\\xE2\\x01H\\xCB\\xAB\\x81\\xBA\\xAA1P\\x00X\\x00`\\x00h\\x00p\\x00x\\xF8\\xC1\\xD5\\xDE\\xB9\\x86\\xD9\\x17\\x8A\\x016https://ssl.gstatic.com/ui/v1"
		"/icons/mail/rfr/gmail.ico\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x01\\xD0\\x01\\x00\\xEA\\x01,\n!https://mail.google.com/mail/u/0/\\x10\\x81\\x8D\\x9C\\xB6\\xAA1\\x18\\x01\\xC8>\\x00h\\x01 \\x01\\xBA\\x01\\x1CdAO66iEIdTQJk4pVazBm2TWl1oM=\n_\n$a1ee698a-abe6-4cca-9db2-f11a47134722 \\xB4\\xC1\\xF6\\xB9\\xAA1(\\xF7\\xF2\\xCE\\xBA\\xAA1:\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1ClZjTQjVRx7mUvrjDGzNQuyiAY4Y=\n_\n$92f89ee7-4f47-4c62-9e1a-7f3e166d5363 "
		"\\xB5\\xC1\\xF6\\xB9\\xAA1(\\xE8\\xB2\\xF7\\xB9\\xAA1:\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1Cz9FYhHSrQCCBCq6i0rKOLR+7lRE=\nI\\xAA\\x01F\\xF2\\xBE\\x8F\\x02A\"\\x05en-US2+psjsL8c23-_x-1eK3b97KFrVu41xkAE1eqq7dkMlrCM:\\x02\\x18\\x02`\\xE5\\xAA\\xE8\\xD8\\xC1\\x86\\xD9\\x17\\x12\\x18w2Exo4tKPVJP12SD/+Fhag==\"R\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+"
		"\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\xA9\\xF0O\\x08\\xB5\\xDAD\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02.vb-'+;hD rGva`DX,*CTF=3CwH;m|`2CZ_bZE0S*_Pyx+Ah9?^k{!*sIp'okg8taq'm=@I'x@\")GfN)GB&x+lm[w`lYWBVxWCl@\"$zuh1l&_J@Kr\\\\@M`*lt0,DArfLWFqo<%{{gKsJPWpP\"(11.i/XQ'?XSxu9Z<.#Ie/I7wTD> Gx}i}wv#@D{6)CY!@I)PV|H-?Ie`,_UnZ-|G9c5G"
		"]7bV3MHzqNz.g9Ah)*jj(xegQ+q.XSvSGYy|Nwy_!a6:\\x1FProductionEnvironmentDefinitionR\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x03\n\\x010b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:w2Exo4tKPVJP12SD/+Fhag==", 
		LAST);

	web_concurrent_start(NULL);

	web_url("890.be7280de.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/890.be7280de.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t394.inf", 
		LAST);

	web_url("313.a6b10f70.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/313.a6b10f70.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t395.inf", 
		LAST);

	web_url("168.97b3d649.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/168.97b3d649.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t396.inf", 
		LAST);

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?linkid=2133855&bucket=42", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t397.inf", 
		LAST);

	web_url("590.c60bfc05.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/590.c60bfc05.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t398.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_url("login-status-iframe.html", 
		"URL=https://auth.applearn.tv/auth/realms/yeself/protocol/openid-connect/login-status-iframe.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t399.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("388.45490fd7.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/388.45490fd7.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t400.inf", 
		LAST);

	web_url("init", 
		"URL=https://auth.applearn.tv/auth/realms/yeself/protocol/openid-connect/login-status-iframe.html/init?client_id=yeself-editor&origin=https%3A%2F%2Fcloud.applearn.tv", 
		"Resource=0", 
		"Referer=https://auth.applearn.tv/auth/realms/yeself/protocol/openid-connect/login-status-iframe.html", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("129.982bf91b.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/129.982bf91b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t402.inf", 
		LAST);

	web_url("548.f27cf63f.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/548.f27cf63f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t403.inf", 
		LAST);

	web_url("466.8f76f210.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/466.8f76f210.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t404.inf", 
		LAST);

	web_url("703.d914e69d.chunk.css", 
		"URL=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t405.inf", 
		LAST);

	web_url("43.faa2c05e.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/43.faa2c05e.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t406.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("aad", 
		"URL=https://edge.microsoft.com/identity/api/v3/aad", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"b9528075,303eb3e4,82a866e9,e0075c8a,3f6a1a2,322c815,155a5358,dee07e4,93277d03,b9047d,f95dbd76,48338cb7\",\"enable_features\":\"ddfd6cd3,1207cc22,42217c95,2c975da3,19857ae4,2373949a,55a5f854,5cfd95dc,21714a50,95a29f90,177b250e,a49949fb,9e8c649c,58568926,bf8cde40,ace2c02,badd9207,62fd93b7,cf74f1c0,50cbb1f,3e1e1ad1,3061cce0,f34a4bc1,7d2dcff4\",\"enrollments\":[\"dec971ad\"]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("9de51a49-1841-42ef-ad2a-a0f732003d4c", 
		"URL=https://edge.microsoft.com/enterprisesitemanagement/edge/edgeEmieSiteLists/9de51a49-1841-42ef-ad2a-a0f732003d4c", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t408.inf", 
		LAST);

	web_url("703.b6140d9b.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/703.b6140d9b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t409.inf", 
		LAST);

	web_url("861.adccbd30.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/861.adccbd30.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t410.inf", 
		LAST);

	web_url("93.ce98fb1f.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/93.ce98fb1f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t411.inf", 
		LAST);

	web_url("602.82c81f77.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/602.82c81f77.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t412.inf", 
		LAST);

	web_url("930.23540e23.chunk.js", 
		"URL=https://perf.opp.ey.com/static/js/930.23540e23.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t413.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(8);

	web_url("defaultAppConfig.json", 
		"URL=https://perf.opp.ey.com/assets/defaultAppConfig.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t414.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t415.inf", 
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

	web_revert_auto_header("Accept-Language");

	web_url("policies", 
		"URL=https://clients.config.office.net/user/v1.0/edge/windows/policies/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t418.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("policies_2", 
		"URL=https://clients.config.office.net/user/v1.0/edge/windows/policies/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t419.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(4);

	web_custom_request("browser-extension-config", 
		"URL=https://cloud.applearn.tv/tenant-configuration/browser-extension-config?tenantId=4229e516-2b66-11ec-9a54-0e02c619c591", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t420.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		LAST);

	web_url("en.json", 
		"URL=https://perf.opp.ey.com/assets/locales/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t421.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon.ico_2", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t422.inf", 
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

	lr_think_time(8);

	web_url("authorize", 
		"URL=https://auth-qa02.ey.com/authorize?scope=openid%20profile%20email%20offline_access&audience=https%3A%2F%2Foppintegration-dev&client_id=nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp&redirect_uri=https%3A%2F%2Fperf.opp.ey.com&response_type=code&response_mode=query&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D&nonce=eFEyOFZ4enczWlNDc25ydjdZTVZHVHZrMFhjaWVJYWlvNjd2U2thTjgwMw%3D%3D&code_challenge=DrfNg1VfKc-ljloRR2ih-7_Hn8pzA9wwtj2NQ_I8P_0&code_challenge_method=S256&auth0Client="
		"eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t424.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("cognito-idp.us-east-1.amazonaws.com", 
		"URL=https://cognito-idp.us-east-1.amazonaws.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-amz-json-1.1", 
		"Referer=", 
		"Snapshot=t425.inf", 
		"Mode=HTTP", 
		"EncType=application/x-amz-json-1.1", 
		"Body={\"AuthFlow\":\"CUSTOM_AUTH\",\"ClientId\":\"603v4o629ekdjki7va11p5t1pu\",\"AuthParameters\":{\"USERNAME\":\"618cb360-42d7-49ac-86ee-3f81a2a8e33b\"},\"ClientMetadata\":{}}", 
		LAST);

	lr_think_time(13);

	web_url("main.cdn.min.css", 
		"URL=https://cdn.auth0.com/ulp/react-components/1.79.9/css/main.cdn.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=", 
		"Snapshot=t426.inf", 
		LAST);

	web_url("EYLogo.png", 
		"URL=https://cdn.ey.com/MYEY/ip/EYLogo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=", 
		"Snapshot=t427.inf", 
		LAST);

	web_custom_request("cognito-idp.us-east-1.amazonaws.com_2", 
		"URL=https://cognito-idp.us-east-1.amazonaws.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-amz-json-1.1", 
		"Referer=", 
		"Snapshot=t428.inf", 
		"Mode=HTTP", 
		"EncType=application/x-amz-json-1.1", 
		"Body={\"ChallengeName\":\"CUSTOM_CHALLENGE\",\"ChallengeResponses\":{\"USERNAME\":\"618cb360-42d7-49ac-86ee-3f81a2a8e33b\",\"ANSWER\":\"challengeResponse\"},\"ClientId\":\"603v4o629ekdjki7va11p5t1pu\",\"Session\":\""
		"AYABeAjt5iW-3ONisDScKQ3ObaEAHQABAAdTZXJ2aWNlABBDb2duaXRvVXNlclBvb2xzAAEAB2F3cy1rbXMAS2Fybjphd3M6a21zOnVzLWVhc3QtMTo3NDU2MjM0Njc1NTU6a2V5L2IxNTVhZmNhLWJmMjktNGVlZC1hZmQ4LWE5ZTA5MzY1M2RiZQC4AQIBAHgDHnKSW2nDRJSDSLf55TGFyX5On_wV32whMfiMxuCEIAEfEsosKeSqKuogiZTsCGksAAAAfjB8BgkqhkiG9w0BBwagbzBtAgEAMGgGCSqGSIb3DQEHATAeBglghkgBZQMEAS4wEQQMnUkeNBamB6KHSo_DAgEQgDsBBjEeecGudKaaPdxKRctG5Om_4OWcaVYVfeyVPwNT2Uv0ID_mgSlmAn4BaW7zSgqSEpmicjHb3C4vQgIAAAAADAAAEAAAAAAAAAAAAAAAAADU82GLgVnySvhr7U5wuU9x_____wAAAAEAAAAAAA"
		"AAAAAAAAEAAAEeoVF4DfPrJXRYU8QNiIl37u3GU6Xw9uQOrkNAM9acyFCL8ryeDdjjHdlgSGfMpc4WeDAFMW2lVIkzsqGl7On_4YosbFeumhYcYHDKXq691KYimSQvGJ2IQZr9a360AqWJwIjJE-5ZfKJ3ZP4XWCzdHGku-pdDQceZMTr6JNMgyoPFjdkA73Q8DoaJ-_5LLlZ5juqlngpFkgs49OBMuY2Drle7IPkD7uDrZjaI23wIXjoPt9yQR_TXIfpN36vR_6TO_7Q_55aJva8dCDQkirE_nf2azBObQNNOEkn_4pT6V65xq95L89DprrzRcPQ4T8mR3MOS_6RUL0IqB7WpkdSTtB4rVdooA1tZkbimLNHWjFHJQBdTxx8ConQH4MqXTdGCx0yMi30TW1It0rwNVN8\"}", 
		LAST);

	lr_think_time(9);

	web_url("ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCbl9o5zBZ4_TEgUN541ADhIFDTWGVBw=", 
		"URL=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCbl9o5zBZ4_TEgUN541ADhIFDTWGVBw=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t429.inf", 
		LAST);

	web_custom_request("put-events", 
		"URL=https://app-gateway.applearn.tv/discovery-mode/put-events", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t430.inf", 
		"Mode=HTTP", 
		"Body={\"Data\":{\"event\":{\"detail\":{\"timestamp\":1695025383047,\"event_uuid\":\"719e99a3-a91d-4389-bf96-950f9836af8b\",\"event_type\":\"onNewBrowserSession\",\"browser_session_uuid\":\"03675a17-52ca-4613-95fe-ef1c1cf86ad7\",\"user_ext_uuid\":\"618cb360-42d7-49ac-86ee-3f81a2a8e33b\"},\"browser_context\":{\"browser\":\"Edge 117.0.2045.31\",\"operating_system\":\"Windows  10\",\"language\":\"en-US\"}}},\"PartitionKey\":1}", 
		LAST);

	lr_think_time(19);

	web_url("threatListUpdates:fetch", 
		"URL=https://edge.microsoft.com/extensionrevocation/v1/threatListUpdates:fetch?req=ChcKBm1zZWRnZRINMTE3LjAuMjA0NS4zMRobCAEQCBoNMTY5NDkzMDI4OTE4MSIEIAEgAigEIgIIAQ==&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t431.inf", 
		LAST);

	lr_end_transaction("launch",LR_AUTO);

	lr_start_transaction("Username");

	web_submit_data("identifier", 
		"Action=https://auth-qa02.ey.com/u/login/identifier?state=hKFo2SBwQlJ2MDRVdWkxUVlKdEotS1kwLTZaRkRaRy11ODJWLaFur3VuaXZlcnNhbC1sb2dpbqN0aWTZIFhrc05WX0ptQ2c5SlBRMlhNR0F4OHZHd0ZrZ3N3b2dMo2NpZNkgbmFnalh4SlJUajVVVEx4UTV4eERLdXFGazJob3llWXA", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=state", "Value=hKFo2SBwQlJ2MDRVdWkxUVlKdEotS1kwLTZaRkRaRy11ODJWLaFur3VuaXZlcnNhbC1sb2dpbqN0aWTZIFhrc05WX0ptQ2c5SlBRMlhNR0F4OHZHd0ZrZ3N3b2dMo2NpZNkgbmFnalh4SlJUajVVVEx4UTV4eERLdXFGazJob3llWXA", ENDITEM, 
		"Name=username", "Value=P.CT.LRC.Perf000@ey.com", ENDITEM, 
		"Name=js-available", "Value=true", ENDITEM, 
		"Name=webauthn-available", "Value=true", ENDITEM, 
		"Name=is-brave", "Value=false", ENDITEM, 
		"Name=webauthn-platform-available", "Value=false", ENDITEM, 
		"Name=action", "Value=default", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.3.5.min_dc940oomzau4rsu8qesnvg2.js", 
		"URL=https://aadcdn.msauth.net/ests/2.1/content/cdnbundles/jquery.3.5.min_dc940oomzau4rsu8qesnvg2.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://login.microsoftonline.com/", 
		"Snapshot=t433.inf", 
		LAST);

	web_url("aad.login.min_kx1da7l2dz6nhe9kugk19a2.js", 
		"URL=https://aadcdn.msauth.net/ests/2.1/content/cdnbundles/aad.login.min_kx1da7l2dz6nhe9kugk19a2.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://login.microsoftonline.com/", 
		"Snapshot=t434.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(10);

	web_url("ls", 
		"URL=https://globalaccess.ey.com/adfs/ls/?login_hint=P.CT.LRC.Perf000%40ey.com&client-request-id=83a18d4d-9c38-4269-8478-dabc79bf3944&username=P.CT.LRC.Perf000%40ey.com&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx="
		"estsredirect%3d2%26estsrequest%3drQQIARAA02I20jOwUrE0skxLNLdM0TUzTE7SNTG1TNNNTDWx1DU0NrCwME60TDNNMy0S4hLw7V3YbDEn06ml4taeyv2WLqsY1TNKSgqKrfT1E0tLMnQLEw2M9FIr9ZLzc_Vz8tMz8_STE3NykhKTs3cwMl5gZHzByDiJSTxAzzlEzyfIWS8gtSjNwMDAAaJjFZNISJC-cUWlhbN3WniOdrm-c6ZFUOUtJn5_R6DhRiAivyizKnUWs0JwcVpKWYZJgImja2VSRq6FT4llYGaeZaJzeVGQRWRY0CZmkdTKwkS9_LzczOSi_OL8tBKQFaeYRfILUvMyUxQKivLTMnNSFVJzEzNzbjAzXmBhfMXCY8BsxcHBJcAgwaDA8IOFcREr0M-bmZVm515kdG_Jzo-r5tJiOMWqb2YYmVvqn5ZhlOie5GKUnehtrB1oVBySkVFQYKkflGzgGZ4ebmSYZp5Rk"
		"WxrZmU4gY3xAxtjBzvDLk5ig-sAL8MPvj3Ld83obnn31uMVv06Uf5aBoVlhiUFySqJzWVVQWJlrRUlhukdEeYpZultOoZuFl6tfcpZFlVuoLQA1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://login.microsoftonline.com/", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.css", 
		"URL=https://globalaccess.ey.com/adfs/portal/css/style.css?id=D74D4D6943F32AE6F7F11D14D601DBB0E1A58919176EE512150366B6279AAF99", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=", 
		"Snapshot=t436.inf", 
		LAST);

	web_url("logo.png", 
		"URL=https://globalaccess.ey.com/adfs/portal/logo/logo.png?id=A1A4756ECB35AE25FF274E530874E51DCCC4720A2E7BE8CFD49AF3B03D893518", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=", 
		"Snapshot=t437.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCT4dZvM8b8gyEgUNAaVpchIFDWUhmeo=", 
		"URL=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCT4dZvM8b8gyEgUNAaVpchIFDWUhmeo=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t438.inf", 
		LAST);

	web_url("illustration.jpg", 
		"URL=https://globalaccess.ey.com/adfs/portal/illustration/illustration.jpg?id=7213C1ED660EE1AE2E81BE575490A29F81BE0FA38C4CAF8037E67C918282EB79", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://globalaccess.ey.com/adfs/ls/?login_hint=P.CT.LRC.Perf000%40ey.com&client-request-id=83a18d4d-9c38-4269-8478-dabc79bf3944&username=P.CT.LRC.Perf000%40ey.com&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx="
		"estsredirect%3d2%26estsrequest%3drQQIARAA02I20jOwUrE0skxLNLdM0TUzTE7SNTG1TNNNTDWx1DU0NrCwME60TDNNMy0S4hLw7V3YbDEn06ml4taeyv2WLqsY1TNKSgqKrfT1E0tLMnQLEw2M9FIr9ZLzc_Vz8tMz8_STE3NykhKTs3cwMl5gZHzByDiJSTxAzzlEzyfIWS8gtSjNwMDAAaJjFZNISJC-cUWlhbN3WniOdrm-c6ZFUOUtJn5_R6DhRiAivyizKnUWs0JwcVpKWYZJgImja2VSRq6FT4llYGaeZaJzeVGQRWRY0CZmkdTKwkS9_LzczOSi_OL8tBKQFaeYRfILUvMyUxQKivLTMnNSFVJzEzNzbjAzXmBhfMXCY8BsxcHBJcAgwaDA8IOFcREr0M-bmZVm515kdG_Jzo-r5tJiOMWqb2YYmVvqn5ZhlOie5GKUnehtrB1oVBySkVFQYKkflGzgGZ4ebmSYZp5Rk"
		"WxrZmU4gY3xAxtjBzvDLk5ig-sAL8MPvj3Ld83obnn31uMVv06Uf5aBoVlhiUFySqJzWVVQWJlrRUlhukdEeYpZultOoZuFl6tfcpZFlVuoLQA1", 
		"Snapshot=t439.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_url("favicon.ico_3", 
		"URL=https://globalaccess.ey.com/favicon.ico", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t440.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Username",LR_AUTO);

	lr_start_transaction("Password");

	web_add_cookie("MSISAuth=AAEAAAAk8V/hssdz18ZG+xgPua5mG/BQqIStA4mkJZ1y73rt7+VP711XRMpJKPIZ6H8na+xACyKcaDydTvYaui4gZ9CSz8e4BaBywlkf/ggh82CBpvwT5FSpuLYQtJTTp5Hix6rvHi8kcYyewzscWz9f6JdTkabTZqDQPZF1cePob/7X3QdNdUx0f2dPEtOUUn/HxcP8eJM5nPsoQlQrbnb/EZ9abPYMLh7mv0HSGvXw9rbYMthdgHERROQzbac9NUqE1DYTirUUkIJbo4k2Bp+YMHUCelU4Su1HmwzYcRWXkVfrkT5nP8PG77RcUhvZQ92kuLhUIJG/G3pTSFmK8yw+DerxA/DPwVuhsmIWWg5PRF/PQGPVLogCE5E/rvjRIwEogAABAABEatEIuXn3W1RsxJQxhkTwUxdE+yyrkqF/C4hnQJcVPmPYDNObfWBlMkAigoMvIikdYmWA/lB+"
		"8iw2kMmjZ2VIJMDTFtaBOxTzxT9gk9LyuEf71PjqjRFepNMFxr49ZkA52FdqaVOgvUVRfXxFzWs4TL2WB8CBpQSdWdIcg4dgjsKkgIz9rioPA30fSKDeMXYgkzHVtdy6PPlJcOszKItnh05LJM0YVqSsNWsl3POmXdzpPu+L8pTQl8v3qXOrGgFwnwOg/c9LfzVMR2cZGo1Al+LNHw22e8aci1C6KRC4EVGFUNkIqANqJXA5zZLEPk7s5AD0SWk9hisAsZ0wsUIN0AMAAKht4LA9YukocLl3+/i3D+LXLwoDTrS5U4T6QEvUpieo9D+Wp+GuIEZ+VLISV4billr81cpJn5774v84CoDtsuvmxnhz507g0BYJSwFrSMiob9eVcJ73XOwQtIL/xj6F2PeXSCt3KGH/oNXBN6dMZr+Puvr3mMgnAG7nuLJhgw5vB6bTnaQ85bMUxxBcHq0qx7bNbDsK+wJgBjD88IqL+"
		"H8SPuDOgiIB4Z3hLac/9uQu3sS1XxBLgCTOVMu6rxKJGc+FWKANMD/063q6fSYPyHRd7EbnYf6XiC6ADoLyi5fLynh6/PzIqsaS09V1PupgF8F7ds7XkWgkqbayqzyH9HM+qSnHaAInDdyOoi7MOXssEtLuBY7XKrwOptMnEsxtP39EF7IwQLI5AXYvU2SpNh7kGFyPxhOEf8iKKgvsMnhFhfGJQ4F1pCSdToZ2WYgz0SQ7fQzZE1W1qtjndqa9ohfL4PmC36XRUQZcWCKENgho1uM0+CUqnvAh6fEfAdtyciV8SNUtbpv1wqMNmH2tV88VwmMCLWrI1Jl0gsucuPg+o2wPCFQ0M91paGE8tXxYACMJ4/G4gQWK8gzxy+vVUuCWI6hgr3acwrCej7z35wq0IZSXehlEPICPp9hcrBUAVYIYcVTyG66WrIRbSBUW4LcRho+"
		"msLM015ay2SgS0EsPkBWdMqsdh0AaT2Dua0RI3mILy8jshrBrCRNaxLKw4CHHoz4F+MONKv/8HYk0PqI/U4QTK7kqxV2xjcox2aokptsbOzALeOPsDyeEP4e2BB0TLFnTBVwflu7A1bOQZUKI/snejgQytKWj2Vw2GTQHliqie6y6Af6Q+Wj96CR5YHY6ytjSatDG47wsI36odyB6GHFhWFrjigR+YnAO4zLumS7gMVrDivgTCrt33Z+kRNG7sPnSOMtD8T7WdQ3Ajf8txZGQr1p3SEbAJlUOmpUbMfYe2mjyLGlSdmjdHqyXdeAUPTzCPom3DX21U3eEetEGMfqdmECegoPilv+6ZS6oS2bYeYoXpLd/yoiL2i1DVomvs/97sfA1yJCivrilj8e3IoEdzcCPCjB8UnftN25Z3aY+32Jy5CDmmVu3Qum2ladfkRjuZ7l7lv+2SasQHiqd74dXh4QAbuZEBCM/"
		"oxFZndonbMH3Gd1YKVl2eBOfnqJlOdOGv2Cxc3LN7IAMLhQWTTajDUPeawwNJgLgSTJlkzf01QtVblPEHc2I4pqCW64NYDi4n1ozgnj0O4jXcIyi; DOMAIN=globalaccess.ey.com");

	web_add_cookie("MSISAuth1=S/dMT6Q06KusDViy5IVNLNyhsfroAYAGZwbqWeCHfDU=; DOMAIN=globalaccess.ey.com");

	web_submit_data("ls_2", 
		"Action=https://globalaccess.ey.com/adfs/ls/?login_hint=P.CT.LRC.Perf000%40ey.com&client-request-id=83a18d4d-9c38-4269-8478-dabc79bf3944&username=P.CT.LRC.Perf000%40ey.com&wa=wsignin1.0&wtrealm=urn%3afederation%3aMicrosoftOnline&wctx="
		"estsredirect%3d2%26estsrequest%3drQQIARAA02I20jOwUrE0skxLNLdM0TUzTE7SNTG1TNNNTDWx1DU0NrCwME60TDNNMy0S4hLw7V3YbDEn06ml4taeyv2WLqsY1TNKSgqKrfT1E0tLMnQLEw2M9FIr9ZLzc_Vz8tMz8_STE3NykhKTs3cwMl5gZHzByDiJSTxAzzlEzyfIWS8gtSjNwMDAAaJjFZNISJC-cUWlhbN3WniOdrm-c6ZFUOUtJn5_R6DhRiAivyizKnUWs0JwcVpKWYZJgImja2VSRq6FT4llYGaeZaJzeVGQRWRY0CZmkdTKwkS9_LzczOSi_OL8tBKQFaeYRfILUvMyUxQKivLTMnNSFVJzEzNzbjAzXmBhfMXCY8BsxcHBJcAgwaDA8IOFcREr0M-bmZVm515kdG_Jzo-r5tJiOMWqb2YYmVvqn5ZhlOie5GKUnehtrB1oVBySkVFQYKkflGzgGZ4ebmSYZp5Rk"
		"WxrZmU4gY3xAxtjBzvDLk5ig-sAL8MPvj3Ld83obnn31uMVv06Uf5aBoVlhiUFySqJzWVVQWJlrRUlhukdEeYpZultOoZuFl6tfcpZFlVuoLQA1", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t441.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=UserName", "Value=P.CT.LRC.Perf000@ey.com", ENDITEM, 
		"Name=Password", "Value=9ASd$dgD]712", ENDITEM, 
		"Name=AuthMethod", "Value=FormsAuthentication", ENDITEM, 
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
		"Name=wresult", "Value=<t:RequestSecurityTokenResponse xmlns:t=\"http://schemas.xmlsoap.org/ws/2005/02/trust\"><t:Lifetime><wsu:Created xmlns:wsu=\"http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd\">2023-09-18T08:25:25.982Z</wsu:Created><wsu:Expires xmlns:wsu=\"http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd\">2023-09-18T09:25:25.982Z</wsu:Expires></t:Lifetime><wsp:AppliesTo xmlns:wsp=\"http://schemas.xmlsoap.org/ws/2004/09/"
		"policy\"><wsa:EndpointReference xmlns:wsa=\"http://www.w3.org/2005/08/addressing\"><wsa:Address>urn:federation:MicrosoftOnline</wsa:Address></wsa:EndpointReference></wsp:AppliesTo><t:RequestedSecurityToken><saml:Assertion MajorVersion=\"1\" MinorVersion=\"1\" AssertionID=\"_79639b8f-e982-469c-9073-101038fb7d2c\" Issuer=\"http://ey.com/adfs/services/trust/\" IssueInstant=\"2023-09-18T08:25:25.998Z\" xmlns:saml=\"urn:oasis:names:tc:SAML:1.0:assertion\"><saml:Conditions NotBefore=\"2023-09-18T08:25"
		":25.982Z\" NotOnOrAfter=\"2023-09-18T09:25:25.982Z\"><saml:AudienceRestrictionCondition><saml:Audience>urn:federation:MicrosoftOnline</saml:Audience></saml:AudienceRestrictionCondition></saml:Conditions><saml:AttributeStatement><saml:Subject><saml:NameIdentifier Format=\"urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified\">cBxVeG+XQECCbDIdvNJ4fg==</saml:NameIdentifier><saml:SubjectConfirmation><saml:ConfirmationMethod>urn:oasis:names:tc:SAML:1.0:cm:bearer</saml:ConfirmationMethod></saml"
		":SubjectConfirmation></saml:Subject><saml:Attribute AttributeName=\"UPN\" AttributeNamespace=\"http://schemas.xmlsoap.org/claims\"><saml:AttributeValue>P.CT.LRC.Perf000@ey.com</saml:AttributeValue></saml:Attribute><saml:Attribute AttributeName=\"ImmutableID\" AttributeNamespace=\"http://schemas.microsoft.com/LiveID/Federation/2008/05\"><saml:AttributeValue>cBxVeG+XQECCbDIdvNJ4fg==</saml:AttributeValue></saml:Attribute><saml:Attribute AttributeName=\"IDPEmail\" AttributeNamespace=\"http://"
		"schemas.xmlsoap.org/ws/2005/05/identity/claims\"><saml:AttributeValue>p.ct.lrc.perf000@ey.com</saml:AttributeValue></saml:Attribute><saml:Attribute AttributeName=\"authnmethodsreferences\" AttributeNamespace=\"http://schemas.microsoft.com/claims\"><saml:AttributeValue>urn:oasis:names:tc:SAML:2.0:ac:classes:PasswordProtectedTransport</saml:AttributeValue></saml:Attribute></saml:AttributeStatement><saml:AuthenticationStatement AuthenticationMethod=\"urn:oasis:names:tc:SAML:2.0:ac:classes"
		":PasswordProtectedTransport\" AuthenticationInstant=\"2023-09-18T08:25:23.570Z\"><saml:Subject><saml:NameIdentifier Format=\"urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified\">cBxVeG+XQECCbDIdvNJ4fg==</saml:NameIdentifier><saml:SubjectConfirmation><saml:ConfirmationMethod>urn:oasis:names:tc:SAML:1.0:cm:bearer</saml:ConfirmationMethod></saml:SubjectConfirmation></saml:Subject></saml:AuthenticationStatement><ds:Signature xmlns:ds=\"http://www.w3.org/2000/09/xmldsig#\"><ds:SignedInfo><ds"
		":CanonicalizationMethod Algorithm=\"http://www.w3.org/2001/10/xml-exc-c14n#\" /><ds:SignatureMethod Algorithm=\"http://www.w3.org/2001/04/xmldsig-more#rsa-sha256\" /><ds:Reference URI=\"#_79639b8f-e982-469c-9073-101038fb7d2c\"><ds:Transforms><ds:Transform Algorithm=\"http://www.w3.org/2000/09/xmldsig#enveloped-signature\" /><ds:Transform Algorithm=\"http://www.w3.org/2001/10/xml-exc-c14n#\" /></ds:Transforms><ds:DigestMethod Algorithm=\"http://www.w3.org/2001/04/xmlenc#sha256\" /><ds:DigestValue"
		">b3/ReGDG1QKIMTzXbaw1kCV2jQQbxKwmpYnaMAClero=</ds:DigestValue></ds:Reference></ds:SignedInfo><ds:SignatureValue>LndlwuP9tzaNqIRS+JkI/dO920lbywYfWOvKyab5IINXp3TkMQbqu19J0psUKZwbeFYaG9CBOTdfvT0f9oCbryL9xi4OzBJty5FlHnOUD36lM5dIYxVDeR0qG5RXQ/5LFBOibeRL6LXP7hQQ1dkkYqaJ5N+vmeW7qNkpK6BTCGRPYAQ5SJpu+W4AKYhbFooyjifC0zuDH5K3QMZ1ETEXVNSfUDK1WmT4DvJL1vZmrdgE7geDmlkvgHw/d58KPKtJYRDXpXeLfKyy5+wR3cXXJCDlIBBVrT7UEMUXqdpXqgErzcGWFoAcN9WBOL0nre5W2qZFP4QDml522CcWKR9HSQ==</ds:SignatureValue><KeyInfo xmlns=\"http://"
		"www.w3.org/2000/09/xmldsig#\"><X509Data><X509Certificate>MIIC4jCCAcqgAwIBAgIQE16q/6hsJadHrju0l/vHVDANBgkqhkiG9w0BAQsFADAtMSswKQYDVQQDEyJBREZTIFNpZ25pbmcgLSBnbG9iYWxhY2Nlc3MuZXkuY29tMB4XDTIzMDMxOTEzMjg1N1oXDTI0MDMxODEzMjg1N1owLTErMCkGA1UEAxMiQURGUyBTaWduaW5nIC0gZ2xvYmFsYWNjZXNzLmV5LmNvbTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAK6hkV52gYt0Zcs4yeFxQZ9Ih+H6xq0/IdDdFFBJctiBN6/Aqvxki2CkcBHxSCUgilYUbhagFb2aTqzS55NTLg5IvDwPUz7l2shQk+OrWVZk9wJC3RP+/16K1QJ+s0vwT7ySQuXM5TzpSceFDueKokqXrxn2A9eDT8//ed1xE3r9+"
		"o1Z5m7Of7flNbMClsu8bfe1dMEwKvXE6YrHyMbtfJ8mCBwQi9qGqkKI79hLgPytx/6B0hfPlpG9iSjYiaCVF2DxBNasNrVFEO8o+a8fnHQFWet60xojKmAE6ZrROhTTPraYukcVj6Zug4A4yd6vmYQwnu+dv99RpRG6x5lQJSkCAwEAATANBgkqhkiG9w0BAQsFAAOCAQEAZdPIrdjnRBoa0DktsWkvhi61k9YeYDOn74ibNFvvQ0M2x6iyhEsVqGCKNhqfZ0PirJPvwRy8LOdz+YMzOQ70IGWAFGpWo6eXmViH97QTF7CGJZU3VZWE05qwKb2+0eckoGucPDEdyB1isdvJvkTLv8q1aNseShI9gKpMFHq+atDrqzm7/sg0j/t97eiCgA3BzZNb+j2mAkGLNbCDzKrk8i4dBWGdVTOV0NDJdvl19YaE93ADvKHKUCJGe36ptq6kOrc2ax3ydz9oLkcvBA+Koe8WHK8Mxs6+T/"
		"BMxrOBkQNNbglIegJD5m5Z4+rZZ1czXuBKVX47B3hctIqTQKQBxw==</X509Certificate></X509Data></KeyInfo></ds:Signature></saml:Assertion></t:RequestedSecurityToken><t:TokenType>urn:oasis:names:tc:SAML:1.0:assertion</t:TokenType><t:RequestType>http://schemas.xmlsoap.org/ws/2005/02/trust/Issue</t:RequestType><t:KeyType>http://schemas.xmlsoap.org/ws/2005/05/identity/NoProofKey</t:KeyType></t:RequestSecurityTokenResponse>", ENDITEM, 
		"Name=wctx", "Value=estsredirect=2&estsrequest="
		"rQQIARAA02I20jOwUrE0skxLNLdM0TUzTE7SNTG1TNNNTDWx1DU0NrCwME60TDNNMy0S4hLw7V3YbDEn06ml4taeyv2WLqsY1TNKSgqKrfT1E0tLMnQLEw2M9FIr9ZLzc_Vz8tMz8_STE3NykhKTs3cwMl5gZHzByDiJSTxAzzlEzyfIWS8gtSjNwMDAAaJjFZNISJC-cUWlhbN3WniOdrm-c6ZFUOUtJn5_R6DhRiAivyizKnUWs0JwcVpKWYZJgImja2VSRq6FT4llYGaeZaJzeVGQRWRY0CZmkdTKwkS9_LzczOSi_OL8tBKQFaeYRfILUvMyUxQKivLTMnNSFVJzEzNzbjAzXmBhfMXCY8BsxcHBJcAgwaDA8IOFcREr0M-bmZVm515kdG_Jzo-r5tJiOMWqb2YYmVvqn5ZhlOie5GKUnehtrB1oVBySkVFQYKkflGzgGZ4ebmSYZp5RkWxrZmU4gY3xAxtjBzvDLk5ig-sAL8MPvj"
		"3Ld83obnn31uMVv06Uf5aBoVlhiUFySqJzWVVQWJlrRUlhukdEeYpZultOoZuFl6tfcpZFlVuoLQA1", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_url("main.9f34b9b5.js_2", 
		"URL=https://perf.opp.ey.com/static/js/main.9f34b9b5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t443.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("313.a6b10f70.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/313.a6b10f70.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t444.inf", 
		LAST);

	web_url("890.be7280de.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/890.be7280de.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t445.inf", 
		LAST);

	web_url("590.c60bfc05.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/590.c60bfc05.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t446.inf", 
		LAST);

	web_url("548.f27cf63f.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/548.f27cf63f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t447.inf", 
		LAST);

	web_url("129.982bf91b.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/129.982bf91b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t448.inf", 
		LAST);

	web_url("466.8f76f210.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/466.8f76f210.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t449.inf", 
		LAST);

	web_url("930.23540e23.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/930.23540e23.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t450.inf", 
		LAST);

	web_url("703.d914e69d.chunk.css_2", 
		"URL=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t451.inf", 
		LAST);

	web_url("388.45490fd7.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/388.45490fd7.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t452.inf", 
		LAST);

	web_url("168.97b3d649.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/168.97b3d649.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t453.inf", 
		LAST);

	web_url("861.adccbd30.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/861.adccbd30.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t454.inf", 
		LAST);

	web_url("93.ce98fb1f.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/93.ce98fb1f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t455.inf", 
		LAST);

	web_url("703.b6140d9b.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/703.b6140d9b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t456.inf", 
		LAST);

	web_url("43.faa2c05e.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/43.faa2c05e.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t457.inf", 
		LAST);

	web_url("602.82c81f77.chunk.js_2", 
		"URL=https://perf.opp.ey.com/static/js/602.82c81f77.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t458.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(20);

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

	web_url("favicon.ico_4", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t461.inf", 
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

	web_custom_request("token_2", 
		"URL=https://auth-qa02.ey.com/oauth/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t464.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"client_id\":\"nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp\",\"code_verifier\":\"raKjeXlos6xy.XIZEHn7gNJLpcOoLMZyEBfNivkwDd5\",\"grant_type\":\"authorization_code\",\"code\":\"rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_\",\"redirect_uri\":\"https://perf.opp.ey.com\"}", 
		LAST);

	web_url("en.json_2", 
		"URL=https://perf.opp.ey.com/assets/locales/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/?code=rChHyFEM51zIST13sz2MSHqVRW0d6Vfx2LOkaZIMMqPo_&state=QjR3ZkVJZEFZR21OSnRRaFNiblhWdm9XemEzZWs4YlhOS1NfdENHQXdrRQ%3D%3D", 
		"Snapshot=t465.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("_legacy_auth0.nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp.is.authenticated=true; DOMAIN=perf.opp.ey.com");

	web_add_cookie("auth0.nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp.is.authenticated=true; DOMAIN=perf.opp.ey.com");

	web_url("favicon.ico_5", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t466.inf", 
		LAST);

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

	web_add_cookie("OPP_SESSION_COOKIE=eyJTRVNTSU9OX0VYUElSQVRJT04iOiIyMDIzLTA5LTE4VDE4OjI2OjA5Ljg4NDM0MzAyNloiLCJURU5BTlRfSUQiOiJhYWFhYWEwMS1jMWEwLTQ0MmItYWE2MC03NjUzNWFkZTk2ODEiLCJST0xFX0lEIjoiYmIyZjI2YTktMDY2MC00NmU2LThjODYtYzU5MmJlMDMwMzljIiwiU0VTU0lPTl9JRCI6IjRjYzY3NTBmLWY2NTctNGY0Mi05Njg0LTFjYjA4OGQwOWUyNiJ9; DOMAIN=perf.opp.ey.com");

	web_custom_request("negotiate", 
		"URL=https://perf.opp.ey.com/opp/push-notification-service-perf/api/v1.0/signalr/negotiate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t472.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("banner.470ce0e5df6d6d98ed7135bc62cb5344.svg", 
		"URL=https://perf.opp.ey.com/static/media/banner.470ce0e5df6d6d98ed7135bc62cb5344.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t473.inf", 
		LAST);

	web_url("services", 
		"URL=https://perf.opp.ey.com/opp/authentication-perf/api/v1.0/tenant/services", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t474.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("updateAvailable_2", 
		"URL=https://perf.opp.ey.com/api/p-source-data-timestamp-sync/v1.0/notifications/updateAvailable", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t475.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("negotiate_2", 
		"URL=https://perf.opp.ey.com/opp/push-notification-service-perf/api/v1.0/signalr/negotiate", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t476.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("negotiate_3", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t477.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("services_2", 
		"URL=https://perf.opp.ey.com/opp/authentication-perf/api/v1.0/tenant/services", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t478.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("negotiate_4", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t479.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("negotiate_5", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t480.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_custom_request("negotiate_6", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t481.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_concurrent_start(NULL);

	web_url("EYInterstate-Regular.e15a12ba653d4a509565.woff2", 
		"URL=https://perf.opp.ey.com/static/media/EYInterstate-Regular.e15a12ba653d4a509565.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Snapshot=t482.inf", 
		LAST);

	web_url("EYInterstate-Light.cd0e6d719f360f7ff106.ttf", 
		"URL=https://perf.opp.ey.com/static/media/EYInterstate-Light.cd0e6d719f360f7ff106.ttf", 
		"Resource=1", 
		"RecContentType=font/ttf", 
		"Referer=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Snapshot=t483.inf", 
		LAST);

	web_url("EYInterstate-Regular.5a7572abda950aff26ba.woff", 
		"URL=https://perf.opp.ey.com/static/media/EYInterstate-Regular.5a7572abda950aff26ba.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Snapshot=t484.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("negotiate_7", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t485.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("negotiate_8", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t486.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("negotiate_9", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t487.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("EYInterstate-Light.445cf4954ff0c6ed17e2.woff", 
		"URL=https://perf.opp.ey.com/static/media/EYInterstate-Light.445cf4954ff0c6ed17e2.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Snapshot=t488.inf", 
		LAST);

	web_custom_request("negotiate_10", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/negotiate?hub=OPP&negotiateVersion=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t489.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_concurrent_start(NULL);

	web_url("client", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/?hub=OPP&id=YcF-p4caiOpVh7B80yRurA8JHSowK02&access_token=eyJhbGciOiJIUzI1NiJ9.eyJhdWQiOiJodHRwczovL3VzZWRzdWIwbGdzbnIwMS5zZXJ2aWNlLnNpZ25hbHIubmV0L2NsaWVudC8_aHViPU9QUCIsImlhdCI6MTY5NTAyNTU3MywiZXhwIjoxNjk1MDI2NDczLCJuYW1laWQiOiJwLmN0LmxyYy5wZXJmMDAwQGV5LmNvbSJ9.dAXRjuNGnnbNWRvsSaEHO5up77Bo_gdICoyPCVurIQk", 
		"Resource=1", 
		"RecContentType=text/event-stream", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t490.inf", 
		LAST);

	web_url("client_2", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/?hub=OPP&id=WD4LxeF4DwlJ4pw1ePn-nAxI0PlQK02&access_token=eyJhbGciOiJIUzI1NiJ9.eyJhdWQiOiJodHRwczovL3VzZWRzdWIwbGdzbnIwMS5zZXJ2aWNlLnNpZ25hbHIubmV0L2NsaWVudC8_aHViPU9QUCIsImlhdCI6MTY5NTAyNTU3MSwiZXhwIjoxNjk1MDI2NDcxLCJuYW1laWQiOiJwLmN0LmxyYy5wZXJmMDAwQGV5LmNvbSJ9._6My70OJCLVCMIG0rmo2A9VMogCyboieNO_9Pd5XMGU", 
		"Resource=1", 
		"RecContentType=text/event-stream", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t491.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Password",LR_AUTO);

	lr_think_time(16);

	web_custom_request("client_3", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/?hub=OPP&id=YcF-p4caiOpVh7B80yRurA8JHSowK02", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t492.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("client_4", 
		"URL=https://usedsub0lgsnr01.service.signalr.net/client/?hub=OPP&id=WD4LxeF4DwlJ4pw1ePn-nAxI0PlQK02", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t493.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Navigate to OD Screen");

	web_concurrent_start(NULL);

	web_url("favicon.ico_6", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t494.inf", 
		LAST);

	web_url("remoteEntry.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/remoteEntry.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t495.inf", 
		LAST);

	web_url("741.12022a92.chunk.css", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/css/741.12022a92.chunk.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t496.inf", 
		LAST);

	web_url("312.3e305f01.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/312.3e305f01.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t497.inf", 
		LAST);

	web_url("329.b81faa18.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/329.b81faa18.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t498.inf", 
		LAST);

	web_url("50.03dc76a8.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/50.03dc76a8.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t499.inf", 
		LAST);

	web_url("687.18bb499c.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/687.18bb499c.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t500.inf", 
		LAST);

	web_url("741.6fe59e6d.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/741.6fe59e6d.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t501.inf", 
		LAST);

	web_url("465.91c90ad0.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/465.91c90ad0.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t502.inf", 
		LAST);

	web_url("534.f33dcb66.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/534.f33dcb66.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t503.inf", 
		LAST);

	web_url("739.6520aba0.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/739.6520aba0.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t504.inf", 
		LAST);

	web_url("77.a4e1332b.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/77.a4e1332b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t505.inf", 
		LAST);

	web_url("587.90236c0f.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/587.90236c0f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t506.inf", 
		LAST);

	web_url("ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCe6qc8Qjmcf8EgUNhvVA1BIFDc1Vbgk=", 
		"URL=https://edge.microsoft.com/autofillservice/v1/pages/ChRDaHJvbWUvMTE3LjAuMjA0NS4zMRIXCe6qc8Qjmcf8EgUNhvVA1BIFDc1Vbgk=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t507.inf", 
		LAST);

	web_url("663.3fc99b8d.chunk.js", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/js/663.3fc99b8d.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t508.inf", 
		LAST);

	web_url("663.2d2458df.chunk.css", 
		"URL=https://perf.opp.ey.com/mfe/orgdesign/static/css/663.2d2458df.chunk.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t509.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(46);

	web_custom_request("employee", 
		"URL=https://perf.opp.ey.com/opp/change-capture-perf/api/v1.0/change-capture/employee", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://perf.opp.ey.com/detailed-design/orgdesign", 
		"Snapshot=t510.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body=[{\"employeeId\":\"123456\",\"correlationId\":\"12342345605\",\"createdBy\":\"testMail@eg.com\",\"changeEntries\":[{\"fieldName\":\"newPositionId\",\"newValue\":null,\"oldValue\":null}],\"changeSource\":\"ODCommit_Employee_fields\"},{\"employeeId\":\"34567\",\"correlationId\":\"12342345606\",\"createdBy\":\"testMail@eg.com\",\"changeEntries\":[{\"fieldName\":\"newPositionId\",\"newValue\":\"456778789\",\"oldValue\":\"800063165\"},{\"fieldName\":\"customeField\",\"newValue\":\"pqr\",\""
		"oldValue\":\"abc\"}],\"changeSource\":\"ODCommit_Employee_fields\"}]", 
		LAST);

	lr_end_transaction("Navigate to OD Screen",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("Logout");

	web_url("favicon.ico_7", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t511.inf", 
		LAST);

	web_url("logout", 
		"URL=https://auth-qa02.ey.com/v2/logout?client_id=nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp&auth0Client=eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/", 
		"Snapshot=t512.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("main.9f34b9b5.js_3", 
		"URL=https://perf.opp.ey.com/static/js/main.9f34b9b5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t513.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("313.a6b10f70.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/313.a6b10f70.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t514.inf", 
		LAST);

	web_url("890.be7280de.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/890.be7280de.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t515.inf", 
		LAST);

	web_url("590.c60bfc05.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/590.c60bfc05.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t516.inf", 
		LAST);

	web_url("388.45490fd7.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/388.45490fd7.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t517.inf", 
		LAST);

	web_url("168.97b3d649.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/168.97b3d649.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t518.inf", 
		LAST);

	web_url("129.982bf91b.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/129.982bf91b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t519.inf", 
		LAST);

	web_url("548.f27cf63f.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/548.f27cf63f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t520.inf", 
		LAST);

	web_url("930.23540e23.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/930.23540e23.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t521.inf", 
		LAST);

	web_url("466.8f76f210.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/466.8f76f210.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t522.inf", 
		LAST);

	web_url("703.d914e69d.chunk.css_3", 
		"URL=https://perf.opp.ey.com/static/css/703.d914e69d.chunk.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t523.inf", 
		LAST);

	web_url("43.faa2c05e.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/43.faa2c05e.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t524.inf", 
		LAST);

	web_url("602.82c81f77.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/602.82c81f77.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t525.inf", 
		LAST);

	web_url("861.adccbd30.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/861.adccbd30.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t526.inf", 
		LAST);

	web_url("93.ce98fb1f.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/93.ce98fb1f.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t527.inf", 
		LAST);

	web_url("703.b6140d9b.chunk.js_3", 
		"URL=https://perf.opp.ey.com/static/js/703.b6140d9b.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t528.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(12);

	web_url("translation.json_3", 
		"URL=https://perf.opp.ey.com/locales/en/translation.json", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t529.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon.ico_8", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/logout", 
		"Snapshot=t530.inf", 
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

	web_url("favicon.ico_9", 
		"URL=https://perf.opp.ey.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://perf.opp.ey.com/login", 
		"Snapshot=t534.inf", 
		LAST);

	web_add_cookie("did_compat=s%3Av0%3A81b92c60-55fc-11ee-9ace-5da894d994d3%3A48d3a9029ed28e6be7c31e6bcc7dbb48b46a96f43d63c2f4a8aaec5f0144ddbd.LSNZMjMbcbnAElIWIV80XFbOEmEZlh438p10WX7VkNY; DOMAIN=auth-qa02.ey.com");

	web_add_cookie("auth0_compat=s%3Av1.gadzZXNzaW9ugqZoYW5kbGXEQFfSvGifeeO0Dc50-F166MLpleLTVlE-1AwpXEIZeqnO45wo_0k2enOLN2BsQbv9wvPGw55UGS2TEhXUMk-tR1emY29va2llg6dleHBpcmVz1__OeHIAZQv-qK5vcmlnaW5hbE1heEFnZc4PcxQAqHNhbWVTaXRlpG5vbmU.hzXL40LuGAQ8qNOEcKDjcoDPj4jZ6gkgfY5OJV96WqM; DOMAIN=auth-qa02.ey.com");

	web_url("authorize_2", 
		"URL=https://auth-qa02.ey.com/authorize?scope=openid%20profile%20email%20offline_access&audience=https%3A%2F%2Foppintegration-dev&client_id=nagjXxJRTj5UTLxQ5xxDKuqFk2hoyeYp&redirect_uri=https%3A%2F%2Fperf.opp.ey.com&response_type=code&response_mode=query&state=Q0Q3dEFKZGJkN29ZLUY1bFcwZ2NPMnI2bUZVaWdnYWtJQVdDX0pWN1ZleQ%3D%3D&nonce=RXZTQ2dDM0Z3ZFhuMnpqeWoxdnhub2JaaGVIckdQbi1HN1lIWXZRNVdaMw%3D%3D&code_challenge=sE1G-DS8fb12EH3hjX_ar4VOgaEBnNcqvRmwfL3vBMo&code_challenge_method=S256&auth0Client="
		"eyJuYW1lIjoiYXV0aDAtcmVhY3QiLCJ2ZXJzaW9uIjoiMS4xMC4yIn0%3D", 
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

	return 0;
}