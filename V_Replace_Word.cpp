#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int pos = s.find("EGYPT");

    while (pos != -1)
    {
        s.replace(pos,5," ");
        pos = s.find("EGYPT");
    }
    
    cout << s << endl;
    return 0;
}