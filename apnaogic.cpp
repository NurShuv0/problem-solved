#include<iostream>
using namespace std;
int main ()
{

    int x;
    int a;
    cout<<"Enter your index number : "<<endl;
    cin>>x;
    cout<<"Enter your number :"<<endl;
    int c;

    cin>>c;

    int arr[x];
    int i;
    for (i=0; i<x; i++)
    {

        cin>>arr[i];
        if (arr[i]==c)
        {
            cout <<"The number is Valid\n  ";
            a=5;
  break;
        }


    }
    for (i=0; i<x; i++)
    {

        if (a==5)
        {
            cout<<" ";
        }

        else if (arr[i]!=c)
        {
            cout <<"The number is not Valid\n  ";
            break;
        }
    }







            return 0;
        }
