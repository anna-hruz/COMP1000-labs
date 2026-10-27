/*Task 1: Declaring and Initializing Variables

Objective: Practice declaring and initializing variables of different types in C++.
Instructions:
1.	Write a C++ program that declares and initializes variables of the following types:
a.	int, float, char, and string.
2.	Display the values of these variables on the console.
3.	Change the values of the variables after initializing them and display the updated values.
Example Output:
Initial values: 
Name: Alice, Age: 20, Height: 1.65, Grade: B

Updated values:
Name: Bob, Age: 22, Height: 1.75, Grade: A */
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Initial values: ";
    string name = "Alice ";
    int age = 20;
    float height = 1.65;
    char grade = 'B';
    cout << name << age << " years old. " << "Height: " << height << " Grade:" << grade << endl;
    cout << "Updated values: ";
    name = "Bob ";
    age = 22;
    height = 1.75;
    grade = 'A';
    cout << name << age << " years old. " << "Height: " << height << " Grade:" << grade << endl;

}