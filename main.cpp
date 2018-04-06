#include <iostream>
#include <string>

#include "AnimalClass.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// #include "module.hpp"

using namespace std;

int main(int argx, const char * argv[]) {
	Dog *randomDog = new Dog();

	cout << randomDog->getSound() << endl;
	cout << randomDog->getName() << endl;
	cout << randomDog->getSize() << endl;

	// Dog *setDog = new Dog();

	// cout << setDog.getSound() << endl;
	// cout << setDog.getName() << endl;
	// cout << setDog.getSize() << endl;

	Cat *randomCat = new Cat();

	cout << randomCat->getSound() << endl;
	cout << randomCat->getName() << endl;
	cout << randomCat->getSize() << endl;

	// Cat *setCat = new Cat();

	// cout << setCat.getSound() << endl;
	// cout << setCat.getName() << endl;
	// cout << setCat.getSize() << endl;




	
	
}