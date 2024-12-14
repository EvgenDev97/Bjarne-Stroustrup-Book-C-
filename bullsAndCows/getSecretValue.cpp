#include <iostream>
#include <vector>
#include <random>

using namespace std;

// vector <int> getSecretValue()
// {
    
// }

vector <int> getSecretValue()
{
    int start = 1;
    int end = 9;
    vector <int> secretNum;
    /*Создание объекта random_device,
     который используется для генерации случайных чисел.*/
    random_device rd;
    /*Создание объекта mt19937 (Mersenne Twister 19937),
     который является генератором псевдослучайных чисел. В данном случае,
      он инициализируется объектом random_device rd(),
     чтобы использовать его для получения случайных чисел.*/
    mt19937 gen(rd());
    /*Создание объекта uniform_int_distribution, который используется для
     генерации равномерно распределенных целочисленных случайных чисел в
      заданном диапазоне*/
    uniform_int_distribution<> distrib(start, end);
    while (secretNum.size() < 4)
    {
        int digits = distrib(gen);
        bool duplicates = false;
        for(int num: secretNum){
            if(num == digits){
                duplicates = true;
                break;
            }
        }
        if(!duplicates){
            secretNum.push_back(digits);
        }
    }
    // for (size_t i = 0; i < secretNum.size(); i++)
    // {
    //    cout << secretNum[i] << " ";
    // }
    return secretNum;
}