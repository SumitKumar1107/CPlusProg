/*
Qns:
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
     */
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s,k;
    cout<<"Enter the n"<<" ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       for(s=1;s<=(n-i);s++)
       {
           cout<<" ";
       }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        k=0;
        while(k!=(n-i))
        {
            cout<<" ";
            k++;
        }
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
