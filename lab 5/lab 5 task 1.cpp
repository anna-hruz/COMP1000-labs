#include <iostream>
#include <string>
using namespace std;

int addTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result1= addTwoNumbers(5, 10);
    cout << "The sum of 5 and 10 is: " << result1 << endl;
    int result2= addTwoNumbers(20, 30);
    cout << "The sum of 20 and 30 is: " << result2 << endl;
    int result3= addTwoNumbers(100, 200);
    cout << "The sum of 100 and 200 is: " << result3 << endl;
    return 0;
}