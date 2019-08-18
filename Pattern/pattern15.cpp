/*
    0
   909
  89098
 7890987
 ---
 
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
        for(j=1;j<=n;j++)
        {
            if(j>n-i)
            {
                cout<<j%10;  
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1;j<i;j++)
        {
            cout<<n-j;
        }
        cout<<endl;
    }
    return 0;
}
