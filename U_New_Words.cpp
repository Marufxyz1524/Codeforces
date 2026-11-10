
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char c = toupper(s[i]);

        if (c == 'E') e++;
        else if (c == 'G') g++;
        else if (c == 'Y') y++;
        else if (c == 'P') p++;
        else if (c == 'T') t++;
    }

    int ans;

    if (e <= g && e <= y && e <= p && e <= t)
        ans = e;
    else if (g <= e && g <= y && g <= p && g <= t)
        ans = g;
    else if (y <= e && y <= g && y <= p && y <= t)
        ans = y;
    else if (p <= e && p <= g && p <= y && p <= t)
        ans = p;
    else
        ans = t;

    cout << ans << endl;

    return 0;
}
