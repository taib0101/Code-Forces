//In the name of Allah, the entirely mercifull, the specialy mercifull
#include<bits/stdc++.h>
using namespace std;
string z;
vector < string > vs;
bool anss(string x,string y)
{
    z.clear();
    if(x[0] == y[0])
    {
        z.push_back(x[0]);
        z = z + "*";
        return 1;
    }
    if(x[x.size()-1] == y[y.size()-1])
    {
        z = "*";
        z.push_back(x[x.size()-1]);
        return 1;
    }
    int xs = x.size();
    int ys = y.size();
    for(int i = 0; i < xs; ++i)
    {
        for(int j = 0; j < ys; ++j)
        {
            if(x[i] == y[j])
            {
                int ii = i,jj = j;
                while(x[ii] == y[jj])
                {
                    z.push_back(x[ii]);
                    ii++,jj++;
                }
                if(z.size() >= 2)
                {
                    z = "*" + z + "*";
                    return 1;
                }
                z.clear();
            }
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string x, y;
        cin >> x >> y;
        if(anss(x,y))
        {
            
            cout << "Yes\n" << z << endl;
        }   
        else
            cout << "No" << endl;
    }
    return 0;
}
