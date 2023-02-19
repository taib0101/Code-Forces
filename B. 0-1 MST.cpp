#include<bits/stdc++.h>
using namespace std;
map < int , map < int , bool > > gh;
set < int > listt;
void dfs(int u, bool bb[])
{
     listt.erase(u);
     set < int > connected;
     for(int it: listt)
     {
          int v = it;
          if(!gh[u][v])
               connected.insert(v);
     }
     for(int i: connected)
     {
          bb[i] = 1;
          listt.erase(i);
     }
     for(int i: connected)
          dfs(i,bb);
}

int main()
{
     int n, m;
     cin >> n >> m;
     for(int i = 1; i <= n; ++i)
          listt.insert(i);
     for(int i = 1; i <= m; ++i)
     {
          int u, v;
          cin >> u >> v;
          gh[u][v] = 1;
          gh[v][u] = 1;
     }
     bool bb[n+10] = {0};
     int ans = 0;
     for(int i = 1; i <= n; ++i)
     {
          if(!bb[i])
               dfs(i,bb),ans++;
     }
     cout << ans-1 << endl;
     return 0;
}