#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

Base *generate(void)
{
	srand(time(NULL));
	int finalNum = (rand() % 3) + 1;
	switch (finalNum)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
		default:
			return (new C());
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "It's a object A" << std::endl;
	else if (dynamic_cast <B *>(p))
		std::cout << "It's a object B" << std::endl;
	else if (dynamic_cast <C *>(p))
		std::cout << "It's a object C" << std::endl;
	else
		std::cout << "None\n";
}

void	identify(Base &p)
{
	try{
		A &a = dynamic_cast<A &>(p);
		std::cout << "It's a object A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast){}

	try{
		B &b = dynamic_cast <B &>(p);
		std::cout << "It's a object B" << std::endl;
		(void)b;
	}
	catch (std::bad_cast){}

	try{
		C &c = dynamic_cast <C &>(p);
		std::cout << "It's a object C" << std::endl;
		(void)c;
	}
	catch (std::bad_cast){}
}
// void	leak(void){system("leaks real_type");}

int main(void)
{
	// Testing of identify with argument passed by pointer
	Base *ptr;

	ptr = generate();
	identify(ptr);

	// Testing of identify using parameter passed by reference
	identify(*ptr);
	delete ptr;

	// atexit(leak);
	return 0;
}