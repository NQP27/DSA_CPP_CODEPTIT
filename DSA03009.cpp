#include <bits/stdc++.h>
#define N 100000
using namespace std;

struct cv
{
    int id, dl, p;
    void input() { cin >> id >> dl >> p; }
    void output() { cout << id << " " << dl << " " << p << endl; }
};
bool cmp(cv a, cv b)
{
    return a.p > b.p;
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
    int t;
    cin >> t;
    while (t--)
    {
        cv list[N];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            list[i].input();
        }
        sort(list, list + n, cmp);
        int time = 0;
        int profit = 0;
        int cnt = 0;
        int time_slot[N] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = min(n, list[i].dl) - 1; j >= 0; j--)
            {
                if (time_slot[j] == 0)
                {
                    time_slot[j] = 1;
                    profit += list[i].p;
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << " " << profit << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     list[i].output();
        // }
    }
    return 0;
}