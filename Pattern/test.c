#include<stdio.h>
#include<stdlib.h>
void main()
{
  int t,l;//test case
  int n,m;//comp,cable
  int used,bacha,los=-1;
  scanf("%d",&t);
  while(t>0)
  {
    l=0;//load
    scanf("%d\t%d",&n,&m);
    if(n<=m)
    {
      l++;
      used=n-1;
      bacha=m-used;
      if(bacha==n)
      {
        l++;
        bacha=0;
      }
      if(bacha>0)
      {
        l++;
      }
      if(bacha<0)
      {
        l=-1;
      }
      printf("%d\n",l);
    }
    else
    {
      printf("%d\n",los);
    }
    t--;
  }
}
