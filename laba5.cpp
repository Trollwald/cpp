#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int numbers[5];
    int x, sum, indx;
    sum = 0;
    cout << "Enter numbers: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
        x = numbers[0];
    }

    for (int i = 0; i < 5; ++i)
    {
        if (x > numbers[i])
        {
            x = numbers[i];
            indx = i + 1;
        }
    }
    for (int i = indx; i < 5; ++i)
    {
        sum = sum + fabs(numbers[i]);
    }
    cout << "Sum is ";

    cout << sum << endl;
    return 0;
}