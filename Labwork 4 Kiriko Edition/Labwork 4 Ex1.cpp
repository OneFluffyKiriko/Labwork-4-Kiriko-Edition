#include "main.h"
using namespace std;
/*1. Створити програму для обчислення значень функції згідно свого варіанту. Передбачити у
програмі з допомогою циклу попередню перевірку допустимості вхідних параметрі для
арифметичних операцій, які при певних значеннях аргументу можуть давати невизначений
результат (ділення на нуль, корінь з від’ємного числа, логарифмування числа, меншого за нуль
тощо). Повідомити користувача про це. Наприклад «для заданих значень y та z у
обчислюваному виразі виконується ділення на 0. Задайте інші значення» Дія циклу
припиняється, як тільки користувач задав коректні значння вхідних параметрів.*/

//7. Задані значення цілих змінних x,y,z. Обчислити значення функції:
int task1()
{
	cout << "\nStarting Exercise 1\n";
	//Setting variables for user input
	bool con = true;
	while (con == true) {
	float x, y, z;
	cout << "Enter value of y, x, and z.\n";
	cin >> y >> x >> z;
	//Doing most of my calculations in a variable for easy checking with an if statement
	float calc1 = 1 + cos(y - 2), calc2 = (pow(x, 4) / 2) - pow(sin(z), 2);
	if (calc2 != 0) {
		//Now sending my calculation to the rounding function, the output can be quite small so the rounding is pretty generous.
		float roundvar = calc1 / calc2;
		//outputting rounded result into the console
		cout << "I have calculated that b = " << fround(roundvar) << endl;
		cout << "Stopping program!";
		con = false;
		} else
		cout << "Cannot divide by 0, silly! Enter another value\n";
		
	}
	
		
		
		
	
	return 0;
}