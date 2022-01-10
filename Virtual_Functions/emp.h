#pragma once

#include "Person.h"

class Emp:public Person {
private:
	int empid;
	float salary;

public:
	Emp(std::string name, int age,int empid, float salary) {
		this->name = name;
		this->age = age;
		this->empid = empid;
		this->salary = salary;
	}
	
	float getSalary() {
		return this->salary;
	}

	int getEmpid() {
		return this->empid;
	}
	
	void printEmp() {
		std::cout << this->age << " " << this->empid << " " << this->name << " " << this->salary << std::endl;
	}
};
