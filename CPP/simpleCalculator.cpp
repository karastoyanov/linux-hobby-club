#include <iostream>
using namespace std;

int main(){

	int a = 0; 
    cout << "Enter the first number: ";
    cin >> a;
    cout << '\n';
	int b = 0; 
    cout << "Enter the second number: ";
    cin >> b;
    cout << '\n';
	char c; 
    cout << "Enter the operation: ";
    cin >> c;
    cout << '\n';


    cout << "Result is: ";
	if(c == '+'){
		cout << a+b << '\n';
	}
    else if(c == '-') {
        cout << a-b << '\n';
    } else if (c == '*') {
        cout << a * b << '\n';
    } else if (c == '/') {
        cout << a / b << '\n';
    }
	return 0;
}

