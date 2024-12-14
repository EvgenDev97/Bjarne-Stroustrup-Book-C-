#include <iostream>
#include <vector>
#include "./getSecretValue.cpp"
#include "./getUserValue.cpp"
using namespace std;
int main()
{
    vector<int> secretValue = getSecretValue();
    for (size_t i = 0; i < secretValue.size(); i++)
    // {
    //     cout << secretValue[i];
    // }
    cout << "\n";
    int bulls = 0;
    int cows = 0;
    int counter = 0;
    vector<bool> usedSecret(4, false);
    bool gameFlag = false;
    while (!gameFlag)
    {
        vector<int> userValue = getUserValue();
        for (size_t i = 0; i < 4; i++)
        {
            if (secretValue[i] == userValue[i])
            {
                bulls++;
            }
        }
        cout << "count of bulls: " << bulls << "\n";

        for (size_t i = 0; i < 4; ++i)
        {
            for (size_t j = 0; j < 4; ++j)
            {
                if (i != j && userValue[i] == secretValue[j] && !usedSecret[i])
                {
                    cows++;
                    usedSecret[i] = true;
                    break;
                }
            }
        }
        cout << "count of cows: " <<  cows << "\n";

        if (bulls == 4)
        {
            cout << "Поздравляю, вы победили!!!!"<< endl;
            cout << "Количество попыток: " << counter << endl;
            gameFlag = true;
        }

        fill(userValue.begin(), userValue.end(), 0);
        bulls = 0;
        cows = 0;
    }

    return 0;
}