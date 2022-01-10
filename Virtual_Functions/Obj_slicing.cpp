// Virtual_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "emp.h"
int main() {
	Emp chandan("chandan", 25, 1111, 1.15);
	chandan.printEmp();
	Person p = chandan;
	p.printPerson();
}