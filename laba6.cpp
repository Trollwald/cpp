#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, i, j, k, M, sum = 0, pr = 1;
    cout << "Vvedite kol-vo strok matrici: ";
    cin >> n;
    cout << "Vvedite kol-vo stolbcov matrici: ";
    cin >> k;
    // sled 3 stroki - din massiv
    int **a = new int *[n];
    for (int i = 0; i < n; ++i)
        a[i] = new int[k];
    cout << "1 or 2" << endl;
    cin >> M;
    if (M == 1)
    {
        cout << "Vvedite elementy matrici" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    else
    {
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < k; j++)
            {
                a[i][j] = rand() % 10 - 5;
                cout << a[i][j] << endl;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
                sum += a[i][j];
            else if (i < j)
                pr *= a[i][j];
        }
    }
    cout << "summa = " << sum << endl;
    cout << "proizvedenie = " << pr << endl;
    // ydalyaem znacheniya massiva
    for (int i = 0; i < n; ++i)
        delete[] a[i];
    delete[] a;
}