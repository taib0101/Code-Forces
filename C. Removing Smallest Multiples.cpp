//In the name of Allah, the entirely merciful, the specillay merciful
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,kk = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector < int > x;
        bool ar1[n+10],ar2[n+10];
        string c;
        cin >> c;
        memset(ar1,1,sizeof(ar1));
        memset(ar2,1,sizeof(ar2));
        for(int i = 0; i < n; ++i)
        {
            if(c[i] == '0')
                x.push_back(i+1),ar1[i+1] = ar2[i+1] = 0;
        }
        ll cost = 0;
        for(int i = 0; i < x.size(); ++i)
        {
            int xx = x[i], yy = 0;
            if((xx+yy)<=n && !ar1[xx+yy])
            {
                while((xx+yy)<=n && !ar1[xx+yy])
                {
                    if(!ar2[xx+yy])
                        cost =(ll) (cost + xx);
                    ar2[xx+yy] = 1;
                    yy += xx;
                }
            }
            else if(!ar1[xx] && !ar2[xx])
                cost =(ll) (cost + xx), ar2[xx] = 1;
        }
        cout << cost << endl;
    }
    return 0;
}
