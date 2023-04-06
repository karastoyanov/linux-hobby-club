// Created by m-andreev
// //06.04.2023

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string input;
    double num;

    while (true){
	   cout << "Enter a number: ";
           cin >> input;

            try {
                num = stod(input);
            break;
	    } catch (const invalid_argument&) {
                cout << "Wrong input: not a number" << endl;
        }
						        }

        int floored_num = floor(num);
        cout << "Multiplication table for ";
        
	if (num == floored_num) {
           cout << floored_num << endl;
         } else {
           cout << num << " (floored to " << floored_num << ")" << endl;
        }

        for (int i = 1; i <= 10; ++i) {
           cout << floored_num << " x " << i << " = " << floored_num * i << endl;
        }

        return 0;
}
