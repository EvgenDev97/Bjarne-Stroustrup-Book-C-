#include "../../std_lib_facilities.h"

int main ()
{
    vector <string> names;
    for (string name; cin >> name;)
    {
        names.push_back(name);
    }
    sort(names);

    for (size_t i = 0; i < names.size(); i++)
    {
        if(i == 0 || names[i-1] != names[i])
            cout << names[i]<< " ";
    }
    
    return 0;
}