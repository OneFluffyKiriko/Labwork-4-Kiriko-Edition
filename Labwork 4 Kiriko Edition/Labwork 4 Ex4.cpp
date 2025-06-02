#include "main.h"
#include <iomanip>
using namespace std;
int task4() {
    const double PI = 3.1415;
    double a = -PI / 2;
    double b = 3 * PI / 2;
    double dx = PI / 3;

    cout << fixed << setprecision(4);
    cout << "  x\t\t y = cos^2(x) + 3sin(x)\n";
    cout << "-------------------------------\n";

    for (double x = a; x <= b + 1e-6; x += dx) {  // Add a small epsilon to ensure inclusion of b
        double y = std::pow(std::cos(x), 2) + 3 * std::sin(x);
        std::cout << x << "\t " << y << "\n";
    }

    return 0;
}

        