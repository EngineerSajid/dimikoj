// Alhamdulillah

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char str[120];
        cin.ignore();
        cin.get(str, 100);

        int length = strlen(str);

        if (str[length - 1] % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}