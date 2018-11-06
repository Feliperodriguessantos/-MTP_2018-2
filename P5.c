// Felipe Rodrigues Santos
// Matricula: 11721EEL002

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float *vetor, int tam) {
    int i;
    float num;
    for(i = 0; i < tam; i++){
    vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
    }
}

float soma(float *iv,float *fv){
    if(iv == fv)
        return 0;
    else
        return  *iv + soma(iv+1, fv);
    }

float produto(float *iv,float *fv){
 if(iv == fv)
    return 1;
 else
    return *iv*produto(iv+1, fv);
}


 int main ()
 {
     srand(123456);
     int menu, size=100;
     float *v;
     v = calloc(100, sizeof(float));
     gera_numeros(v,size);
     printf("Calculadora de numeros aleatorios\n"
            "********************************************"
            "\n 1- Somatorio\n 2- Produtorio"
            "\n\nDigite a operacao que deseja realizar: ");
            scanf("%d", &menu);
            getchar();
            switch(menu){
                case 1:
                   printf("O somatorio eh: %f", soma(v,v+size));
                   break;
                case 2:
                    printf("O valor do produtorio eh: %f.", produto(v,v+size));
                    break;
            }
            free(v);
 }
