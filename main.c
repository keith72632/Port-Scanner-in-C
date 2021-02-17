#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <unistd.h>
#include "port_scanner.h"


int main(int argc, char **argv)
{
  if(argc < 4){
    printf("Please enter the server IP address and range of ports to be scanned\n");

    printf("Usage: %s IV4 First_Port Last_Port\n", argv[0]);

    exit(1);
  }

  char hostname[16] = {0};
  char first_port[6] = {0};
  char last_port[6] = {0};
  int first, last;
  
  strcpy(hostname, argv[1]);
  strcpy(first_port, argv[2]);
  strcpy(last_port, argv[3]);

  //convert to int
  first = atoi(first_port);
  last = atoi(last_port);

  port_scanner(hostname, first, last);

  return 0;
}
