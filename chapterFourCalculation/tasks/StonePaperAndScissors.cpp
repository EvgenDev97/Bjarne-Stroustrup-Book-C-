#include "../../std_lib_facilities.h"

int main()
{
    int start = 1;
    int end = 3;
    /*generate random number*/ 
    random_device rd;
    mt19937 gen(rd()); 
    //Определение распределения (равномерное распределение целых чисел от 1 до 3)
    uniform_int_distribution<> distrib(start, end);
    int randVal = distrib(gen);
    string machine;
    string user;
    cout << "Enter paper stone or scissors" << "\n";
    cin >> user;
    cout << randVal << "\n";
    switch (randVal)
    {
    case 1:
        machine = "stone";
        if(user == "stone")
            cout << "draw";
        else if (user == "paper")
        {
            cout <<  "user win";
        }else if( user == "scissors"){
            cout << "user lose";
        }else{
            cout << "unknown user value";
        }
        break;
    case 2:
        machine = "paper";
        if(user == "paper")
            cout << "draw";
        else if (user == "scissors")
        {
            cout <<  "user win";
        }else if( user == "stone"){
            cout << "user lose";
        }else{
            cout << "unknown user value";
        }
        break;
    case 3:
        machine = "scissors";
        if(user == "scissors")
            cout << "draw";
        else if (user == "paper")
        {
            cout <<  "user lose";
        }else if( user == "stone"){
            cout << "user win";
        }else{
            cout << "unknown user value";
        }
        break;  
    default:
        break;
    }

    return 0;
}