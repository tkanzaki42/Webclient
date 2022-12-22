#include "Client.hpp"
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

namespace client42
{
Client::Client():
ip_("127.0.0.1"),
port_(5050) {
}

Client::Client(const Client &obj) {
	*this = obj;
}

Client &Client::operator=(const Client &obj) {
	return *this;
}

Client::~Client() {
}

void Client::set_ip(const std::string ip) {
	this->ip_ = ip;
}

void Client::set_port(int port) {
	this->port_ = port;
}

void Client::exec() {
	int sock;
	if ((sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0) {}
		error_message_(__LINE__);
}

void error_message_(int line) {
	printf("ERROR: LINE %d", line);
	exit(1);
}

} // namespace client42

