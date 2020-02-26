#include <stdio.h>

int main()
{
    int n,i,num,r,sum=0,fact;
    scanf("%d",&n);
    num=n;
   while(n!=0){
       r=n%10;
       n=n/10;
       fact=1;
       for(i=1;i<=r;i++){
           fact=fact*i;
       }
       sum=sum+fact;
   }
   if(sum==num)
   printf("yes");
   else
   printf("no");
    return 0;
}
