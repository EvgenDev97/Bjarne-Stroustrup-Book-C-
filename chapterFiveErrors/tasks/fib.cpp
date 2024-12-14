#include "../../std_lib_facilities.h"

int main()
{
    int n;

    cin >> n;

    int a = 1, b = 1;
    int i = 0;
    while (i  < n)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        i++;
    }
    return 0;

}