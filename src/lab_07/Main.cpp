/**
 \file main.cpp
 \brief ��������� ����������� ������ 7.
 \author Salamatin Roman
 \version 1
 \date 15.11.2020
*/

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdarg.h>

using namespace std;

/**
*�������� �� ������ ����� �� ��������� ����� for.
* @param digit : ������������ �� ��, �� � ������� ������.
* @return result: ������� ������� - ������ ����� �� �.
*/
bool funcPrimeCheckFor(int);

/**
*�������� �� ������ ����� �� ��������� ����� DoWhile.
* @param digit : ������������ �� ��, �� � ������� ������.
* @return result: ������� ������� - ������ ����� �� �.
*/
bool funcPrimeCheckDoWhile(int);

/**
*�������� �� ������ ����� �� ��������� ����� While.
* @param digit : ������������ �� ��, �� � ������� ������.
* @return result: ������� ������� - ������ ����� �� �.
*/
bool funcPrimeCheckWhile(int);

/**
 * ������� ������ ���� ������� ��������� �� �������� ������ ��������� ����� ������� �� ��������
 * @param amountOfArgument: ������� ��������� ��� ������ �������
 * @param ...: ����� ������� int ��������� ��� ��������
 * @return result: ������� ������� - ������ ��������� ����� ������� �� ��������
 */
int numericalPair�ounter(int, ...);
/**
 * ������� ������� � ��� ���������� ������,��������� ��� �������� ������� �� ���������
 */
int main(void)
{
    cout << numericalPair�ounter(5, 1, 2, 3, 4, 5) << endl;
    cout << funcPrimeCheckFor(rand() % 50 + 2);
    return 0;
}

bool funcPrimeCheckFor(int digit) {
    bool f = true;
    for (int i = 2; i < digit; i++) {
        if (digit % i == 0) {
            f = false;
            break;
        }
    }

    return f;
}

bool funcPrimeCheckWhile(int digit) {
    bool f = true;
    int i = 2;
    do {
        if (digit % i == 0) {
            f = false;
            break;
        }
        i++;
    } while (i < digit);

    return f;
}

bool funcPrimeCheckDoWhile(int digit) {
    bool f = true;
    int i = 2;
    while (i < digit) {
        if (digit % i == 0) {
            f = false;
            break;
        }
        i++;
    }
    return f;
}

int numericalPair�ounter(int amountOfArgument, ...) //�������� ������ ���. 3 ����� ������ ���-�� ����.
{
    int result = 0;
    va_list args;
    va_start(args, amountOfArgument);

    int* arr = new int[amountOfArgument];
    for (int i = 0; i < amountOfArgument; ++i)
    {
        arr[i] = va_arg(args, int);
    }
    for (int i = 0; i < amountOfArgument - 1; i++) {
        if (arr[i] < arr[i + 1])
            result++;
    }
    va_end(args);

    return result;
}


/*
int numericalPair�ounter(int amountOfArgument, ...) �������� ������ ���. 3 ����� ������ ���-�� ����.
int current, next; //������� � ���������
int* ptr = &amountOfArgument; //ptr ��������� �� ������ �������(���-�� ����)
*(++ptr); //������� �� ������ �������
for (; amountOfArgument > 1; amountOfArgument--) //���� ������� �� ���� ���������
{
  current = *ptr;
  next = *(++ptr);
  if (current < next) //�������� �� ��,��� ���������� ������ ��� ���������
    result++;
}*/