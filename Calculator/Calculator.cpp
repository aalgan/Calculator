#include <iostream>
#include <string>
using namespace std;

int main()
{
	float firstdig;
	float secdig;
	string op;

	cout << "Enter first digit: " << endl;
	cin >> firstdig;
	cout << "Enter second digit: " << endl;
	cin >> secdig;
	cout << "What would you like to do? (+ - / *): " << endl;
	cin >> op;

	if (op == "+") {
		cout << firstdig + secdig << endl;
	}
	else if (op == "-") {
		cout << firstdig - secdig << endl;
	}
	else if (op == "/") {
		cout << firstdig / secdig << endl;
	}
	else if (op == "*") {
		cout << firstdig * secdig << endl;
	}
	else {
		cout << "Wrong operator" << endl;
	}
	system("pause");
}