#include <stdio.h>



int main() {
    int productID;
    char productName[100];
    float productPrice;
    int productSale;
    
    printf("++++++++++++++++++++++++++++++\n");
    printf(" Program Price Sale\n");
    printf("++++++++++++++++++++++++++++++\n");
   
    printf("Product ID: ");
    scanf("%d", &productID);

    printf("Product Name: ");
    scanf("%s", productName);

    printf("Product Price: ");
    scanf("%f", &productPrice);

    
    printf("Product Sale: ");
    scanf("%d", &productSale);
    
    printf("++++++++++++++++++++++++++++++\n");
    
    printf("Product: %s (ID: %d)\n", productName, productID);
    printf("Price: %.2f\n", productPrice);
    printf("Sale: %d\n", productSale);

    printf("++++++++++++++++++++++++++++++\n");

    return 0;
}
