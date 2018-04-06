#include "AnimalClass.hpp"
#include "Dog.hpp"


#include <iostream>

using namespace std;

#include <string>
#include <cstring>

Dog :: Dog(){

 sound = "woof";

}

Dog :: Dog(int sizeInput, std::string nameInput): AnimalClass(sizeInput, nameInput){


 sound = "woof";
}


std::string Dog :: getSound() const {
	return sound;
}


