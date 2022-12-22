#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

namespace client42
{
class Client {
private:
	std::string ip_;
	int         port_;
	void        error_message_(int line);
public:
	Client();
	Client(const Client &obj);
	Client &operator=(const Client &obj);
	~Client();

	void set_ip(const std::string ip);
	void set_port(int port);

	void exec();
};
} // namespace client42



#endif
