#pragma once
#include <string>

class Person {
public:
	std::string name;
	int age;

	Person() {
		name = "";
		age = 0;
	}
	
	std::string getName() {
		return name;
	}

	void setName(std::string name) {
		this->name = name;
	}

	int getAge() {
		return this->age;
	}

	void setAge(int age) {
		this->age = age;
	}

	void printPerson() {
		std::cout << this->name << " " << this->age << std::endl;
	}
};