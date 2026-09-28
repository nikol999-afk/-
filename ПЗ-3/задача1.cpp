//модульный
#include <iostream>

using namespace std;

double hypotenuse(double a, double b) {
    return sqrt((a * a) + (b * b));
}

int main() {
    double a, b;
    cin >> a;
    cin >> b;
    cout << hypotenuse(a, b);
    return 0;
}

//обьектно ориентированный
#include <iostream>
#include <cmath>

class RightTriangle {
private:
    double legA; 
    double legB; 

public:
 
    RightTriangle(double a, double b) : legA(a), legB(b) {}

 
    double calculateHypotenuse() const {
        return std::sqrt(legA * legA + legB * legB);
    }
};

int main() {
    double a, b;

    std::cout << "Введите катеты a и b: ";
    std::cin >> a >> b;

    RightTriangle triangle(a, b);
    std::cout << "Гипотенуза равна: " << triangle.calculateHypotenuse() << std::endl;

    return 0;
}

//проектный метод
#include"1proect.hpp"
#include<cmath>

double findHypo(double a, double b) {
    return sqrt((a * a) + (b * b));
}

//процедурный
#include <iostream>

using namespace std;
double gip;
int a = 5;
int b = 3;
int main() {
    gip = sqrt((a * a) + (b * b));
    cout << gip;
    return 0;

}
