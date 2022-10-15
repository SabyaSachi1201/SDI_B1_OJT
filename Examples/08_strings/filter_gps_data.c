#include<stdio.h>
#include<string.h>
void filter_data(char[100]); 
void main()
{
    char arr[100]="$GPRMC,203522.00,A,5109.0262308,N,11401.8407342,W,0.004,133.4,130522,0.0,E,D*2B";
    filter_data(arr);
}
void filter_data(char arr[100])
{
    char lat[50],lon[50];
    for(int i=19;i<=30;i++)
    {
        lat[i-19]=arr[i];
    }
    for(int j=34;j<=46;j++)
    {
        lon[j-34]=arr[j];
    }
    printf("\nThe latitude is : ");
    //printf("%s\n",lat);

    for(int i=0;i<12;i++)
    {
        printf("%c",lat[i]);
    }
    printf("\nThe longitude is : ");
    //printf("%s\n",lon);

    for(int i=0;i<13;i++)
    {
        printf("%c",lon[i]);
    }


}