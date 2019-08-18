/*
Qns:
      1
     202
    30003
   4000004
  500000005
  */
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s;
    cout<<"Enter the n"<<" ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       for(s=1;s<=n-i;s++)
       {
           cout<<" ";
       }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==(2*i-1))
            {
                cout<<i;  
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}

    