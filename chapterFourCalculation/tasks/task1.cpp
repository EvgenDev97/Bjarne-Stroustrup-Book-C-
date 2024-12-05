/*Напишите программу. содержащую цикл while, в котором считываются и выводятся на экран два числа типа int.*/
#include "../../std_lib_facilities.h"

int task (){
    int i = 0;
    int x;
    while (cin >> x && i < 2)
    {
        cout << x << " ";
        i++;
    }
    return 0;
}

int main ()
{
    task();
    return 0;
}