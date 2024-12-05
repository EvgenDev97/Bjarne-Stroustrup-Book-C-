#include "../../std_lib_facilities.h"

bool isPrime(int val)
{
    if(val < 0) return 0;
    for (size_t i = 2; i*i <= val; i++)
    {
        if(val % i == 0){
            return false;
        }  
    }
    return true; 
}

int main()
{

    vector <int> prime;
    for (size_t i = 1; i <= 100; i++)
    {
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    
    for (size_t i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
    return 0;
}