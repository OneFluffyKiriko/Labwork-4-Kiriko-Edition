#include "main.h"
using namespace std;
/*2. Створити програми для розв’язування задачі згідно свого варіанту:
А) з використанням циклу з параметром
Б) з використанням циклу з передумовою
В) з використанням циклу з післяумовою*/
// 7. Обчислити суму квадратів всіх парних чисел у діапазоні [1;20].
int task2() {
	cout << "\nStarting Exercise 2\n";
	//Excercise A, a simple for loop.
	cout << "Solution A! o((>w< ))o\n A very fancy and complicated for loop:\n";
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 1; i <= 20; i++) {
		if (i % 2 == 0)
			sum1 = sum1 + pow(i, 2);
	}
	cout << "sum of all even numbers squared from 1-20 is: " << sum1 << endl;
	//Solution B, a simple while loop.
	cout << "Solution B! o((>w< ))o\n A very fancy and complicated while loop:\n";
	int sqr = 0;
	while (sqr <= 20) {
		sqr++;
		cout << sqr << " Squared is " << pow(sqr, 2) << endl;
	}
	//Solution C, a simple do while loop.
	cout << "Solution B! o((>w< ))o\n A very fancy and complicated do while loop:\n";
	int sqr0 = 0;
	do {
		sqr0++;
		cout << sqr0 << " Squared is " << pow(sqr0, 2) << endl;
	} while (sqr0 <= 20);

	return 0;
}