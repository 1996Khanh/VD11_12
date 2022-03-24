#include <stdio.h>
main()
{
 char ary[5];
 int i;
 printf("\n Nhap chuoi ky tu :" );
 scanf("%s",ary);
 printf("\n ky tu nhap la %s \n\n", ary);
 for (i=0; i<5; i++)
 printf("\t%d", ary[i]);
}


