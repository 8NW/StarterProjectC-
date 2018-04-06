#include "AnimalClass.hpp"


#include <iostream>

using namespace std;

#include <string>
#include <cstring>

AnimalClass :: AnimalClass(){

  size = 10;

  name = "default";

}

AnimalClass :: AnimalClass(int sizeInput, std::string nameInput){

 size = sizeInput;

 name = nameInput;

}

int AnimalClass :: getSize() const {
	return size;
}

std::string AnimalClass :: getName() const {
	return name;
}


