#include<stdio.h>
int check_prime(int);  
int main()
{    
int n; 
printf("Enter the number to check prime:");    
scanf("%d",&n); 
check_prime(n);  
}


int check_prime(int n)
{ int i,m=0,flag=0;   
m=n/2;    
for(i=2;i<=m;i++)    
{    
    if(n%i==0)    
    {    
    printf("Number is not prime");    
    flag=1;    
    break;    
    }    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
} 
