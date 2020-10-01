#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, i, j ,k;
    cout << "Vvedite kol-vo strok matrici: ";
    cin >> n;
     cout << "Vvedite kol-vo stolbcov matrici: ";
    cin >> k;
    cout << "Vvedite elementy matrici" << endl;
    int** a = new int*[n];
    for (int i = 0; i < n; ++i)
    a[i] = new int[k];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }
    bool sim = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[n - 1 - j][n - 1 - i])
            {
                sim = false;
                break;
            }
        }
    
    }
    cout << ((sim) ? "Matrica simmetrichna" : "Matrica ne simmetrichna") << endl;
for (int i = 0; i < n; ++i)
    delete [] a[i];
delete [] a;
}