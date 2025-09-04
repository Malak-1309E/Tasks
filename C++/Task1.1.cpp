#include <iostream>
using namespace std;

int main()
{
    int orange_drinks;

    cout << "Enter the number of drinks which contains orange juice in it" << endl;
    cin >> orange_drinks;

    while (orange_drinks > 100 || orange_drinks < 1)
    {
        
        cout << "Invalid number of orange drinks please re-enter the number of drinks" << endl;
        cin >> orange_drinks;
        
    }

    float orangeper[orange_drinks];

    for (int i = 0; i < orange_drinks; i++)
    {
       
        cout << "Enter the percentage of ornage juice in drink number " << i + 1 << endl;
        cin >> orangeper[i];
        
        while (orangeper[i] > 100 || orangeper[i] < 0)
        {
            
            cout << "Invalid percentage please re-enter (0-100)" << endl;
            cin >> orangeper[i];
            
        }
    }

    float purejuice = 0;

    for (int i = 0; i < orange_drinks; i++)
    {
        purejuice += (orangeper[i] / 100);
    }
    
    cout << "The amount of pure orange juice in the cocktail in % is " << (purejuice / orange_drinks) * 100 << endl;
    
    return 0;
}