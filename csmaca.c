#include<stdio.h>   
#include<stdlib.h>  
#include<math.h>  
#include<time.h>  
int n=5, df[]={1,1,0,0,1};
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
float cal(float ifs)
{
    int noise;
    int *df = (int*)malloc(n*sizeof(int));
    int *recdf = (int*)malloc(n*sizeof(int)); 
    float Tp=0.00012, Tb=0, Ftime=0,R,tSlot=0.000009;
    int k=0,kMax = 15,id=1;
    while(k<kMax)
       { 
        if(id==0)
        {
            continue;
        }
        R= pow(2,k)-1;
        Tb = R*Tp;
        Ftime = Ftime + (2*Tp)+ifs;
        //acknowledgement
        int ack=0;
        if(ack==1)
        {
            printf("\nAcknowledgement received!");
        }
        else
        {
            k=k+1;
        }
    
       }
            return Ftime;
}
int main()
{
    // printf("Enter the Propagation time : ");
    // scanf("%f",&Tp);
    float DIFS = 0.000034, SIFS = 0.000016,FTime;
    float time1=0.0,time2=0.0;
    time1=cal(DIFS);
    printf("\nDifs time: %f",time1);
    time2=cal(SIFS);
    printf("\nSifs time: %f",time2);
    FTime= time1+time2;
    printf("\nTotal time: %f",FTime);
    return 0;
}