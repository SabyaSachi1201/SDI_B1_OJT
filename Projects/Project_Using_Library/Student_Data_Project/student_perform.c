void performance(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    int i,count_0=0,count_1=0;
    char string1[]="good";
    char string2[]="brilliant";
    char string3[]="excellent";
    char string4[]="fail";
    int val,val1,val2,val3;
    for(i=0;i<number;i++)
    {
        val=strcmp(grade[i],string1);//good
        val1=strcmp(grade[i],string2);//brilliant
        val2=strcmp(grade[i],string3);//excellent
        val3=strcmp(grade[i],string4);//fail
        if(val==0 || val1==0 || val2==0)
        {
            count_0+=1;
        }
        else
        {
            count_1+=1;
        }
    }
   if(count_0>count_1)
   {
    printf("\nOverall Good Class Performance\n");
   }
    else if(count_0<count_1)
   {
    printf("\nOverall Bad Class Performance\n");
   }
    else
   {
    printf("\nOverall Average Class Performance\n");
   }
}