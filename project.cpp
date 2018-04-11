#include<stdio.h>
main()
{
	FILE *p;
	int a[10],i;
	p=fopen("CPU_BRUST.txt","w");
	if(p==NULL)
	{
		printf("file does not exist");
	}
	{
	
	printf("enter cpu brust");
	scanf("%d",&a);
	if(a>0)
	{
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
    }
    }
    else
    printf("enter positve integers");
}
	fclose(p);
}
