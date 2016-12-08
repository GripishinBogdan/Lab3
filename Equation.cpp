#include "Equation.h"
#include <iostream>

Equation::Equation(){

}

Equation::Equation(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}

void Equation::solve() {
    double x = X;
    double y = Y;
    double z = Z;

    B = pow(y, pow(sqrt(fabs(x)), (1 / 3))) + (pow(cos(y), 3) * ((fabs(x - y) * (1 + (pow(sin(z), 2) / sqrt(x + y)))) / pow(2.718, fabs(x - y)) + (x / 2)));
}

void Equation::setData(double x, double y, double z) {
    X = x;
    Y = y;
    Z = z;
}

void Equation::setX(double X) {
    Equation::X = X;
}

double Equation::getX() const {
    return X;
}


void Equation::setY(double Y) {
    Equation::Y = Y;
}

double Equation::getY() const {
    return Y;
}

void Equation::setZ(double Z) {
    Equation::Z = Z;
}

double Equation::getZ() const {
    return Z;
}

double Equation::getB() const {
    return B;
}

void informationAlerts(Equation val) {
    std::cout << val << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Equation& obj) {
    std::cout << "X=\t" << obj.getX() << "\nY =\t" << obj.getY() << "\nZ =\t" << obj.getZ() << "\nB =\t" << obj.getB() << std::endl;
    return out;
}