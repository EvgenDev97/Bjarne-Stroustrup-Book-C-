#include "../std_lib_facilities.h"

int main ()
{
    string previous = " ";
    string current;
    while (cin >> current && current != "0" )
    {
        if(previous == current){
            cout<< "dublicate " << current << "\n";
        }
        previous = current;
    }
    return 0;

}