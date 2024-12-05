#include "../std_lib_facilities.h"

constexpr double pi = 3.1415; //символическая константа, именнованный объект, которому после инициализации нельзя присвоить новое значение


double circle_square( int r)
{
    return  pi * pow(r, 2.0);
}
int main()
{
    /*когда значение "переменной" инициализируется значением, которое неизвестно во время компиляции, но после инициализации
    остается неизменным. С++ предлагает вторую разновидность констант
    (const):*/

    const double sqrtPi = sqrt(pi);

    int a = 0;
    cin >> a;
    switch (a)
    {
    case 0 : case 2: case 4: case 6: case 8:
        cout << "even";
        break;
    case 1: case 3: case 5: case 7: case 9:
        cout << "odd" << "\n";
        break;
    default:
        break;
    }

    //while
    /*Счетчик цикла для инструкции while должен быть определен и проинициализирован заранее, вне инструкции while. Если мы забудем это
    сделать, то компилятор выдаст сообщение об ошибке.*/
    while (a < 10)
    {
        cout << pow(a, 2.0) << " " << "\n";
        a++;
    }

    //for
    /*с помощью инструкции for можно создать намного более ясный код. поскольку цикл for содержит простые операции инициализации,
     проверки условия и инкремента счетчика.
    SИспользуйте инструкцию while только тогда. когда нет другого выхода*/
    for (size_t i = 0; i < 10; i++)
    {
        cout<< i << " ";
    }
    cout << "\n";
    // function 
    cout << "square = " <<circle_square(3);


    
    return 0;
}