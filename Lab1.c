#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float c = 0.5;
float N = 1000,temp;
float ratio, SR ;
for(int i = 0;i<10;i++)
{
    ratio = rand()%(8+1-1)+1;
    temp = (float)(1/ratio);
    SR = (c * temp* N );
    printf("for value r= %f\n",ratio);
    printf("Signal rate: %f bauds\n", SR );
    int BW; double Lvl ; float r; 
    printf("Enter Bandwidth: \n");
    scanf("%d",&BW);
    printf("Enter number of Levels: \n");
    scanf("%lf",&Lvl);
    r = (2*BW* (log2(Lvl)));
    printf("Channel Capacity: %f bps\n", r );   
}
}