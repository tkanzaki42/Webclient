#ifndef INPUT_HPP
#define INPUT_HPP

namespace client42
{

class Input {
 public:
    Input();
	Input(const Input &obj);
	Input &operator=(const Input &obj);
    ~Input();

	int read();
 private:
};

} // namespace client42
#endif
