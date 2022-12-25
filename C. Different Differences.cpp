#include<bits/stdc++.h>
using namespace std;
#define super ios_base::sync_with_stdio(false); \
                cin.tie(NULL) ; \

int main()
{
    super;
    int t;
    cin >> t;
    while(t--)
    {
        int k, n;
        cin >> k >> n;
        int kk = k,k2;
        while(kk)
        {
            k2 = (kk*(kk+1))/2;
            if((n-k2) > 0)
            {
                // cout << "k2 = " << k2 << " , el = " << n-k2 << " , kk = " << kk << endl;
                if(k <= kk+1+(n-k2-1))
                    break;
            }
            kk--;
        }
        vector < int > x;
        x.push_back(n);
        for(int i = 1,ii = 2; i <= kk && ii <= k; ++i,++ii)
            x.push_back(n-((i*(i+1))/2));
        int nn = x.size();
        for(int i = nn,j = x[nn-1]-1; i < k; ++i,--j)
            x.push_back(j);
        reverse(x.begin(),x.end());
        nn = x.size();
        for(int i = 0; i < nn; ++i)
            cout << x[i] << " ";
        cout << endl;
        // cout << x.size() << endl;
    }
    return 0;
}