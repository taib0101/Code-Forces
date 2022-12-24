//In the name of Allah, the entirely merciful , the specially merciful
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
        int n, m;
        cin >> n >> m;
        if((n > m) || (!(n%2) && (m%2)))
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
            if(!(n%2))
            {
                int sum = n-2;
                for(int i = 1; i <= n-2; ++i)
                    cout << "1 ";
                cout << (m-sum)/2 << " " << (m-sum)/2 << endl; 
            }
            else
            {
                int sum = n - 1;
                for(int i = 1; i <= n-1; ++i)
                    cout << "1 ";
                cout << m-sum << endl;
            }
        }
        
    }
    return 0;
}
