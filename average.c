int main()
{
	int num[10],i,n,sum=0;
    float avg;
    printf("enter the number of elements:");
    scanf("%d",& n);
    printf("enter %d values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& num[i]);
        sum=sum+num[i];
    }
    avg=sum*1.0/n;
    printf("average=%f",avg);
    return 0;
}
