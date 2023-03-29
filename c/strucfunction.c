#include<stdio.h>

struct productData{

char productName[50];
int productQty;
int productPrice;

};

productTotal(int q, int r)
{
return q * r;
}

int main()
{
struct productData p1;
FILE *productinfo;
int total;

printf("Product Name : \n");
scanf("%s",&p1.productName);

printf("Qty  :\n");
scanf("%d",&p1.productQty);

printf("Rate : \n");
scanf("%d",&p1.productPrice);



total = productTotal(p1.productQty,p1.productPrice);

productinfo = fopen("productmaster.txt","w");
fprintf(productinfo,"%s",p1.productName);
fprintf(productinfo,"%d",total);
fclose(productinfo);

printf("Product added into TextFile..!");

// printf("Total bill %d",productTotal(p1.productQty,p1.productPrice));

return 0;
}


