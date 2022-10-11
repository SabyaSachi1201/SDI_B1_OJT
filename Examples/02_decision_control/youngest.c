#include<stdio.h>
void main()
{
    int Ram,Shyam,Ajay;
    printf("Age of Ram, Shyam, Ajay");
    scanf("%d %d %d",&Ram,&Shyam,&Ajay);
    if(Ram>Shyam && Shyam>Ajay)
    {
        printf("youngest is ajay");
    }
    else if(Shyam>Ram && Ram>Ajay)
    {
        printf("youngest is ajay");
    }
    else if(Ram>Ajay && Ajay>Shyam)
    {
        printf("youngest is shyam");
    }
    else if(Ajay>Ram && Ram>Shyam)
    {
        printf("youngest is shyam");
    }
    else if(Ajay>Shyam && Shyam>Ram)
    {
        printf("youngest is ram");
 
    }
    else if(Shyam>Ajay && Ajay>Ram)
    {
        printf("youngest is ram");
 
    }
}