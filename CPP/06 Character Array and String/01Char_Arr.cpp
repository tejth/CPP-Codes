#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char arr[4];
    // cin >> arr;
    // cout << arr[5] << endl;
    // cout << arr;

    // char name[100];
    // cin >> name;
    // cout << name;

    // string name;
    // getline(cin, name);
    // cout << name;

    // char Arr[50];
    // cin >> Arr[4];
    // cin >> Arr[49];
    // cin >> Arr;
    // cin.getline(Arr, 50);

    char arr1[10];
    arr1[0] = 't';
    arr1[1] = 'e';
    arr1[2] = '\0';
    arr1[3] = 'j';

    arr1[4] = '\0';
    arr1[5] = 'h';
    cout << arr1;

    string arr2;
    arr2[0] = 't';
    arr2[1] = 'e';
    arr2[2] = '\0';
    arr2[3] = 'j';
    arr2[4] = '\0';
    arr2[5] = 'h';
    cout << arr2;

    return 0;
}