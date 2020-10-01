#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str, result;
    cout << "Vvedite cifry: " << endl;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
        if (str[i]%2 == 0)
            result += str[i];
    cout << "Chetnie cifry:" << result << endl;

    return 0;
}