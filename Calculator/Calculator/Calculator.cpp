#include <iostream>

using namespace std;

void menu();
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

int main() {
	/* Using double numbers to give the user the ability to use whichever number he wants without causing conflicts
	and also to give a more precise result. */
	double firstNumber;
	double secondNumber;
	int option;
	do { // Beginning of do-while main program looping.
		menu();
		cout << "Select an option: ";
		cin >> option;
		switch (option) {
		case 1: // Addition.
			cout << "Enter the first number: ";
			cin >> firstNumber;
			cout << "Enter the second number: ";
			cin >> secondNumber;
			cout << "Result => " << firstNumber << " + " << secondNumber << " = " << addition(firstNumber, secondNumber) << endl;
			break;
		case 2: // Subtraction.
			cout << "Enter the first number: ";
			cin >> firstNumber;
			cout << "Enter the second number: ";
			cin >> secondNumber;
			cout << "Result => " << firstNumber << " - " << secondNumber << " = " << subtraction(firstNumber, secondNumber) << endl;
			break;
		case 3: // Multiplication.
			cout << "Enter the first number: ";
			cin >> firstNumber;
			cout << "Enter the second number: ";
			cin >> secondNumber;
			cout << "Result => " << firstNumber << " x " << secondNumber << " = " << multiplication(firstNumber, secondNumber) << endl;
			break;
		case 4: // Division.
			cout << "Enter the first number: ";
			cin >> firstNumber;
			cout << "Enter the second number: ";
			cin >> secondNumber;
			cout << "Result => " << firstNumber << " / " << secondNumber << " = " << division(firstNumber, secondNumber) << endl;
			break;
		case 0: // Finish the application.
			cout << "Application finished successfully!" << endl;
			break;
		default: // Invalid option or input.
			cout << "ERROR: Invalid option!";
			break;
		}
	} while (option != 0); // End of do-while main program looping.
}

void menu() {
	cout << "-------------------------------- MENU --------------------------------" << endl
		<< "1 - Addition." << endl
		<< "2 - Subtraction." << endl
		<< "3 - Multiplication." << endl
		<< "4 - Division." << endl
		<< "0 - Finish the application." << endl
		<< "----------------------------------------------------------------------" << endl;
}

double addition(double num1, double num2) {
	return num1 + num2;
}

double subtraction(double num1, double num2) {
	return num1 - num2;
}

double multiplication(double num1, double num2) {
	return num1 * num2;
}

double division(double num1, double num2) {
	return num1 / num2;
}