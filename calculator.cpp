
#include <iostream>
using namespace std;


int main()
{
	char operation;
	float num1, num2;
	cin >> operation;
	cin >> num1 >> num2;
	switch (operation) {
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	default:
		cout << "Error! operator is not correct";
	}
	
	return 0;
}
