#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int N;
    cin>>N;
     int i, j, k = 0;
    // loop to print number from 0 to N-1
    for (i = 0; i < N; i++) {
        // For loop to display number from i to N-1
        for (j = i; j < N; j++) {
            if (i == 0 || j == i || j == N - 1)
                cout << j + 1 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
