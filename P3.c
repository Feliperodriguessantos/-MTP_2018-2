//Felipe Rodrigues Santos
// 11721EEL002

#include<stdio.h>

int main()
{
	int i=0, j=0 ;
	char vet[256], vet2[48];
	
	printf("\ndigite os numeros: \n");
	scanf("%s", vet);
	
	while (vet[i]!='\0') 
	{
		if(vet[i]>='0')
		{
			if(vet[i]<='9')
			{
				vet2[j]=vet[i];
				j++;
			}
		}
		i++;
	}
	printf("\n%s", vet2);
	
	return 0;
}
