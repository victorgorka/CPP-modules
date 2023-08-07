#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const jAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	Dog *doggo = new Dog();
	Dog roggo = Dog();
	Cat pussInBoots = Cat();

	doggo->makeSound();	
	roggo.makeSound();	
	pussInBoots.makeSound();

	delete doggo;
	delete meta;
	delete j;
	delete i;
	return 0;
}