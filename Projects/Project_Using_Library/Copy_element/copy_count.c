int count_array(int a[]) //counts the number of times elements are occuring in the array and stores the values in another array//
{
    int counter[]={0,0,0,0,0,0,0,0,0,0};
    counter[0]=1; //sets the first element of the array to 1, to start the counting.//
    int pass[5];
    int i=0,j=1,k=0,n=0,length=8;
    while(i<length && j<length)
    {
        if(a[i]==a[j])
        {
            counter[k]++;
            i++;
            j++;
        }
        else
        {
            k++;
            counter[k]+=1;
            i++;
            j++;
        }
    }
    int size=sizeof(counter)/4;
    for(i=0;i<size;i++)
    {
        if(counter[i]!=0)
        {
            pass[n]=counter[i];
            n++;
        }
    }
    unique_element(a,pass);
}