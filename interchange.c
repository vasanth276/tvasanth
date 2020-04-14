#include <stdio.h>

int main()
{
	int arr[10],n,great,great_pos,least,least_pos,i;
    printf("enter the number of elements in the array");
    scanf("%d",& n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",& arr[i]);
    }
    great=arr[0];
    great_pos=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>great)
        {
            great=arr[i];
            great_pos=i;
        }
    }
    printf("the greatest number in the array is:%d\n",great);
    printf("the greatest number position is:%d\n",great_pos);
    least=arr[0];
    least_pos=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<least)
        {
            least=arr[i];
            least_pos=i;
        }
    }
    printf("the least number in the array is:%d\n",least);
    printf("the least number position is:%d\n",least_pos);
    arr[least_pos]=great;
    arr[great_pos]=least;
    printf("the array after interchange \n");
    for(i=0;i<n;i++)
    {
    printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
