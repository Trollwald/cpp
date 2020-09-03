#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, y, z, a, b, s;
    cout << "Vvedi x:";
    cin >> x;
    cout << "Vvedi y:";
    cin >> y;
    cout << "Vvedi z:";
    cin >> z;
    a = pow(y + pow(x - 1, 1 / 3.), 1 / 4.);
    b = fabs(x - y) * (pow(sin(z), 2) + tan(z));
    s = a / b;
    cout << "resultat s=" << s << endl;
    return 0;
}