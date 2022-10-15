#include<stdio.h>

void disp();
int main()
{
    int a=10,b=-10;
    printf("\n File in Use :%s \n",__FILE__);
    printf("\n Present Line :%d ",__LINE__);
    printf("\n Present Function : %s",__func__);
    disp();
    printf("\n Date is : %s",__DATE__);
    printf("\n Standard C : %d",__STDC__);
}
void disp()
{
    printf("\n Present Function : %s",__FUNCTION__);
    
}