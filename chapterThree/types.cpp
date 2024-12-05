#include "../std_lib_facilities.h"

int main ()
{
    double d = 0;
    while (cin >> d && d != 0.0)
    {
        int i = d;
        char ch = d;
        // cout<< i << "\n";
        cout<< ch<< "\n";
            
    }

    double x  {2.3};
    cout << x;
    int y {x}; // warning narrowing conversion of 'x' from 'double' to 'int' [-Wnarrowing]

    return 0;
}