#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,cnt=0;
    cin>>n;
    str nur;
    cin>>nur;
    for(int i=0;i<nur.size();i++)
    {
        if(nur[i]=='A')
        {
            count++;
        }
        else if(nur[i=='D'])
        {
            cnt++;
        }
    }
    if(count>cnt)
    {
        cout<<"Anton"<<nl;
    }
    else if(cnt>count)
    {
        cout<<"Danik"<<nl;
    }
    else
        cout<<"Friendship";


}