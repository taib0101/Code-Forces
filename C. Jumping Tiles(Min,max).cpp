//qsn: find minimum cost ,maximum jump
//logic: i did sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair < char, int > x,pair < char, int > y)
{
    if(x.first != y.first)
        return x.first > y.first;
    return x.second < y.second;
}

bool cmp2(pair < char, int > x,pair < char, int > y)
{
    if(x.first != y.first)
        return x.first < y.first;
    return x.second < y.second;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int nx = x.size();
        vector < pair < char, int > > xx;
        xx.push_back({x[0],1});
        for(int i = 1; i < nx-1; ++i)
        {
            if((x[0] <= x[i] && x[i] <= x[nx-1]) || (x[nx-1] <= x[i] && x[i] <= x[0]))
                xx.push_back({x[i],i+1});//cout << x[i] << " ";
        }
        //cout << endl;
        xx.push_back({x[nx-1],nx});
        int sum = 0;
        int nx2 = xx.size();
        if(xx[0].first > xx[nx2-1].first)
            sort(xx.begin(),xx.end(),cmp);
        else
            sort(xx.begin(),xx.end(),cmp2);
        for(int i = 0; i < xx.size()-1; ++i)
            sum += abs((xx[i].first-'a'+1)-(xx[i+1].first-'a'+1));
        cout << sum << " " << xx.size() << endl;
        for(int i = 0; i < xx.size(); ++i)
            cout << xx[i].second << " ";
        cout << endl;
    }
    return 0;
}
