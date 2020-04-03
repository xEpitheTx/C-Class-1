// Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2);
	int operand1, operand2;
	char operator1;
	float answer;
	bool operatorIsValid = false;
	bool operandIsValid = false;
	bool divideByZero = false;

	cout << "Enter first operand [0 - 100]: ";
	cin >> operand1;
	cout << "Enter an operator (+, -, *, / or %): ";
	cin >> operator1;
	cout << "Enter second operand [0 - 100]: ";
	cin >> operand2;


	if (operator1 == '+' || operator1 == '-' || operator1 == '*' || operator1 == '/' || operator1 == '%')
	{
		operatorIsValid = true;
	}
	if (operand1 >= 0 && operand1 <= 100 && operand2 >= 0 && operand2 <= 100)
	{
		operandIsValid = true;
	}
	if (operator1 == '/' && operand2 == 0)
	{
		divideByZero = true;
	}
	if (operatorIsValid == true && operandIsValid == true && divideByZero == false)
	{
		if (operator1 == '+')
		{
			answer = operand1 + operand2;
			cout << "The value of the expression is " << answer << "\n";
		}
		if (operator1 == '-')
		{
			answer = operand1 - operand2;
			cout << "The value of the expression is " << answer << "\n";
		}
		if (operator1 == '*')
		{
			answer = operand1 * operand2;
			cout << "The value of the expression is " << answer << "\n";
		}
		if (operator1 == '/')
		{
			answer = (float)operand1 / (float)operand2;
			cout << "The value of the expression is " << answer << "\n";
		}
		if (operator1 == '%')
		{
			answer = operand1 % operand2;
			cout << resetiosflags(ios::fixed | ios::showpoint);
			cout << "The value of the expression is " << answer << "\n";
		}
	}

	if (operatorIsValid == false || operandIsValid == false || divideByZero == true)
	{
		cout << "The expression that you entered is not valid.";
	}

	cout << "Enter first operand [0 - 100]: ";
	cin >> operand1;
	cout << "Enter an operator (+, -, *, / or %): ";
	cin >> operator1;
	cout << "Enter second operand [0 - 100]: ";
	cin >> operand2;

}

