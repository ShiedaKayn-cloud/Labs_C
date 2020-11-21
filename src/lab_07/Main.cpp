/**
 \file main.cpp
 \brief Виконання лабораторної роботи 7.
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
*Перевірка на просте число за допомогою циклу for.
* @param digit : перевіряється на те, чи є простим числом.
* @return result: повертає відповідь - просте число чи ні.
*/
bool funcPrimeCheckFor(int);

/**
*Перевірка на просте число за допомогою циклу DoWhile.
* @param digit : перевіряється на те, чи є простим числом.
* @return result: повертає відповідь - просте число чи ні.
*/
bool funcPrimeCheckDoWhile(int);

/**
*Перевірка на просте число за допомогою циклу While.
* @param digit : перевіряється на те, чи є простим числом.
* @return result: повертає відповідь - просте число чи ні.
*/
bool funcPrimeCheckWhile(int);

/**
 * Функція приймає різну кількість параметрів та перевіряє скільки попередніх чисел меньших від поточних
 * @param amountOfArgument: кількість параметрів яку приймає функція
 * @param ...: змінна кількість int параметрів для перевірки
 * @return result: повертає відповідь - скільки попередніх чисел меньших від поточних
 */
int numericalPairСounter(int, ...);
/**
 * Головна функція з якої починається робота,запускаємо для перевірки функції за завданням
 */
int main(void)
{
    cout << numericalPairСounter(5, 1, 2, 3, 4, 5) << endl;
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

int numericalPairСounter(int amountOfArgument, ...) //передает только инт. 3 точки разное кол-во элем.
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
int numericalPairСounter(int amountOfArgument, ...) передает только инт. 3 точки разное кол-во элем.
int current, next; //текущее и следующее
int* ptr = &amountOfArgument; //ptr указатель на первый элемент(кол-во элем)
*(++ptr); //переход на первый элемент
for (; amountOfArgument > 1; amountOfArgument--) //цикл прохода по всем элементам
{
  current = *ptr;
  next = *(++ptr);
  if (current < next) //проверка на то,что предыдущий меньше чем следующий
    result++;
}*/