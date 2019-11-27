#include <iostream>
#include "header.h"

float pi() {
    return M_PI;
}

float get_circumference(int radius) {
    return 2 * pi() * radius;
}

float get_area(int radius) {
    return pi() * radius * radius;
}
