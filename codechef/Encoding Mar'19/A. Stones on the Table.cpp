#include <bits/stdc++.h>
int main() {
int n, i, c=0;
std::string s;
    std::cin >> n >> s;
    for (i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) c++;
    }
    std::cout << c;
}