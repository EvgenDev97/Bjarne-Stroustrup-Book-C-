/*Объект - это место в памяти, имеющее
тип, который определяет вид информации, которая может храниться
в этом месте*/
#include "../std_lib_facilities.h"

int main()
{
    cout<< "Enter your name and age :\n";
    string first_name = "???"; //Эта строка выделяет участок памяти для хранения строки символов и присваивает ему имя first_name
    // cin >> first_name; // считывает символы в переменную first_name CHaracter INput (CIN) - >> операция ввода
    double age = -1.3;
    // cout << "Enter Yor Age  :\n";
    // cin >> age;
    
    cin>> first_name >>  age; // один оператор для ввода нескольких значений
    string mrName = "Mr " + first_name;
    cout<< "Hello, " <<mrName<< " " "age: "  <<age * 12<< "!\n" ;
    // по умолчанию считывание строки прекращается, как только
    //будет обнаружен так называемый пробельный символ (whitespace), т.е. пробел, 
    //main types
    int num = 0;
    double doubleNum = 0.1;
    char decimal = '.';
    string name = "burn";
    bool boolean = true;

    return 0;
}