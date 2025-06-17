#include "main.h"
using namespace std;
/*2. Створити програми для розв’язування задачі згідно свого варіанту:
А) з використанням циклу з параметром
Б) з використанням циклу з передумовою
В) з використанням циклу з післяумовою*/
// 7. Обчислити суму квадратів всіх парних чисел у діапазоні [1;20].
int task2() {
	cout << "\nStarting Exercise 2\n";
	
	//Excercise 1, Solution A, a simple for loop.
	cout << "Solution A! o((>w< ))o\n A very fancy and complicated for loop:\n";

	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 1; i <= 20; i++) {
		if (i % 2 == 0)
			sum1 = sum1 + pow(i, 2);
	}
	cout << "sum of all even numbers squared from 1-20 is: " << sum1 << endl;
	
	//Solution B, a simple while loop.
	cout << "Solution B! o((>w< ))o\n A very fancy and complicated while loop:\n";
	int con1 = 0;
	while (con1 <= 20) {
		con1++;
		if (con1 % 2 == 0) {
			sum2 = sum2 + pow(con1, 2);
		}
			

	}
	cout << "sum of all even numbers squared from 1-20 is: " << sum2 << endl;
	//Solution C, a simple do while loop.
	cout << "Solution B! o((>w< ))o\n A very fancy and complicated do while loop:\n";
	int con2 = 0;
	do {
		con2++;
		if (con2 % 2 == 0) {
			sum3 = sum3 + pow(con2, 2);
		}
		
	} while (con2 <= 20);
	cout << "sum of all even numbers squared from 1-20 is: " << sum1 << endl;

	return 0;
}