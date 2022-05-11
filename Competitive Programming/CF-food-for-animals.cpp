#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 0;
    cin >> tc;
    while (tc--)
    {
        long long int a = 0, b = 0, c = 0, x = 0, y = 0;
        cin >> a >> b >> c >> x >> y;
        x -= a;
        if (x > 0)
        {
            c -= x;
        }
        y -= b;
        if (y > 0)
        {
            c -= y;
        }
        if (c >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}