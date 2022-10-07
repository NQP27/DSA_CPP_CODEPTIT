#include <bits/stdc++.h>
#define N 100000
using namespace std;
#define ll unsigned long long
vector<ll> pos;
void sinh()
{
    for (int i = 3; i < 93; i++)
    {
        pos.push_back(pos[i - 2] + pos[i - 1]);
    }
}
void find(ll n, ll k)
{
    if (n == 1)
    {
        cout << "A";
        return;
    }
    if (n == 2)
    {
        cout << "B";
        return;
    }
    if (k > pos[n - 2])
    {
        find(n - 1, k - pos[n - 2]);
    }
    else
    {
        find(n - 2, k);
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
    pos.push_back(0);
    pos.push_back(1);
    pos.push_back(1);
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        find(n, k);
        cout << endl;
    }
    system("pause");
    return 0;
}