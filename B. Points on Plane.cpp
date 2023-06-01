//In the name of Allah, the Entirely Merciful,the Specially Merciful 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x = sqrt(n);
        ll xx = x*x;
        if( xx == n )
            x = x - 1;
        cout << x << endl;
    }
    // 1000000000000000000
    return 0;
}
