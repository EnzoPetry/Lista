#include <iostream>
#include <string.h>
#include <stdio.h>
int vtr[10];
int tam;
int choice;

void create(int num)
{
	int i;
    for (i = tam; i > 0 && num < vtr[i - 1]; i--)
    {
        vtr[i] = vtr[i - 1];
    }
    vtr[i] = num;
    tam++;
    printf("\ninserido\n\n");
};
void deletar(int num)
{
	int i;
    for (i = tam; i > 0 && num == vtr[i - 1]; i--)
    {
        vtr[i] = vtr[i - 1];
    }
    vtr[i] = num;
    tam++;
    printf("\Removido\n\n");
};
int main()
{
	int num;
	while(1){
	
    printf("Seleciona ai \n1-Create\n2-Read\n3-Update\n4-4: ");
    scanf("%d", &choice);
    switch (choice)
    {	
    case 1:
        printf("\nDigite o num a ser add: ");
        scanf("%d", &num);
        printf("\n");
        create(num);
        break;
    case 2:
        for (int x = 0; x <= tam; x++)
        {
            printf("%d;", vtr[x]);
        }
        printf("\n");
        break;

        break;
    case 3:

        break;
    case 4:
    	printf("\nDigite o num a ser add: ");
        scanf("%d", &num);
        printf("\n");
        deletar(num);
        break;
    }
}
}
