#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
 
    int n,x;
    cin>>n>>x;
 
    vector<int>v;
 
 
    for(int i=0; i<n; i++)
    {
        if(n==x)
        {
            v.push_back(i);
        }
 
        else if(i==x)
        {
            continue;
        }else{
        v.push_back(i);
 
        }
 
    }
 
    if(n!=x)v.push_back(x);
 
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
return 0;
}
 