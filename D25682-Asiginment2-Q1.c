#include<stdio.h>
#include<stdlib.h>
int main()
{
    //------------------------linear search with malloc---------------------------
    int n,k,i,found=0;
    int *arr=(int*) malloc(n*sizeof(int));

    printf("enter the number:");
    scanf("%d",&n);

    printf("enter the array element:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("entr the key element:");
    scanf("%d",&k);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d found at %d position\n",k,i+1);
           return 0;
        }
    }
  
    printf("%d not found\n",k);


    return 0;
}