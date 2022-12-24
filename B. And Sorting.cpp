#include<bits/stdc++.h>
using namespace std;
int maxx;
#define pr(a,b) cout << a << " " << b << endl;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+10];
        maxx = 0;
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        vector < int > x;
        for(int i = 0; i < n; ++i)
        {
            if(i != arr[i])
                x.push_back(arr[i]);
        }
        int ans = x[0];
        for(int i = 1; i < x.size(); ++i) ans = (ans&x[i]);
        cout << ans << endl;
    }
    return 0;
}
