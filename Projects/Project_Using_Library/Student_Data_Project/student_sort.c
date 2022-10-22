void sort(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    char stream[10];
    int set[10],k=0;
    int i;
    int val;
    printf("\nEnter 'eee' to find students from EEE.\nEnter 'eie' to find students from EIE.\nEnter 'ece' to find students from ECE.\nEnter 'cse' to find students from CSE.\n");
    scanf("%s",stream);
    for(i=0;i<number;i++)
    {
        val=strcmp(branch[i],stream); //returns 0 if strings are same
       if(val==0)
       {
            set[k]=i;
            k++;
       }
    }
    for(int j=0;j<k;j++)
    {
        printf("%s  %s  %s\n",name[set[j]],grade[set[j]],branch[set[j]]);
    }
}