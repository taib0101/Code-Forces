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
        char ar[n+5][n+5];
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
                cin >> ar[i][j];
        }
        int m = n / 2,cost = 0;
        for(int i = 1,j = n; i <= m; i++,j--)
        {
            //cout << "i = " << i << " , j = " << j << endl; 
            for(int k = i,l = j; k < j; ++k,--l)
            {
                int one = 0,zero = 0;
                //cout << "k = " << k << " , l = " << l << endl;
                if(ar[i][k] == '0')
                    zero++;
                else
                    one++;
                if(ar[k][j] == '0')
                    zero++;
                else
                    one++;
                if(ar[j][l] == '0')
                    zero++;
                else
                    one++;
                if(ar[l][i] == '0')
                    zero++;
                else
                    one++;
                cost += min(zero,one);
                //cout << "z = " << zero << " , o = " << one << endl << endl;
            }
            //cout << endl;
        }
        cout << cost << endl;
    }
    return 0;
}
