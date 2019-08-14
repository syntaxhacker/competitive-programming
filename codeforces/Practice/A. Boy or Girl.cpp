#include <bits/stdc++.h>
using namespace std;
bool used[105];
int main()
{
    string s;
    cin >> s;
    int Di = 0;
    for(int i = 0;i < s.length();i++)
    {
        if(!used[s[i]])
        {
            used[s[i]] = true;
            Di++;
        }
    }
    cout << (Di % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}