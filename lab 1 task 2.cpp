#include <iostream>
#include <string>
using namespace std;

int main(){
    /*Task 2: Arithmetic Operations with User Input

Objective: Practice performing basic arithmetic operations.
Instructions:
1.	Write a C++ program that accepts two integers from the user.
2.	Perform addition, subtraction, multiplication, division (using type casting for float division), and modulus on the two integers.
3.	Display the results of each operation.
*/
int a, b;
cout << "Enter the first value: ";
cin >> a;
cout << "Enter the second value: ";
cin >> b;
cout << "Addition: " << a + b << endl;
cout << "Substraction: " << a - b << endl;
cout << "Multiplication: " << a * b << endl;
cout << "Division: " << (float)a / b << endl;
cout << "Modulus: " << a % b << endl;
result 0;
}