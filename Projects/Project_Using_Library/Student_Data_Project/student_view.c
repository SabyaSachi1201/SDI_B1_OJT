void view_init(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    int i;
     printf("\nS.no     Name    branch      grade");
    printf("\n______________________________________\n");

    i=0;
    while(i<number)
    {
        printf("\n %d.     %s     %s      %s \n",ar[i],name[i],branch[i],grade[i]);
        i+=1;
    }
}