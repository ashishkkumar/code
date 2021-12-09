#include<iostream>
using namespace std;

int main() {
    int n=32;
    //cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        //cin>>a;
        int z=1;
        int max=1;
        int x=1,y=2;
        while(y<=a)
        {
            z=x;
            int i=x+1;
            for(i=x+1;i<=y;i++)
            {
              z= z&i; 
            }
            if(z>0 && z>max)
                {
                    max=i-x;
                
                }
            else if(z<=0)
            {
                x++;
            } 
            y++;
        }
        cout<<i+1<<"\t"<<max<<endl;
    }
	return 0;
}
