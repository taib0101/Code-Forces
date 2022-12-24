//In the name of Allah, the entirely merciful,the specially merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x,y;
        cin >> x;
        int nx = x.size();
        vector < int > vp[11];
        vector < int > vp2;
        map < int, bool > mp,mp2;
        for(int i = 0; i < nx; ++i)
        {
            if(!mp[x[i]-'0'])
                mp[x[i]-'0'] = 1,vp2.push_back(x[i]-'0'),mp2[x[i]-'0'] = 0;
            vp[x[i]-'0'].push_back(i);
        }
        sort(vp2.begin(),vp2.end());
        for(int i = 0 ;i < vp2.size(); ++i)
        {
            int sz = vp2.size();
            int a = vp2[i];
            int xx = vp[a][0], yy = vp[a][vp[a].size()-1];
            // cout << "a = " << a << endl;
            // cout << "xx = " << xx << ", yy = " << yy << endl;
            for(int j = i+1; j < vp2.size(); ++j)
            {
                //cout << "b = " << vp2[j] << endl; 
                for(int k = 0; k < vp[vp2[j]].size(); ++k)
                {
                    int zz = vp[vp2[j]][k];
                    //cout << "zz = " << zz << endl;
                    if(zz < yy && !mp2[zz])
                        x[zz] = min(x[zz]-'0'+1,9)+'0',mp2[zz] = 1;
                }
            }
            
        }
        sort(x.begin(),x.end());
        cout << x << endl;
    }
    return 0;
}
