//In the name of Allah, the entirely merciful,the specially merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n+10],br[n+10];
        for(int i = 1; i <= n; ++i)
            cin >> ar[i];
        for(int i = 1; i <= n; ++i)
            cin >> br[i];
        vector < pair < int , int > > vp;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = i+1; j <= n; ++j)
            {
                if(ar[i] != ar[j] && ar[i] > ar[j])
                {
                    swap(ar[i],ar[j]);
                    swap(br[i],br[j]);
                    vp.push_back({i,j});
                }
                else if(br[i] != br[j] && br[i] > br[j])
                {
                    swap(br[i],br[j]);
                    swap(ar[i],ar[j]);
                    vp.push_back({i,j});
                }
            }
        }
        bool bb = 1;
        for(int i = 1; i < n && bb; ++i)
        {
            if(ar[i] > ar[i+1] || br[i] > br[i+1])
                bb = 0;
        }
        if(bb)
        {
            cout << vp.size() << endl;
            for(int i = 0; i < vp.size(); ++i)
                cout << vp[i].second << " " << vp[i].first << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}
