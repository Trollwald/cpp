#include <iostream>
using namespace std;
struct dis_set
{
    int parent[1000];
    int size[1000];
    void make_set(int v)
    {
        parent[v] = v;
        size[v] = 1;
    }
    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void merge_set(int x, int y)
    {
        x = find_set(x);
        y = find_set(y);
        if (x != y)
        {
            {
                if (size[x] < size[y])
                {
                    swap(x, y);
                }
                parent[y] = x;
                size[x] += size[y];
            }
        }
    }
};
int main()
{
    dis_set st;
    bool flag = true;
    do
    {
        cout << "Choose what to do:" << endl
             << "1) make new union" << endl
             << "2) join union" << endl
             << "3) find root" << endl
             << "4) End" << endl;
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
        {
            cout << "Union size: " << endl;
            int x;
            cin >> x;
            for (int i = 0; i <= x; i++)
                st.make_set(i);
            cout << "Union 1 - " << x << " set" << endl;
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