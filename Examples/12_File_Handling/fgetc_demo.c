#include <stdio.h>
int main ()
{
	FILE *fp = fopen("fgetc_demo.txt","r");
	if (fp == NULL)
    {
        printf("\nFile not found\n");
	    return 0;
    }
    else
    {
        printf("\nFile found successfully\n");
	do
	{
		char c = fgetc(fp);
		if (feof(fp))
			break ;
		printf("%c\n", c);
	} while(1);
    {
	    fclose(fp);
	    return(0);
    }
}
}
