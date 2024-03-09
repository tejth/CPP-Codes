#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    cin >> name;
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    cout << length;
    cout << strlen(name);

    return 0;
}