/*P7.c*/
/*Felipe Rodrigues Santos*/
/*11721EEL002*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
    struct ponto{double x,y;}
ponto;

ponto * gerar_pontos(int N) {
    ponto * coord = (ponto *) calloc(N,sizeof(ponto));
    int i;
    for(i = 0; i < N; i++){
        coord[i].x = cos(i*2.0*M_PI/(N-1));
        coord[i].y = sin(i*2.0*M_PI/(N-1));
    }
    return coord;
}

void generate(ponto*coord, int N){
	int i=0;
	FILE *arquivo;
	arquivo = fopen("pontos.dat","w");
	for(i; i<N; i++)
	fprintf(arquivo, "x: %.3lf, y: %.3lf\n", coord[i].x, coord[i].y );
	fprintf(arquivo,"\n");
	fclose(arquivo);
}

void show(){
	char c;
	FILE*arquivo;
	arquivo=fopen("pontos.dat", "r");
	do{
    c = getc(arquivo);
    printf("%c" , c);    
}while (c != EOF);
}

void menu( )
{
	int n,i,saida;
	printf("\33[2J");
	printf("\tMENU\n\n");
    printf("\t1. NOT\n");
    printf("\t2. AND\n");
    printf("\t3. Sair\n");
    
	do
	{
		inicio:
		printf ("\nDigite sua opcao: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				
				break;
			
			case 2:	
				
				break;
				
			case 3:
				printf("Obrigado!");
				saida = 0;
				break;
			
			default: 
				goto inicio;	
		}
	}while(saida!=0);
}

int main(){
	int n,i,saida;
	unsigned int N;
	ponto *coordenadas;
	printf("\tMENU\n\n");
    printf("\t1. Gerar e salvar pontos\n");
    printf("\t2. Mostrar pontos\n");
    printf("\t3. Sair\n");
    
	do
	{
		inicio:
		printf ("\nDigite sua opcao: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			    printf("Digite o número de pontos: ");
			    scanf("%u", &N); getchar();
			    coordenadas = gerar_pontos(N);
			    generate(coordenadas, N);
			    printf("\nArquivo gravado com sucesso!\n");
			    saida=1;
				break;
			
			case 2:	
				show();
				saida=2;
				break;
				
			case 3:
				printf("Obrigado!");
				saida = 0;
				break;
			
			default: 
				goto inicio;	
		}
	}while(saida!=0);
    free(coordenadas);
    return 0;
}

