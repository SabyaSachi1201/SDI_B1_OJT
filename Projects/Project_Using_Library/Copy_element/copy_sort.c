int array_sort_init(int a[]) //sorts the input array in ascending order using bubble-sort//
{
    int length=8;
    int i,j,temp;
     for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    for(i=0;i<length;i++)
    {
        if(a[i]!=0)
        printf("%d ",a[i]);
    }
    
    printf("\n");
    count_array(a);
}