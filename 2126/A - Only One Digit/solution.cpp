#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mn=INT_MAX;
        while(!n<1)
        {
            if(n%10<mn)
            {
                mn=n%10;
            }
            n/=10;
        }
 
        cout<<mn<<endl;
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 