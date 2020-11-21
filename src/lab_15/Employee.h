#define _CRT_SECURE_NO_WARNINGS
#define SIZE 30
#define filename "C:\\Users\\User\\source\\repos\\lab_15\\lab_15\\test.txt"
#define filenameB "C:\\Users\\User\\source\\repos\\lab_15\\lab_15\\testB.dat"

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

struct Employee {
	char name[SIZE];
	char patronymic[SIZE];
	char surname[SIZE];
	char data[SIZE];
	int workExperienceInMonth, salary;
	char post[SIZE];
	bool lecturer;
};

void fread(struct Employee*,int);
void fwrite(struct Employee*,int);
void write(struct Employee*,int);
void sort(struct Employee*,int);
Employee create();
Employee freadB();
void fwriteB(struct Employee*,int);



