#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, i, j;
    double a[20][20];
    cout << "Vvedite razmer matrici: ";
    cin >> n;
    cout << "Vvedite elementy matrici" << endl;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
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
        if (!sim)
        {
            break;
        }
    }
    cout << ((sim) ? "Matrica simmetrichna" : "Matrica ne simmetrichna") << endl;
}
