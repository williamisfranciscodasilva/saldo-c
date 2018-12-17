#include <conio.h>
#include <stdio.h>
main()
{
	float saldo_cliente, cheque;
	
	saldo_cliente = 500;
	printf("Saldo do cliente: %f",saldo_cliente);
	
	printf("\nDigite o valor do cheque: ");
	scanf("%f",&cheque);
	
	saldo_cliente = saldo_cliente + cheque;
	
	printf("Saldo do cliente: %f",saldo_cliente);
	getch();
}
