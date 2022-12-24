//In the name of Allah, the entirely merciful,the specially merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    int ar[n+2];
    for(int i = 1; i <= n; ++i)
        cin >> ar[i];
    sort(ar+1,ar+1+n);
    int i = n, m = n,cnt = 0;
    while(m >= 1)
    {
        if(ar[i] > d)
            cnt++,i--,m--;
        else
        {
            int j = 1;
            while(m >= 1)
            {
                //cout << "ar = " << ar[i]*j << endl;
                m--;
                if(ar[i]*j > d)
                {
                    cnt++;
                    break;
                }
                //cout << "m = " << m << endl;
                j++;
            }
            cout << endl;
            i--;
        }
    }
    cout << cnt << endl;    
    return 0;
}
