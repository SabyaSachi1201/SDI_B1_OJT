#include<stdio.h>
void main()
{
    int number;
    int *p;
    number=5;
    p=&number;
    printf("%d %u   \n",*p,p); //so, p==*(&p)
    printf("%d\n",number);
    //++*p; //increments the value stored in number, which is pointed by *p
    *p++; //increments the address position of pointer p by 4. since , the post increment operator has more priority , it executes first, then 
    printf("%d %u   \n",*p,p);
    printf("%d",number);
}