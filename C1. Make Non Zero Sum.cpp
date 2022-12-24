#include<bits/stdc++.h>
using namespace std;

struct meta
{
    int x;
    int y;
};

bool cmp(meta a,meta b)
{
    return a.x <= b.x;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n+10] ,sum = 0;
        for(int i = 1; i <= n; ++i)
            cin >> ar[i];
        if(!(n%2))
        {
            ar[n+1] = -1e9;
            vector < meta > xx,yy,z;
            sum = 0;
            for(int i = 1; i <= n; ++i)
            {
                int a, b;
                a = i;
                if(ar[i] == ar[i+1])
                {
                    while(ar[i] == ar[i+1] && i < n)
                        i++;
                    b = i;
                    if((b-a+1)%2)
                        xx.push_back({a,a}),sum += ar[a],yy.push_back({a+1,b});
                    else
                        yy.push_back({a,b});
                }
                else
                {
                    xx.push_back({a,a});
                    sum += ar[a];
                }
            }
            // cout << "Sum = " << sum << endl;
            // 1 -1 -1 1 -1 -1 1 -1 -1 1 
            if(sum)
            {
                int som = (sum > 0)? 1 : -1;
                sum = abs(sum);
                for(int i = 0; i < yy.size(); ++i)
                {
                    int value = yy[i].y - yy[i].x + 1;
                    int value2 = ar[yy[i].y];
                    // cout << "value = " << value << endl;
                    // cout << "valu2 = " << value2 << endl;
                    // cout << "som = " << som << endl;
                    if(som != value2 && sum)
                    {
                        int j = 0;
                        while(sum && j < value)
                        {
                            xx.push_back({yy[i].x+j,yy[i].x+j});
                            sum--;
                            j++;
                        }
                        if(j < value)
                            xx.push_back({yy[i].x+j,yy[i].y});
                    }
                    else
                        xx.push_back({yy[i].x,yy[i].y});
                }
                // cout << "sum == " << som << endl;
            }
            else
            {
                for(int i = 0; i < yy.size(); ++i)
                    xx.push_back({yy[i].x,yy[i].y});
            }
            sort(xx.begin(),xx.end(),cmp);
            cout << xx.size() << endl;
            for(int i = 0; i < xx.size(); ++i)
                cout << xx[i].x << " " << xx[i].y << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

    }
    return 0;
}