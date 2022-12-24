#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int ar[m+10];
        for(int i = 1; i <= m; ++i)
            cin >> ar[i];
        sort(ar+1,ar+1+m);
        vector < int > x;
        int cnt = m;
        if(m != 1)
            x.push_back((ar[1] - 1) + (n - ar[m]));
        
        for(int i = 1; i < m; ++i)
            x.push_back(ar[i+1] - ar[i] - 1);
        
        sort(x.begin(),x.end());
        if(m != 1)
        {
           int d = 0;
           int a = 1;
           for(int i = x.size()-1; i >= 0; --i)
           {
                //cout << "x[i] = " << x[i] << endl;
                if(x[i] > 1)
                {
                    d++;
                    if(i != m-1)
                    {
                        if(x[i] > a)
                            cnt = cnt + a,x[i] = x[i] - a;//cout << "cnt1 = " << cnt << endl;
                        else
                            cnt = cnt + x[i],x[i] = 0;
                        //cout << "d1 = " << d << endl;
                        
                    }
                    
                    a = d * 2;
                    if(x[i] >= 2)
                    {
                        d++;
                        //cout << "d2 = " << d << endl;
                        cnt++;
                        //cout << "cnt2 = " << cnt << endl;
                        a = d * 2;   
                    }
                }
                else if(i != m-1 && x[i])
                    cnt++;
           }
        }
        else
            cnt++;
        cout << cnt << endl;

    }
    return 0;
}
