#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int range = num;
	int spaces = num * 2 ; // for spaces 
	int i,count=0,val=1,val_range=1;
	while(range>0)
	{
		for(i=0;i<spaces;i++)
		{
			printf("  ");
		}
		spaces = spaces - 2 ;
		if(count == 0)
		{
			for(i=val_range;i<(num+val_range);i++)
			{
				printf("%d ",i);
				val += 1 ;
			}
			count = 1 ;
			val_range = val-1;
		}

		// printf("%d\n",val );

		else
		{
			// printf("In else");
		// printf("val_range+num %d",val_range+num);
			for(i=(val_range+num);i>(val_range);i--)
			{
				printf("%d ",i);
			}
			val = val+ num;
			val_range = val ;
			count = 0;
			// break;
		}
		printf("\n");
		range = range - 1 ;

	}


}
