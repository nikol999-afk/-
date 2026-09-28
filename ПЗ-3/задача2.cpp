//модульный
#include <iostream>
using namespace std;

long long getMark(long long v, long long t) {
    long long distance = v * t;
    long long mark = 109;
    if (mark < distance) {
        distance = mark;
    }
    return mark;
}

int main() {
    long long v, t;
    cin >> v >> t;
    cout << getMark(v, t) << endl;
    return 0;
}
//обьектно ориентированый 
#include <iostream>
#include <cmath>
#include <string>

class Biker {
private:
    std::string name;
    double speed;
    const double MKAD_LENGTH = 109.0;

public:
    Biker(const std::string& n, double v) : name(n), speed(v) {}

    double calculatePosition(double time) const {
        double distance = speed * time;
        double position = fmod(distance, MKAD_LENGTH);
        if (position < 0) {
            position += MKAD_LENGTH;
        }
        return position;
    }

    void printResult(double time) const {
        std::cout << "Байкер " << name << " остановится на отметке: "
            << calculatePosition(time) << " км" << std::endl;
    }
};

int main() {
    double v, t;

    std::cout << "Введите скорость байкера (км/ч): ";
    std::cin >> v;

    std::cout << "Введите время движения (часы): ";
    std::cin >> t;

    Biker vasya("Вася", v);
    vasya.printResult(t);

    return 0;
}
//проектный метод
#include <iostream>
#include "mkad.h"

int main() {
    int v, t;

    std::cout << "Введите скорость байкера (км/ч): ";
    std::cin >> v;

    std::cout << "Введите время в пути (ч): ";
    std::cin >> t;

    int mark = calculateMark(v, t);

    std::cout << "Байкер Вася остановится на отметке: "
              << mark << " км" << std::endl;

    return 0;
}
//процедурный
#include <iostream>

using namespace std;

int main() {
    double y, t, res;
    int s = 109;
    cout << "введи скорость и время\n";
    cin >> y;
    cin >> t;
    res = y * t;
    if (res > s) {
        res = s;
    }
    cout << "остановится на" << res;
    return 0;
}
