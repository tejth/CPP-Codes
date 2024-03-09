#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    bool pallen = true;
    char name[10];
    cout << "Enter string : ";
    cin >> name;
    int i = 0;
    int j = strlen(name) - 1;
    while (i <= j)
    {
        if (name[i] != name[j])
        {
            pallen = false;
        }
        i++;
        j--;
    }

    cout << pallen;

    return 0;
}