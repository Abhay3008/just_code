#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int flag=0,arr[n],i,num,total=n;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
   scanf("%d",&num);
    n=n/2;
     
   while(flag!=1){
        if(arr[n]==num)
        flag=1;
        else if(num<arr[n])
        n=n-((total-n)/2);
        else
        n=n+((total-n)/2);
   }
printf("%d",n);
    return 0;
}
