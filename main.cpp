#include "Equation.h"
#include <iostream>

int main() {

    Equation a;
    a.setX(6.251);
    a.setY(0.827);
    a.setZ(25.001);
    a.solve();
    std::cout << "B = " << a.getB() << std::endl;

    informationAlerts(a);

    return 0;
}