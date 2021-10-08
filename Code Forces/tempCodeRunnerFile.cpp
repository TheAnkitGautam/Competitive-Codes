#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0, f = 0;
    char str[100];
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (str[i] == str[j])
            {
                f = 1;
                break;
            }
            else
                a++;
        }
    }
    if (a % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}