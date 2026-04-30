#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.1416;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double circumference(double r) {
    return 2 * PI * r;
}

double area(double r) {
    return PI * r * r;
}

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double r = radius(x1, y1, x2, y2);

    cout << fixed << setprecision(2);

    cout << r << endl;
    cout << 2 * r << endl;
    cout << circumference(r) << endl;
    cout << area(r) << endl;

    return 0;
}
