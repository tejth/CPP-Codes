#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    cin >> name;
    int i = 0;
    int n = strlen(name) - 1;
    while (i <= n)
    {
        swap(name[i], name[n]);
        i++;
        n--;
    }
    cout << name;
    return 0;
}