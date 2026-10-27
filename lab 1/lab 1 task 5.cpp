#include <iostream>
#include <string>
using namespace std;

int main(){
    /*Task 5: Complex Arithmetic Expression and Precedence

Objective: Practice writing complex arithmetic expressions while understanding precedence and associativity.
Instructions:
1.	Write a program that calculates the result of a complex arithmetic expression using multiple operators (+, -, *, /, and %).
2.	Ensure the expression uses parentheses to change the default precedence order.
3.	Display the result of the expression with and without parentheses and explain the difference.
Example:
-	Without parentheses: 5 + 3 * 2 / 4 - 1
-	With parentheses: (5 + 3) * (2 / (4 - 1))
Example Output:
-	Without parentheses: Result = 5
-	With parentheses: Result = 5.33

*/
int a = 5;
int b = 3;
int c = 2;
int d = 4;
int e = 1;
cout << "W/o parentheses: " << a + b * c / d - e << endl;
cout << "With parentheses: " << (a + b) * ((float)c / (d - e)) << endl;

}