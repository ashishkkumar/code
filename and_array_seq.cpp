#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=32;
    
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        //cin>>a;
        if(a==1)
        cout<<1<<endl;
        else{int x=log2(a);
        int y=pow(2,x);
        int res= y/2;
        //cout<<x<<y<<res<<endl;
        if(y==a)
        {
            cout<<res<<endl;
        }
        else{
            y=a-y-res+1;
        res+=y;
        cout<<res<<endl;
        }
        }
    }
}