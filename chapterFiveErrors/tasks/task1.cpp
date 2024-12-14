/*Следующая программа получает температуру в градусах Цельсия
и преобразует ее в температуру в градусах Кельвина. Этот исходный
текст содержит много ошибок. Найдите ошибки. перечислите их и исправьте программу.
douЬle ctok (douЬle с) */
#include "../../std_lib_facilities.h"
double ctok (double c)
{
    double k =  c + 273.15;
    if(k < 0){
        throw  "temp can not be less then 0 K ";
    }
    return k;
}

int main ()
{
    double c =0.0;
    cin >> c ;
    try
    {
        double k = ctok(c);
        cout << k << "\n";
    }
    /*const char*, которое содержит сообщение об ошибке. В блоке catch это исключение будет перехвачено и обработано, отобразив сообщение об ошибке*/
    catch(const char* message)
    {
        cerr << message << "\n";
    }
    return 0;
}