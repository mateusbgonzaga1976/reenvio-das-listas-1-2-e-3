#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (void )
{
  int valor;

  printf("Escolha uma opcao: \n");
  printf("0 para encerrar o programa; \n");
  printf("1 para calcular se o numero eh par; \n");
  printf("2 para calcular a potenciacao; \n");
  printf("3 para calcular a raiz quadrada; \n");
  printf("4 para calcular se o ano eh bissexto; \n");
  printf("5 para calcular a media ponderada; \n");
  printf("6 para calcular a media; \n");
  printf("7 para calcular o fatorial; \n");
  printf("8 para calcular se um numero eh primo; \n");
  printf("9 para calcular a sequencia de Fibonacci; \n");
  printf("10 para mostrar o nome e a matricula do aluno.\n");
  scanf("%d", &valor);



    switch ( valor ){
        while (valor != 0){
    case 0 :
        printf("Obrigado pela visita.");
    break;
    case 1:{
            int n, r;
            printf("Digite o valor da variavel n: ");
            scanf("%d", &n);
            r = n % 2;
            if (r == 0){
                printf("O valor eh par.\n");
            }
            else{
                printf("O valor eh impar.\n");
            }
            break;
        }
    case 2:{
            int B;
            float A, resultado;
            printf("Digite o valor da base:\n");
            scanf("%f", &A);
            printf("Digite o valor do indice:\n");
            scanf("%d", &B);
            resultado = pow(A, B);
            printf("O resultado eh: %*1.7e10\n", resultado);
            break;
           }
    case 3:{
            int B;
            float A, resultado;

            printf("Digite o valor da base:\n");
            scanf("%d", &B);
            printf("Digite o valor do indice:\n");
            scanf("%f", &A);
            resultado = sqrt(B);
            printf("O resultado eh: %*1.7e10\n", resultado);
            }
            break;

    case 4:{
            int ano, anoBissexto;

            printf("Digite o ano a ser consultado: ");
            scanf("%d", &ano);

            anoBissexto =  ano % 2;

            if (anoBissexto == 0){
                printf("%d eh um Ano Bissexto\n", ano);
            }
            else{
                printf("%d nao eh um Ano Bissexto\n", ano);
            }
            }
            break;

    case 5:{
            float n1, n2, n3, p1, p2, media;

            p1 = 1.0;
            p2 = 2.0;

            printf("Digite a primeira nota: ");
            scanf("%f", &n1);

            printf("Digite a segunda nota: ");
            scanf("%f", &n2);

            printf("Digite a terceira nota: ");
            scanf("%f", &n3);

            media = ((n1*p1) + (n2*p1) + (n3*p2))/(p1+p2);

            printf("media = %.2f\n\n", media);

            if (media >= 6.0){
                printf("O aluno foi aprovado com media:%.2f\n ", media);
            }
            }
            break;

    case 6:{

            float n1, n2, media;

            printf("Digite a primeira nota do aluno: ");
            scanf("%f", &n1);

            printf("Digite a segunda nota do aluno: ");
            scanf("%f", &n2);

            if (n1 < 0.0 || n1 > 10.0){
                printf("A nota n1 %.2f, nao e valida.\n", n1);
            }
            if (n2 < 0.0 || n2 > 10.0){
                printf("A nota n2 %.2f, nao e valida.\n", n2);
            }
            else{
                if (n1 >= 0.0 && n1 <= 10.0 ){
                    if (n2 >= 0.0 && n2 <= 10.0 ){
                    media = (n1 + n2)/2;
                    printf("media = %.2f\n", media);
                    }
                }
                }
            }
            break;

    case 7:{
            int fat, n;

            printf("Digite o valor a ser calculado: ");
            scanf("%d", &n);
            for (fat = 1; n > 1; n--){
                fat = fat * n;
            }
            printf("n! = %d\n", fat);
            }
            break;

    case 8:{
            int i, x;
            int div = 0;

            do{
                printf("Digite um numero inteiro e positivo para saber se e primo: ");
                scanf("%d", &x);
                if (x <= 0) printf("Numero invalido.\n");
            }while (x <= 0);

            for(i = 2; i < x; i++){
            if (x % i == 0){
                div++;
            break;
            }
            }

            if (div == 0){
                printf("O numero %d e primo!\n", x);
            }
            else{
                printf("O numero %d nao e primo!\n", x);
            }
            }
            break;

    case 9:{
            int a = 0, b = 1, t = 0, limite = 0;

            printf("Digite o numero a ser calcualdo: ");
            scanf("%d", &limite);

            while (b <= limite) {
                printf("%d\n", b);
                t = a;
                a = b;
                b = t + b;
            }
            }
            break;

    case 10:{
            printf("Mateus Gonzaga;\n");
            int matricula = 1920027391;
            printf ("matricula %2X\n",matricula,matricula);
            }
            break;

    default :
        printf ("Opcao inexistente!\n");
  }


}
    return 0;
}


