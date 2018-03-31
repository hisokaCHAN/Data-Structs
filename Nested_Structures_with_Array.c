#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

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
	short quantity;
	float price;
}PRODUCT;

struct order
{
	short ID;
	CLIENT client;
	PRODUCT product;
};

int main(void)
{
	int n;
	short ID_order = 100;
	printf("\nInsert the number of orders: ");
 	scanf(" %d",&n);
	struct order *ptr_order[n];
	for (int i = 0; i!=n; i++)
	{
		ptr_order[i] = (struct order *)malloc(sizeof(struct order));
		printf("\nInsert the first and last name of the client for the order nº %d: ", i+1);
		scanf(" %s %s", &ptr_order[i]->client.first_name,&ptr_order[i]->client.last_name);
		printf("\nInsert the client ID: ");
		scanf(" %d", &ptr_order[i]->client.ID);
		printf("\nInsert the client phone number: ");
		scanf(" %d", &ptr_order[i]->client.phone_num);
		printf("\nInsert the name of the product: ");	
		scanf(" %s", &ptr_order[i]->product.name);
		printf("\nInsert how many: ");
		scanf(" %hd", &ptr_order[i]->product.quantity);
		printf("\nPrice: ");
		scanf(" %f", &ptr_order[i]->product.price);
		ptr_order[i]->ID = ID_order;
		ID_order++;	
	}

	for (int i = 0; i!=n; i++)
	{
		printf("\nOrder nº: %d\nClient: %s %s\nProduct: %d x %s\nPrice: %0.2f$\n", ptr_order[i]->ID, ptr_order[i]->client.first_name, ptr_order[i]->client.last_name, ptr_order[i]->product.quantity, ptr_order[i]->product.name, ptr_order[i]->product.price * ptr_order[i]->product.quantity);
	}
	return 0;
}
