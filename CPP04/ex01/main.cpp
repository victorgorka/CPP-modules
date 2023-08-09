#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* h = new Cat();
	// j->setBrain("trust humans\n");
	// j->printBrain();
	delete j;//should not create a leak
	delete h;

	Cat *i = new Cat();

	i->setBrain("Dont trust humans\n");

	Cat r = Cat(*i);

	r.printBrain();
	r = *i;
	i->setBrain("trust humans\n");
	delete i;
	r.printBrain();
	return 0;
}