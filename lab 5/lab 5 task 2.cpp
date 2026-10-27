#include <iostream>
using namespace std;

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int first = 10;
    int second = 20;

    cout << "Before swapping:" << endl;
    cout << "First number: " << first << endl;
    cout << "Second number: " << second << endl;

    swapNumbers(first, second);

    cout << endl;
    cout << "After swapping:" << endl;
    cout << "First number: " << first << endl;
    cout << "Second number: " << second << endl;
    return 0;

}