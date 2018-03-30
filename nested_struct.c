nclude <stdlib.h>
#include <stdio.h>

typedef struct
{
	char first_name[20];
	char last_name[20];
	int ID;
	int phone_num;
}CLIENT;

typedef struct
{
	char name[20];
	short ID;
	float price_uni;
}PRODUCT;

typedef struct
{
	short quant;
	int order_num;
	CLIENT client;
	PRODUCT product;
}Order;

int main(void)
{
	Order order1;
	printf("\nEnter the order number: ");
	scanf(" %d", &order1.order_num);
	printf("\nEnter the client ID: ");
	scanf(" %d", &order1.client.ID);
	printf("\nEnter the client name and surname: ");
	scanf(" %s %s", &order1.client.first_name, &order1.client.last_name);
	printf("\nEnter the client phone number: ");
	scanf(" %d", &order1.client.phone_num);
	printf("\nEnter the product ID: ");
	scanf(" %hd", &order1.product.ID);
	printf("\nEnter the product name, price and quantity: ");
	scanf(" %s %f %hd", &order1.product.name, &order1.product.price_uni, &order1.quant);

	printf("\n##########INFO##########");
	printf("\nOrder nº: %d\nClient: %s %s\nProduct: %s\nPrice: %0.2f $\n", order1.order_num, order1.client.first_name, order1.client.last_name, order1.product.name, order1.product.price_uni * order1.quant);
	return 0;
}
