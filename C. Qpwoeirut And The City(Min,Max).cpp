//prblm says: Find the minimum number of floors Qpwoeirut needs to build in order to maximize the number of cool buildings.
//logic : first i did prefix sum then i did suffix sum
#include<bits/stdc++.h>
using  namespace std;
#define ll long long
#define prnt(x,y) printf("tot%d = %lld \n",x,y);
int gett(int i,int ar[])
{
    return max(0,max(ar[i-1],ar[i+1])-ar[i]+1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n+10];
        for(int i = 1; i <= n; ++i)
            cin >> ar[i];
        ll anss = 0;
        if(n%2)
        {
            ll tot = 0;
            for(int i = 2; i < n; i += 2)
                tot = (ll) (tot + gett(i,ar));
            anss = tot;
        }
        else
        {    
            ll tot = 0;
            for(int i = 2; i < n; i += 2)
                tot = (ll) (tot + gett(i,ar));
            anss = tot;
            for(int i = n-1; i > 1; i -= 2)
            {
                tot = (ll) (tot - gett(i-1,ar));
                tot = (ll) (tot + gett(i,ar));
                anss = min(anss,tot);
            }
        }
        cout << anss << endl;
    }
    return 0;
}
