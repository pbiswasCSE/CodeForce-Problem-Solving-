
#include <stdio.h>

int main()
{
    int i, max, min, size,a=0,b=0;
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            a=i;
        }
       
    }
   for (int j = 0; j < a; j++)
   {
    int temp=arr[a-j-1];
    arr[a-j-1]=arr[a-j];
    arr[a-j]=temp;
   } for(i=1; i<size; i++)
    {
        
        if(arr[i] <= min)
        {
            min = arr[i];
            b=i;
        }
    }
   printf("%d",a+(size-b-1));
    return 0;
}