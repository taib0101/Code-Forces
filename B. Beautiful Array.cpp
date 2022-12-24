//I got 15 times wrong
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
const int nn = 1e5;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        ll k, b, s;
        cin >> n >> k >> b >> s;
        ll ar[n+10] = {0};
        if((b*k) <= s)
        {
            ll x = ((b*k) + (k-1) <= s)? (b*k) + (k-1) : b*k;
            //cout << "x = " << x << endl;
            if(((k-1)*(n-1)) >= (s-x))
            {
                ar[1] = x;
                ll xx = s-x;
                for(int i = 2; i <= n; ++i)
                {
                    if((k-1) <= xx)
                        ar[i] = k-1, xx = xx - (k-1);
                    else
                    {
                        ar[i] = xx;
                        break;
                    }
                }
                for(int i = 1; i <= n; ++i)
                    cout << ar[i] << " ";
                cout << endl;
            }
            else
                cout << "-1" << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}
