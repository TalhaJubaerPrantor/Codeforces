#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n,k;
        cin>>n>>k;
 
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
 
        int cnt=0,peak=0;
 
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(cnt==k)
            {
                cnt=0;
                peak++;
                i++;
            }
        }
        cout<<peak<<endl;
    }
    return 0;
}