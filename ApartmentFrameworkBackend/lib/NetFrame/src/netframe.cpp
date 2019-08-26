#include <netframe.hpp>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <arpa/inet.h>

int get_socket() {

    return socket(PF_INET, SOCK_DGRAM, 0);

}

void send_message(int sockfd, char* msg, char* address, char* port) {

    struct addrinfo hints;
    struct addrinfo *servinfo;

    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_DGRAM;

    getaddrinfo(address, port, &hints, &servinfo);

    sendto(sockfd, &msg, strlen(msg), 0, servinfo->ai_addr, sizeof(struct sockaddr_storage));

}