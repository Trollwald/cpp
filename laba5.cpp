#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int *my_dynamic_array;

    int size;
    cout << "Vvedite razmer massiva ";
    cin >> size;

    my_dynamic_array = new int[size];

    int numbers[size];
    int x, sum, indx;
    sum = 0;
    cout << "Vvedite chisla " << endl;

    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[i];
        x = numbers[0];
    }

    for (int i = 0; i < size; ++i)
    {
        if (x > numbers[i])
        {
            x = numbers[i];
            indx = i + 1;
        }
    }
    for (int i = indx; i < size; ++i)
    {
        sum = sum + fabs(numbers[i]);
    }
    cout << "Sum is ";

    cout << sum << endl;
    return 0;
}