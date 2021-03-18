#include "/Volumes/Data/prj/cpp2sem/biblioteka.cpp"
using namespace std;
int main()
{
    dis_set st;
    bool flag = true;
    do
    {
        foo();
        cout << "Choose what to do:" << endl
             << "1) make new union" << endl
             << "2) join union" << endl
             << "3) find root" << endl
             << "4) End" << endl;
        foo();
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
        {
            cout << "Union size: " << endl;
            int x;
            cin >> x;
            for (int i = 1; i < x; i++)
                st.make_set(i);
            cout << "Union 1 - " << x - 1 << " set" << endl;
            break;
        }
        case 2:
        {
            cout << "What unions to merge: " << endl;
            int x, y;
            cin >> x >> y;
            if (st.find_set(x) == st.find_set(y))
            {
                cout << "Already merged " << x << ' ' << y << endl;
            }
            st.merge_set(x, y);
            break;
        }
        case 3:
        {
            int x;
            cout << "for which element? ";
            cin >> x;
            cout << st.find_set(x) << endl;
            break;
        }
        case 4:
            flag = false;
            break;
        }
    } while (flag == true);
    return 0;
}