#ifndef _GLOBALS_H 
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"
#include "time.h"



// Set the file path and name
    char* filePath = "file.txt";
    char* fileName = "file.txt";

    // Define the boundary string
    char* boundary = "7d025e2b16b064e";
    char formData[10000];

//--------------------------------------------------------------------
// Global Variables
long Download_Size=0;
int v_tt=5,tt=5;
int num=1;
char * Sessiontoken1;
char * correlation_id1;
char * push_notification_client_id1;

long currentTimestamp;
long expirationTimestamp;



int i=0;
char * lr_guid_gen (char * paramName) {
	
// Generate GUID method

typedef struct _GUID {
unsigned long Data1;
unsigned short Data2;
unsigned short Data3;
unsigned char Data4 [8];

} GUID;

GUID m_guid;

char buf [50];
char pNameStr [50];
CoCreateGuid (& m_guid);

// define the output format

// sprintf (buf, "{% 08lX-% 04X-% 04X-% 02X% 02X-% 02X% 02X% 02X% 02X% 02X% 02X}", // uppercase

sprintf (buf, "% 08lx-% 04x-% 04x-% 02x% 02x-% 02x% 02x% 02x% 02x% 02x% 02x", // lower case

// sprintf (buf, "% 08lX% 04X% 04X% 02X% 02X% 02X% 02X% 02X% 02X% 02X% 02X", // lowercase

m_guid.Data1, m_guid.Data2, m_guid.Data3,

m_guid.Data4 [0], m_guid.Data4 [1], m_guid.Data4 [2], m_guid.Data4 [3],

m_guid.Data4 [4], m_guid.Data4 [5], m_guid.Data4 [6], m_guid.Data4 [7]);

lr_save_string (buf, paramName);
sprintf (pNameStr, "{% s}", paramName);
return lr_eval_string (pNameStr);

}




















#endif // _GLOBALS_H
