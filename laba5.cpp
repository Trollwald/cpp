#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int *my_dynamic_array;

    int size;
    cout << "Vvedite razmer massiva ";
    cin >> size;

    my_dynamic_array = new int[size];

    int numbers[size];
    int x, sum, indx, count;
    cout << "Kak zapolnit massiv 1- random 2- s klaviatyry ";
    cin >> count;
    switch (count)
    {
    case 1:
    {
        sum = 0;
        for (int i = 0; i < size; ++i)
        {
            numbers[i] = (rand() % 100) - 50;
            cout << numbers[i] << " ";
            x = numbers[0];
        }
        break;
    }
    case 2:
    {
        sum = 0;
        cout << "Vvedite chisla " << endl;

        for (int i = 0; i < size; ++i)
        {
            cin >> numbers[i];
            x = numbers[0];
        }
        break;
    }
    }
       for (int i = 0; i < size; ++i)
        {
            if (abs(x) > abs(numbers[i]))
            {
                x = numbers[i];
                indx = i + 1;
            }
        }
        for (int i = indx; i < size; ++i)
        {
            sum = sum + abs(numbers[i]);
        }
        cout << "Sum is ";

        cout << sum << endl;
    return 0;
}