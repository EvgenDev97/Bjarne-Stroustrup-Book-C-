#include "../../std_lib_facilities.h"


int main ()
{
    double  x;
    double max = 0, min = 0;
    double sum = 0;
    int i = 0, range = 0;
    
    vector <double> res;
    while (cin >> x)
    {
        res.push_back(x);
        sum += res[i];
        i++;
    }
    sort(res);
    min = res[0];
    max = res.back();
    cout << min << "\n" << max << "\n" << i << "\n" << sum ;
}