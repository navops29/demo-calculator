//============================================================================
// Name        : hellocalc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <mathlib/mathlib.hpp>

int calc(int n1, int n2, char op){

	/*
	 * Refers to functions defined in mathlib
	 */
	switch (op) {
	case '+':
		return add(n1, n2);
	case '-':
		return sub(n1,n2);
	case '/':
		return divide(n1, n2);
	case '*':
		return multiply(n1, n2);
	default:
		std::cout << "Invalid operand: " << op <<std::endl;
		exit(2);

	}
}

int main(int argc, char **argv) {
	if (argc != 4 ){
		std::cout << "Error: incorrect num of args. Usage: calculator <num1> <operand> <num2>" << std::endl;
		exit(1);
	}

	int num1 = std::stoi(argv[1]);
	int num2 = std::stoi(argv[3]);

	char op = argv[2][0];

	int result = calc(num1, num2, op);
	std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;

	return 0;
}
