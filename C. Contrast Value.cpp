//In the name of Allah, the entirely Merciful, the specialy Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int *arr = (int *) malloc(4*(n+1));
        int uttor = 0;
        //input and taking index in struct
        for(int i = 0; i < n; ++i)
            scanf("%d",(arr+i));
        for(int i = 0; i < n-1; )
        {
            if(arr[i] <= arr[i+1])
            {
                int aa = i,bb;
                while(i+1 < n)
                {
                    if(!(arr[i] <= arr[i+1]))
                        break;
                    bb = i + 1;
                    i++;
                }
                if(arr[aa] != arr[bb])
                    uttor++;
            }
            else if(arr[i] >= arr[i+1])
            {
                int aa = i,bb;
                while(i+1 < n)
                {
                    if(!(arr[i] >= arr[i+1]))
                        break;
                    bb = i + 1;
                    i++;
                }
                if(arr[aa] != arr[bb])
                    uttor++;
            }
        }
        cout << uttor+1 << endl;
    }
    return 0;
}