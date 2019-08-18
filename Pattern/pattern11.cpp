/* 
     1
    123
   12345
  1234567
 123456789
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
                cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

    