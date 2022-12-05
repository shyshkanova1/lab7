#include <iostream> 
#include <iomanip> 
#include "windows.h"
#define N 3

using namespace std;

int main()
{
    int ar[N][N];

    int mul = 1;

    srand(time(NULL));

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            ar[j][i] = rand() % 10;

            if (i > j)
            {
                cout << "ar[" << j << "][" << i << "]=" << ar[j][i] << " ";

                mul *= ar[j][i];
            }
        }
        cout << endl;
    }

    cout << "Result: " << mul << endl;
    return 0;
}