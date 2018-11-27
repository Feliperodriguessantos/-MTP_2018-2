// Felipe Rodrigues Santos
// Matricula: 11721EEL002

#include < stdio.h>
#include  < math.h >
#include  < stdlib.h >

typedef  struct {
	float x, y;
} Ponto;

Ponto * gera ( int N)
{
	Ponto * p = (Ponto *) calloc (N, tamanho de (Ponto));
	int i;
	para (i = 0 ; i <N; i ++)
	{
		p [i]. x = cos (i * 2,0 * M_PI / (N - 1 ));
		p [i]. y = sin (i * 2,0 * M_PI / (N- 1 ));
	}
	return p;
}

void  mostrar_pontos (Ponto * p_inicial, Ponto * p_final)
{
	if (p_inicial <p_final)
	{
		printf ( " ( % .3lf , % .3lf ) " , p_inicial -> x, p_inicial -> y);
		show_pontos (p_inicial + 1 , p_final);
	}
}

int  main ()
{
	não assinado  int N;
	Ponto * p;
	printf ( " Quem pontos deseja? " );
	scanf ( " % u " , & N);	getchar ();
	p = gera (N);
	show_pontos (p, p + N);
	livre (p);
}
