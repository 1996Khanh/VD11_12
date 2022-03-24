 int i,n;
  n = 0;
 int item;
 char x[10][12];
 char temp[12];
 printf("Nhap tung chuoi vao 1 dong rieng \n\n");
 printf("Nhap 'end' khi het \n\n");

 do{
	printf("chuoi %d : ", n+1);
	scanf("%s", x[n]);
    }
while (strcmp(x[n++], "END"));

 n = n-1;
 for(item=0; item<n-1; item++){
 		for(i=item+1; i<n; ++i){
 				if(strcmp (x[item], x[i]) > 0){

 				strcpy(temp, x[item]);
 				strcpy(x[item], x[i]);
 				strcpy(x[i], temp);
 			}
 		}
 	}
 
 printf("danh sach cac chuoi da ghi : \n");
 for(i = 0; i < n ; ++i)
 	{
 		printf("\nString %d is %s", i+1, x[i]);
 	}
}#include<stdio.h>
main ()
 int i,n;
  n = 0;
 int item;
 char x[10][12];
 char temp[12];
 printf("Nhap tung chuoi vao 1 dong rieng \n\n");
 printf("Nhap 'end' khi het \n\n");

 do{
	printf("chuoi %d : ", n+1);
	scanf("%s", x[n]);
    }
while (strcmp(x[n++], "END"));

 n = n-1;
 for(item=0; item<n-1; item++){
 		for(i=item+1; i<n; ++i){
 				if(strcmp (x[item], x[i]) > 0){

 				strcpy(temp, x[item]);
 				strcpy(x[item], x[i]);
 				strcpy(x[i], temp);
 			}
 		}
 	}
 
 printf("danh sach cac chuoi da ghi : \n");
 for(i = 0; i < n ; ++i)
 	{
 		printf("\nString %d is %s", i+1, x[i]);
 	}
}{
 int i,n;
  n = 0;
 int item;
 char x[10][12];
 char temp[12];
 printf("Nhap tung chuoi vao 1 dong rieng \n\n");
 printf("Nhap 'end' khi het \n\n");

 do{
	printf("chuoi %d : ", n+1);
	scanf("%s", x[n]);
    }
while (strcmp(x[n++], "END"));

 n = n-1;
 for(item=0; item<n-1; item++){
 		for(i=item+1; i<n; ++i){
 				if(strcmp (x[item], x[i]) > 0){

 				strcpy(temp, x[item]);
 				strcpy(x[item], x[i]);
 				strcpy(x[i], temp);
 			}
 		}
 	}
 
 printf("danh sach cac chuoi da ghi : \n");
 for(i = 0; i < n ; ++i)
 	{
 		printf("\nString %d is %s", i+1, x[i]);
 	}
}
