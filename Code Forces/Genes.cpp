#include <iostream>
using namespace std;

int ord(char ch)
{
    if (ch == 'R')
        return 3;
    else if (ch == 'B')
        return 2;
    return 1;
}

int main()
{
    char a, b;
    cin >> a >> b;
    int x1 = ord(a);
    int x2 = ord(b);

    if (x1 > x2)
        cout << a << endl;
    else
        cout << b << endl;

    return 0;
}