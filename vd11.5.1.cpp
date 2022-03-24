#include<stdio.h>
main()
{
	int arr[2][3];
    int	hang, cot;
    	for(hang=0;hang<2;hang++)
    	{
    		for(cot=0;cot<3;cot++)
    		{
       			printf("\nGia tri nhap vao [%d][%d]",hang,cot);
       			scanf("%d",&arr[hang][cot]);
       	    } 
    	}
    	for(hang=0;hang<2;hang++)
    	{
    		for(cot=0;cot<3;cot++)
    		printf("\nGia cua [%d][%d] la %d",hang,cot,arr[hang][cot]);
        }
}
