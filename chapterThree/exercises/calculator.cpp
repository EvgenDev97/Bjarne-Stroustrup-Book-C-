#include "../../std_lib_facilities.h"

int main ()
{
    cout << "Enter two values: " << "\n";
    int a,b;
    cin >> a >> b;
    cout << "enter operation: " << "\n";
    char operation;
    cin >> operation;
    double res;
    if(operation == '>'){
        int value =  a > b? a:b;
        cout<< value;
        return 0;
    }
    
    switch (operation)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout<< a * b;
        break;
    case '/':
        res =(double) a/ (double)b;
        cout << res;
        break;
    default:
        cout << "unknown operation";
        break;
    }
    return 0;
}