#include<stdio.h>
int strleng(char[30]);
int strcmpr(char[30],char[30]);
void strconcat(char[30],char[30]);
void main()
{
    int a,b;
    char array[30]="SABYASACHI DATTA";
    char array1[30]="SABYASACHI DATTA";

    a=strleng(array);
    printf("string length is %d\n",a);
    b=strcmpr(array,array1);
    printf("%d\n",b);
    if(b==0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Not same");
    }
    strconcat(array,array1);

}
int strleng(char array[30])
{
    int i=0;
    int count=0;
    while(array[i]!='\0')
    {
        count+=1;
        i++;
    }
    return count;
}
int strcmpr(char array[30],char array1[30])
{
    int count=0;
    int count1=16;
    for(int i=0;i<16;i++)
    {
        if(array[i]==array1[i])
        {
            count+=1;
        }
    }
    if(count==count1)
    {
        return 0;
    }
    else if(count<count1)
    {
        return -1;
    }
}
void strconcat(char array[30],char array1[30])
{
    int i,j;
    char val[100];
    for(i=0;i<16;i++)
    {
        val[i]=array[i];
    }
    for(j=0;j<16;j++)
    {
        val[j+i]=array1[j];
    }
    printf("String after concatenation is %s ",val);
}
