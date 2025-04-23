#include <iostream>
using namespace std;

int main()
{

    str str;
    cin >> str;
    if (!str.empty())
    {
        str[0] = toupper(str[0]);
        cout << str;
    }
}
