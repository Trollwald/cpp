#include "/Volumes/Data/prj/cpp2sem/biblioteka.h"
void dis_set::make_set(int v)
{
    parent[v] = v;
    size[v] = 1;
}
int dis_set::find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void dis_set::merge_set(int x, int y)
{
    x = find_set(x);
    y = find_set(y);
    if (x != y)
    {
        if (size[x] < size[y])
        {
            int a, b;
            x = a;
            y = b;
            x = b;
            y = a;
        }
        parent[y] = x;
        size[x] += size[y];
    }
}
void foo()
{
    std::cout << "------------------" << std::endl;
}
