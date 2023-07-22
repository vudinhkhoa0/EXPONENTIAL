#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, tmax = -1;
    cin >> x;
    for (int i = 2; i <= sqrt(x) + 1; i++)
    {
        int a = i, j = 1;
        while (a <= x)
        {
            j++;
            a = a * i;
        }
        if (a > x)
        {
            a = a / i;
            j--;
        }
        if (tmax < a && j >= 2) tmax = a;
    }
    cout << tmax;
}

