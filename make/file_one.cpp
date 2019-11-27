#include <iostream>
#include "header.h"

using namespace std;

int main(int argc, char **argv, char **envp) {
    int radius;

    cout << "What is the radius of your circle?: ";
    cin >> radius;

    cout << "The circumference of a circle with radius " << radius << " is: " << get_circumference(radius) << endl;
    cout << "The area of a circle with radius " << radius << " is: " << get_area(radius) << endl;

    return 0;
}
