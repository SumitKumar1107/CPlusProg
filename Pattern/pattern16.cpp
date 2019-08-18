/*
Qns:
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1 */

#include<iostream>
using namespace std;
int main()
{
    int n,r,rows,s,coeff=1;
    cout<<"Rnter the rows"<<" ";
    cin>>rows;
    for(n=0;n<rows;n++)
    {
       for(s=1;s<=rows-n;s++)
       {
           cout<<" ";
       }
       for(r=0;r<=n;r++)
       {
           if(r==0 || n==0)
           {
               coeff=1;
           }
           else
           {
               coeff=coeff*(n-r+1)/r;
           }
           cout<<coeff<<" ";
       }
       cout<<endl;
    }
    return 0;
}