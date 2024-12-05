#include "../std_lib_facilities.h"

int main()
{
    // cout<< "Enter a  value: \n";
    // int n;
    // cin >> n;
    // cout << sqrt(n);
    // return 0;

    //сравнение строк

    string first_name;
    string second_name;
    cin >> first_name >> second_name;
    if(first_name == second_name) cout << "Nice";
    else if (first_name < second_name) cout << "First ";
    else cout << "Second ";
    return 0;
}