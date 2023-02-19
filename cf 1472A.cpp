#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int x, y, tot_cnt;
        x = y = 0;
        while(w > 0 && w % 2 == 0)
        {
            w /= 2;
            x++;
        }
        while(h > 0 && h % 2 == 0)
        {
            h /= 2;
            y++;
        }
        tot_cnt = 1 << (x + y);
        if(tot_cnt >= n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

