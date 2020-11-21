#include <iostream>
using namespace std;

float func(float);

int main(){	
	printf("%.2f", func(111.3333));

	return 0;
}

float func(float a){
	int integer = (int)a;
	float fractional = a - integer;

	fractional *= 10000;
	float result = fractional / integer;
	
	return result;
}