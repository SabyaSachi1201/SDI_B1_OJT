void locate(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    char command[10];
    int set[10],k=0;
    int i;
    int val;
    printf("\nEnter 'brilliant' to find students with O GRADE.\nEnter 'excellent' to find students with E GRADE.\nEnter 'good' to find students with A GRADE.\nEnter 'fail' to find students with F GRADE.\n");
    scanf("%s",command);
    for(i=0;i<number;i++)
    {
        val=strcmp(grade[i],command); //returns 0 if strings are same
       if(val==0)
       {
            set[k]=i;
            k++;
       }
    }
    for(int j=0;j<k;j++)
    {
        printf("%s\t",name[set[j]]);
    }
}