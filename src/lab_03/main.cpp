#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
void func1();
void func2();
void func3();
void func4();
void func5();
void func6();

int main() {
    func2();

    return 0;
}


void func1() {
    float r1 = 3.0;
    float r2 = 2.0;
    float r3 = 4.0;

    float r;

    r = 1 / r1 + 1 / r2 + 1 / r3;

    r = 1 / r;

}

void func2() {
    int a = 124;
    int result = 0;

    while (a > 0) {
        result *= 10;
        result += a % 10;
        a /= 10;
    }
    result += a;
    cout << result;
    return;
}

void func3() {

    int a = 2;
    int a4, a6, a8, a10;

    a4 = a * a;
    a4 = a4 * a4;

    a6 = a * a;
    a6 = a6 * a6 * a6;

    a8 = a * a;
    a8 = a8 * a8;
    a8 = a8 * a8;

    a10 = a * a;
    a10 = a10 * a10 * a;
    a10 = a10 * a10;

    return;
}

void func4() {

    int a = 7657;
    int p = 8;
    int result = 0;
    int i = 0;

    while (a > 0) {
        result += a % 10 * pow(p, i);
        i++;
        a /= 10;
    }
    return;
}

void func5() {
    float a = 523;
    float first = 523 / 100;
    float last = 523 % 10;
    float result = first / last;
    printf("%.2f", result);

    return;
}

void func6() {

    int a = 50;
    int b = 52;
    int result;

    int c = (a + b) / 2;

    result = a * b * c;


    return;
}