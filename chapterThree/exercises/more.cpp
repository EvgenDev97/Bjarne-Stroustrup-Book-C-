#include "../../std_lib_facilities.h"

int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    if(a > b && b > c ){
        cout << a << " " << b << " " << c;
    } else if (b > a && a > c){
        cout << b << " " << a << " "  << c;
    }  else if (c > b && b > a){
        cout << c << " "  << b << " "  << a;
    } 
    return 0;
}