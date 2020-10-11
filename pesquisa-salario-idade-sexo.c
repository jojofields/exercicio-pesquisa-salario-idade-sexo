#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    int entrevistados, i, idade, acum_idade, M, F;
    float salario, m_salario;
    char sexo;

    printf("Informe quantos serao entrevistados: ");
    scanf(" %d", &entrevistados);
    M=0;
    F=0;
    acum_idade=0;
    m_salario=0;

    for(i=1;i<=entrevistados;i++){
        printf("\nEntrevistado %d ",i);
        printf("\nInforme sua idade: ");
        scanf(" %d", &idade);
        acum_idade=acum_idade+idade;

        printf("Informe seu ganho salarial: ");
        scanf(" %f", &salario);
        if(salario>m_salario){
            m_salario=salario;
        }

        printf("Informe seu sexo: ");
        scanf(" %c", &sexo);
        if (sexo=='F'|| sexo=='f'){
            F++;
        }
        if (sexo=='M' || sexo=='m'){
            M++;
        }
    }
    idade=0;

    idade=acum_idade/entrevistados;

    printf("\n\n\nMedia de idades: %d\nMaior salario: %.2f", idade, m_salario);
    printf("\nQuantidade de mulheres entrevistadas: %d\nQuantidade de homens entrevitados: %d \n\n", F, M);

    return 0;
}
