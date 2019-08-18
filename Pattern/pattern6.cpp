/* 
Qns:
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
        k=1;
        while(k!=i)
        {
            cout<<" ";
            k++;
        }
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
