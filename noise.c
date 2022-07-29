#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Compare(int a1[],int a2,int n)
{
    int f=1,i=0;
    for(;i<n;i++)
    {
        if(a1[i]!= a2)
        {
            f = 0;
            break;
        }
    }
    return f;
    if(f==1)
    {
        printf("Data frame contains noise\n");
    }
    else
    {
        printf("Data frame does not contain noise\n");
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int n,noise;
    printf("Enter size of the data frame: \n");
    scanf("%d",&n);
    float Tp=0, Tb=0, Ftime=0,R; 
    int *df = (int*)malloc(n*sizeof(int));
    int *result = (int*)malloc(n*sizeof(int));
    printf("Enter the noise: ");
    scanf("%d",&noise);
    printf("Enter data frame: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&df[i]);
    }
//We will add the noise and dataframe arrays. 
int rem=0;
for(int i=n-1;i>=0;i--)
{
    if(df[i]+noise+rem==2)
    {
        noise=1;
        rem = 0;
    }
    else
    {
        noise=0;
        rem=0;
    }
}
printf("received df : \n");
display(df,n);
Compare(df,noise,n);
noise=1;
return 0;
}