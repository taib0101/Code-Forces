//In the name of Allah, the entirely merciful,the specially merciful
#include<bits/stdc++.h>
using namespace std;
vector < int > odd, even;

bool check(int *arr)
{
    int os = odd.size()-1;
    int es = even.size()-1;
    for(int i = 0; i < os; ++i)
    {
        if(arr[odd[i]] > arr[odd[i+1]])
            return 0;
    }
    for(int i = 0; i < es; ++i)
    {
        if(arr[even[i]] > arr[even[i+1]])
            return 0;
    }
    return 1;
}

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
        int arr[n+10];
        odd.clear(),even.clear();
        bool bl = 1;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d",&arr[i]);
            if(i != 0)
            {
                if(arr[i-1] > arr[i])
                    bl = 0;
            }
            (arr[i]%2) ? odd.push_back(i):even.push_back(i);
        }
        if(bl != 1)
        {
            if(check(arr))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }
    return 0;
}

////////////////////////
//Solved with OOP
#include<bits/stdc++.h>
using namespace std;

class mainn
{
    public:
        vector < int > odd,even;// member variable
        bool check(int arr[])//member function and inline member function
        {
            int os = odd.size()-1;
            int es = even.size()-1;
            for(int i = 0; i < os; ++i)
            {
                if(arr[odd[i]] > arr[odd[i+1]])
                    return 0;
            }
            for(int i = 0; i < es; ++i)
            {
                if(arr[even[i]] > arr[even[i+1]])
                    return 0;
            }
            return 1;
        }
        void odd_oop()
        {   
            int t;
            cin >> t;
            while(t--)
            {
                    int n;
                    cin >> n;
                    int arr[n+10];
                    odd.clear(),even.clear();
                    bool bl = 1;
                    for(int i = 0; i < n; ++i)
                    {
                        scanf("%d",&arr[i]);
                        if(i != 0)
                        {
                            if(arr[i-1] > arr[i])
                                bl = 0;
                        }
                        (arr[i]%2) ? odd.push_back(i):even.push_back(i);
                    }
                    if(bl != 1)
                    {
                        if(check(arr))
                            cout << "Yes" << endl;
                        else
                            cout << "No" << endl;
                    }
                    else
                        cout << "Yes" << endl;
            }
        }
};
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    mainn cls;
    cls.odd_oop();
    return 0;
}
