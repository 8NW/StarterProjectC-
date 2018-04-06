#include "AnimalClass.hpp"
#include "Cat.hpp"


#include <iostream>

using namespace std;

#include <string>
#include <cstring>

Cat :: Cat(){

 sound = "purr";

}

Cat :: Cat(int sizeInput, std::string nameInput) : AnimalClass(sizeInput, nameInput){

 sound = "purr";
}


std::string Cat :: getSound() const {
	return sound;
}


