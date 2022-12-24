#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *ar = (int *) malloc((n+10) * 4);
        bool bb = 1;
        for(int i = 1; i <= n; ++i)
        {
            cin >> *(ar+i);
            if(i > 1)
            {
                if(ar[i-1] > ar[i])
                    bb = 0;
            }
        }
        if(!bb && n != 2)
        {
            bool bl = 1;
            for(int i = 2; i < n && bl; ++i)
            {
                if(*(ar+i) < *(ar+i-1) && ar[i] < ar[i+1])
                    bl = 0;
                if(ar[i] == ar[i+1] && ar[i] < ar[i-1])
                {
                    while(i < n)
                    {
                        if(ar[i] != ar[i+1])
                            break;
                        i++;
                    }
                    if(i < n)//here was my bug
                    {
                        if(ar[i] < ar[i+1])
                            bl = 0;
                    }
                        
                }
            }
            if(bl)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
    return 0;
}
