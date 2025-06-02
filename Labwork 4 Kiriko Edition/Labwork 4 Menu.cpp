#include "main.h"
using namespace std;
int menu() {
    //Reusing old menu code, now even more pretty since the tasks are separated by file ヾ(•ω•`)o
    int control = 1; //Input variable for menu control
    while (control > 0) {
        cout << endl << "Task control menu. \n Input 0 to stop program. \n Input numbers 1-4 to run the related task.\n";
        cin >> control;
        switch (control) {
        case 0:
            cout << "Ending program\n Goodnight! >w<\n";
            break;
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        default:
            cout << "Wrong value entered, try again!\n";
            break;

        }
    }

	return 0;
}