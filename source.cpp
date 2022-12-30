#include <iostream>
using namespace std;
void calQuotient(double, double, double&);		

void calQuotient(double number1, double number2, double& answer)
{
	//number1 and number2 is pass by value
	//answer is pass by reference

	answer = number1 / number2;

	//the value of number1 and number2 does not change in main function since it pass by value
	number1 += 5;
	number2 += 5;

	//display the  value of number1 and number2 after adding 5 
	cout << "Number 1 (after +5): " << number1 << endl;		
	cout << "Number 2 (after +5): " << number2 << endl;
}

int main()
{
	double firstNumber, secondNumber, answer;

	//Take input from the user
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	cout << "\nOperation = Number 1 / Number 2\n";
	
	cout << "\nValue of number 1 and number 2 before operation\n";
	cout << "-----------------------------------------------\n";
	cout << "First number : " << firstNumber << endl;
	cout << "Second number: " << secondNumber << endl;

	cout << "\nValue of number 1 and number 2 after adding 5\n";
	cout << "---------------------------------------------\n";
	
	//Pass the input to the calQuotient function
	calQuotient(firstNumber, secondNumber, answer);

	//display the original value of firstNumber and secondNumber
	cout << "\nTotal answer after the operation\n";
	cout << "--------------------------------\n";
	cout << "Answer: " << answer << endl;

}

