#include <bits/stdc++.h>
#define N 100000
using namespace std;
void chuyen(int n, char c1, char c2)
{
    cout << c1 << " -> " << c2 << endl;
}
void hnTower(int n, int c1, int c2, int c3)
{
    if (n == 1)
    {
        chuyen(n, c1, c3);
    }
    else
    {
        hnTower(n - 1, c1, c3, c2);
        hnTower(1, c1, c2, c3);
        hnTower(n - 1, c2, c1, c3);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        char a = 'A';
        char b = 'B';
        char c = 'C';
        hnTower(n, a, b, c);
    }
    return 0;
}