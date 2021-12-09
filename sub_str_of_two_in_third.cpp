#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //scanf("%d",&t);
    cin>>t;
    while(t--)
    {
        string s1,s2,x;
        //scanf("%c %c %c", &s1,&s2,&x);
        cin>>s1>>s2>>x;
        string p,q;
        int res=0;
        std::vector<std::string> str,str2;
        //str.push_back(NULL);
        for(int i=0;i<s1.length();i++)
        {
            p.append(s1,i,1);
            //cout<<p<<endl;
            int y=x.find(p);
            //cout<<y<<endl;
            if(y!=-1)
            {
                str.push_back(p);
                //cout<<p<<endl;
            }
        }
        for(int i=0;i<s2.length();i++)
        {
            q.append(s2,i,1);
            //cout<<p<<endl;
            int y=x.find(q);
            //cout<<y<<endl;
            if(y!=-1)
            {
                //cout<<q<<endl;
                str2.push_back(q);
            }
        }
        for(auto& i:str)
        {
            for(auto& j:str2)
            {
                string w=i+j;
                int y=x.find(w);
                if(y!=-1)
                res+=1;
            }
        }
        res=res+str.size()+str2.size()+1;
        /*for(int i=0;i<=s1.length();i++)
        {
            
            p=s1.substr(0,i);
            for(int j=0;j<=s2.length();j++)
            {
                q=s2.substr(0,j);
                string w=p+q;
                int y=x.find(w);
                //cout<<w<<endl;
                if(y!=-1)
                res+=1;
            }
        }*/
        //printf("%d\n",res);
        cout<<res<<endl;
    }
}