#include<stdio.h>
#define MIN 20
#define MAX 10
int main()
{
    #if MAX
        #if defined MIN
            #if (MAX>0 && MIN>0)
                printf("\n Positive Numbers");
            #else
                printf("\n Negative Numbers");
            #endif
        #else
            printf("\nERROR : MIN NOT DEFINED\n");
        #endif
    #else
        printf("\n ERROR : MAX not Defined\n");
    #endif

}