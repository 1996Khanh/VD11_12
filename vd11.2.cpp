#include<stdio.h>

main()
{
	int num[10];
	int i, total, high;
	
	for(i=0;i<10;i++)
	{
		printf("\nGia tri nhap vao %d : ", i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)	
	{
		printf("\nGia tri vua nhap vao %d ",num[i]);
	}
	high = num[0];
	for(i=1;i<10;i++)
	{
		if(num[i]>high)
		high=num[i];
	}
	printf("\nSo lon nhat trong mang la %d",high);
	total=num[0];
	for(i=1;i<10;i++)
	total+=num[i];
	printf("\nTong cua mang la %d", total);
}
