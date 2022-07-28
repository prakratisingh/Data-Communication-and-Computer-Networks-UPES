#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Bit Stuffing - It is the process of adding an extra 0 after five 1's so that the receiver does not mistake the pattern 
//               '11111' for a flag.
int main()
{
    int num, count = 0;
    printf("Enter length of bit stream: "); 
    //bit stream: all data shown in the form of binary
    scanf("%d", &num);
    int k = num + (num/5);
    int *arr=(int*)malloc(k*sizeof(int));
    printf("Enter the bit stream: \n"); 
    //Taking the bit stream as input 
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 1)
        {
            count++;    
            //counter variable to count the 1's
        }
        else
        {
            count = 0;
        }
        if (count == 5)  
        //checking if count is equal to 5
        {
            num = num + 1;
            //increasing the size of array by 1 to insert the new bit
            int j = num - 1; 
            while (j > i + 1) 
            //loop from the end of the array till the fifth 1.
            {
                arr[j] = arr[j - 1]; 
                j--;
            }
            arr[j] = 0; 
            //inserting 0 in the place after five 1's
            i++;
            count = 0; 
        }
    }
    printf("Array after stuffing: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d", arr[i]); 
        //printing the stuffed array after bit stuffing
    }
    //Destuffing - The process of removing the 0 after five consecutive 1's in the received signal is called destuffing.
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == 5)
        {
            num = num - 1; 
            //decreasing the array size
            int j = i+1;
            while (j < num)
            {
                arr[j] = arr[j + 1]; 
                j++;
            }
            count = 0;
        }
    }
    printf("\nArray after de-stuffing: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
}
