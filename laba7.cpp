#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str, result = "";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
        if ((str[i] - '0') % 2 != 1)
            result += str[i];
    cout << result << endl;
    system("pause");
    return 0;
}