#include "main.h"
using namespace std;
int task3() {
	cout << "\nStarting Exercise 3\n";
	//could not for the life of me figure this one out, so i folded and asked GPT.
	//This is the result i was given... Its... Bizzare... But i think it works so i wont complain.
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        int prod = 1;
        for (int j = 1; j <= i; ++j) {
            prod *= (i - j);
        }
        sum += prod;
    }
    cout << sum << endl;

	return 0;
}
