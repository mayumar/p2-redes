#ifndef SERVER_HPP
#define SERVER_HPP

#include <arpa/inet.h>

void exitClient(int socket, fd_set * readfds, int &numClients, int clientsArray[]);
void manager(int signum);
void setServer();

#endif