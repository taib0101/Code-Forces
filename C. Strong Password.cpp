//I seek refuge with Allah, from the accursed devil
//In the name of Allah, the Entirely Merciful,the specially Merciful
#include<bits/stdc++.h>
using namespace std;
vector < int > arr[12],dp[12];
bool bb;

int boundd(int i,int tg)
{
    int low = 0, high = arr[i].size()-1;
    int xx = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[i][mid] > tg)
            xx = arr[i][mid] , high = mid - 1;
        else
            low = mid + 1;
    }
    if(xx == -1)
        bb = 1;
    return xx;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str, l, r;
        cin >> str;
        int n;
        cin >> n;
        cin >> l >> r;
        for(int i = 0; i <= 9; ++i) arr[i].clear(),dp[i].clear();
        for(int i = 0; i < str.size(); ++i) arr[str[i]-'0'].push_back(i);
        bb = 0;

        for(int i = l[0]-'0'; i <= r[0]-'0'; ++i)
        {
            if(!arr[i].size())
            {
                bb = 1;
                break;
            }
            dp[0].push_back(arr[i][0]);
        }

        if(!bb)
        {
            for(int i = 1; i < n && !bb; ++i)
            {
                int sz = (r[i-1]-'0') - (l[i-1]-'0') + 2;
                sort(dp[i-1].begin(),dp[i-1].end());
                for(int j = l[i]-'0'; j <= r[i]-'0'; ++j)
                {
                    int sz2 = arr[j].size();
                    if(bb)
                        break;
                    dp[i].push_back(boundd(j,dp[i-1][dp[i-1].size()-1]));
                }
            }
            if(bb)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
    return 0;
}
