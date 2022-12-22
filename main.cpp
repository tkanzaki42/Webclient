#include "Client.hpp"
#include <string>

namespace client42
{
int main(int argc, char **argv) {
	if (argc != 3) {
		// print usage
		return 0;
	}
	std::string ip   = std::string(argv[1]);
	int         port = std::stoi(argv[2]);

	Client client;
	client.set_ip(ip);
	client.set_port(port);
	client.exec();
	return 0;
}
} // namespace client42

