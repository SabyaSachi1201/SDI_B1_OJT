int unique_element(int a[],int pass[]) //finds all the unique elements in the ascending order.//
{
    int unique[5],size=8;
    unique[0]=a[0];
    int i=1,j=2,k=1;
    while(i<size && j<size)
    {
        if(a[i]<a[j])
        {
            unique[k]=a[j];
            i+=1;
            j+=1;
            k+=1;
        }
        else
        {
            i+=1;
            j+=1;
        }
    }
    print(unique,pass);
}