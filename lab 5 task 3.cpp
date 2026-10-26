#include <iostream>
#include <cmath>
using namespace std;

float calculateDistance(float x1, float y1, float x2, float y2){
    float difference1 = x2 - x1;
    float difference2 = y2 - y1;

    float distance = sqrt(difference1 * difference1 + difference2 * difference2);
    return distance;

}
int main() {
    float x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    float distance = calculateDistance(x1, y1, x2, y2);
    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}