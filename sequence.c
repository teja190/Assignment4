#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("please enter size of seq:");
    scanf("%d",&n);
    int sum=(n*(n+1))/2;
    int arr[sum];
    int a[sum];
    int k=0;
    int count=0;
    printf("enter num:");
    for(i=0;i<sum;i++)
    
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          arr[k]=i;
          k+=1;
        }
    }
    for(i=0;i<sum;i++)
    {
       
       printf("%d ",a[i]);
    }
    
    for(i=0;i<sum;i++)
    {
        if (arr[i]==a[i])
        {
            count+=1;
        }
        else
        {
            break;
        }
    }
    
   if (count==sum)
   {
       printf("is Valid");
    }
   else
   {
       printf("is Not valid");
    }
   return 0;
}
