#include <iostream>

#define MAXSIZE 65000 // max accepted size of incoming packets

int get_socket();
void send_message(int socket, int message);