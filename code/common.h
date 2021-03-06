#ifndef _COMMON_H__
#define _COMMON_H__

#include <arpa/inet.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/rfcomm.h>
#include <error.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#include "GSelect.h"
#include "list.h"

union csum
{
   unsigned short i;
   char c[2]; 
} csum;  

#endif
