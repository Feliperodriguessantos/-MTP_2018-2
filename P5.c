// Felipe Rodrigues Santos 
// 11721EEL002

# include  <stdio.h>

typedef
	sem assinatura  longa  longa  int
Bytes8;
typedef
	struct LCG {Bytes8 a, c, m, rand_max, atual; }
LCG;

vazio  semente (LCG * r, semente Bytes8)
{
	r-> a = 0x5DEECE66DULL ;
	r-> c = 11ULL ;
	r-> m = ( 1ULL << 48 );
	r-> rand_max = r-> m - 1 ;
	r-> atual = semente;
}

Bytes8 lcg_rand (LCG * r)
{
	r-> atual = (r-> a * r-> atual + r-> c )% r-> m ;
	retorno r-> atual ;
}

double  lcg_rand_01 (LCG * r)
{
	return (( double ) lcg_rand (r)) / (r-> rand_max );
}

void  gera_numeros ( flutuante * vetor, int tam, flutuante min, float max, LCG * r)
{
	int i;
	para (i = 0 ; i <tam; i ++)
		vetor [i] = (max-min) * lcg_rand_01 (r) + min;
}

float  soma ( float * inicio_vetor, float * fim_vetor)
{
	if (fim_vetor == inicio_vetor)
		return * inicio_vetor;
	outro
		return * (fim_vetor--) + soma (inicio_vetor, fim_vetor--);
}

float  produto ( float * inicio_vetor, float * fim_vetor)
{
	if (fim_vetor == inicio_vetor)
		return * inicio_vetor;
	outro
		return * (fim_vetor--) * produto (inicio_vetor, fim_vetor--);	
}

int  main ()
{
	LCG aleatório ;	semente (& aleatória , 123456 );
	int opcao, N = 50 ;
	vetor flutuante [ 50 ];
	gera_numeros (vetor, N, 0,5 , 1,5 e aleatório );
	printf ( " 1 - Somatorio \ n 2 - Produtorio \ n \ n " );
	printf ( " Serão gerados 50 numeros aleatórios \ n Opcao: " );
	scanf ( " % d " , & opcao);
	getchar ();
	opcao == 1 ? printf ( " \ n % f " , soma (& vetor [ 0 ], & vetor [ 49 ])): printf ( " \ n % f " , produto (& vetor [ 0 ], & vetor [ 49 ]));
	return  0 ;	
}
