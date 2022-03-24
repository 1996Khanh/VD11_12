#include<stdio.h>
main ()
{
 int i, n = 0;
 int item;
 char x[10][12];
 char temp[12];
 printf("Nhap tung chuoi vao 1 dong rieng \n\n");
 printf("Nhap 'end' khi het \n\n");
 /* Doc danh sach cac chuoi */
 do
 	{
 		printf("chuoi %d : ", n+1);
 		scanf("%s", x[n]);
    }
while (strcmp(x[n++], "END"));
 /*sap xep lai danh sach cac chuoi */
 n = n – 1;
 for(item=0; item<n-1; ++item)
 	{
 /* tim thap nhat trong cac chuoi con lai */
 		for(i=item+1; i<n; ++i)
 		{
 				if(strcmp (x[item], x[i]) > 0)
 			{
 /*hoan doi 2 ve */
 				strcpy(temp, x[item]);
 				strcpy(x[item], x[i]);
 				strcpy(x[i], temp);
 			}
 		}
 	}
  /* hien thi danh sach cac chuoi */ 
 printf("danh sach cac chuoi da ghi : \n");
 for(i = 0; i < n ; ++i)
 	{
 		printf(“\nString %d is %s”, i+1, x[i]);
 	}
}
