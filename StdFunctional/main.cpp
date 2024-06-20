#include <iostream>
#include <functional>

class Functor
{
public:
	void operator()(int x)
	{
		std::cout << "This is functor and the number is " << x << '\n';
	}
};

void function(int x)
{
	std::cout << "This is function and the number is " << x << '\n';
}

int main()
{
	Functor functor;

	std::function<void(int)> func1 = functor;
	std::function<void(int)> func2 = function;
	std::function<void(int)> func3 = [](int x)
		{
			std::cout << "This is lambda expression and the number is " << x << '\n';
		};
	
	func1(1);
	func2(2);
	func3(3);

	return 0;
}