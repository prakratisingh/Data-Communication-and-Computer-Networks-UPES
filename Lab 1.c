#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float c ; float N; int r ; float S;
    printf("Enter case factor: \n");
    scanf("%f",&c);
    printf("Enter data rate: \n");
    scanf("%f",&N);
    printf("Enter signal element: \n");
    scanf("%d",&r);
    S = (c * N * (1/r));
    printf("Signal rate: %f bauds\n", S );
}