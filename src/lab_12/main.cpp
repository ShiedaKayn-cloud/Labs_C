#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

float difference—heck();

int main() {
    ofstream myfile;
    float result = difference—heck();
    myfile.open("example.txt");
    myfile << "Result is:" << result;
    myfile.close();
  
    string line;
    ifstream myfile1("example.txt");
    if (myfile1.is_open())
    {
        while (getline(myfile1, line))
        {
            cout << line << '\n';
        }
        myfile1.close();
    }

    else cout << "Unable to open file";

    return 0;
}

float difference—heck() {
    printf("Enter a three-digit number: ");
    bool check = true;
    float a;
    while (check) {
      scanf("%f", &a);
      if (a < 100 || a > 1000)
          printf("variable entered incorrectly, enter three-digits: ");
      else
          check = false;
    }
    float first = (int)a / 100;
    float last = (int)a % 10;
    float result = first / last;
    return result;
}