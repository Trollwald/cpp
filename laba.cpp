#include <iostream>
#include <math.h>
int main()
{
      using namespace std;

      double x, y, z, s;
      cout << "Vvedi x: ";
      
      cin >> x;
      cout << "Vvedi y: ";
      cin >> y;
      cout << "Vvedi z: ";
      cin >> z;
      s = pow(2, -x) * sqrt(x + pow(fabs(y), 1 / 4.)) * pow(exp(x - 1 / sin(z)), 1 / 3.);
      cout << "resultat s = " << s << endl;
      return 0;
}     

 
