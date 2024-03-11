# att

# 1
    #include <stdio.h>

int main() {
    char nome[20];
    
    printf("Digite o nome: ");
    scanf("%s", nome); 
    
    printf("Nome digitado: %s\n", nome);

    return 0;
}


# 2
    #include <stdio.h>

int main()

{
    int Nome, nome, NoMe, noME;
    printf("vamos verificar o case sensive, digite um valor para Nome");
        scanf("%d", &Nome);
    printf("digite um valor para nome");
        scanf("%d", &nome);
    printf("digite um valor para NoMe");
        scanf("%d", &NoMe);
    printf("digite um valor para noME");
        scanf("%d", &noME);
        
    printf("%d %d %d %d", Nome, nome, NoMe, noME);
}

# 3
    #include <stdio.h>

int main() {
    float numero1, numero2, media;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    
    media = (numero1 + numero2) / 2;
    
    printf("A média dos valores é: %f\n", media);
    
    return 0;
}

# 4


#include <stdio.h>

int main() {
    float numero1, numero2, res;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    
    res = (numero1 / numero2) ;
    
    printf("o resto do valore é: %f\n", res );
    
    return 0;
}

# 5

#include <stdio.h>

int main() {
    float numero1, numero2, numero3;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &numero3);
    
    if((numero1 < numero2 && numero1 < numero3) || (numero1 == numero2 && numero1 < numero3) || (numero1 == numero3 && numero1 < numero2))
        printf("O menor valor é: %.2f\n", numero1);
    else if((numero2 < numero1 && numero2 < numero3) || (numero2 == numero3 && numero2 < numero1))
        printf("O menor valor é: %.2f\n", numero2);
    else
        printf("O menor valor é: %.2f\n", numero3);

    return 0;
}

# 6 #include <stdio.h>

int main() {
    int numero;

    printf("Digite um número ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é um número par.\n", numero);
    } else {
        printf("%d é um número ímpar.\n", numero);
    }
    return 0;
}

# 7 
#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite um número ");
    scanf("%d", &numero1);
    
    
    printf("Digite um número ");
    scanf("%d", &numero2);

    if(numero1 < numero2)
        printf("O maior valor é: %d\n", numero2);
    
    else{
        printf("O maior valor é: %d\n", numero1);
        
    }
    
    return 0;
}

# 8

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite um número ");
    scanf("%d", &numero1);
    
    
    printf("Digite um número ");
    scanf("%d", &numero2);

    if(numero1 < numero2)
        printf("O maior valor é: %d\n", numero2);
        
    else if (numero2 == numero1)
                printf("iguais");
                
    else{
        printf("O maior valor é: %d\n", numero1);
        
    }
    
    return 0;
}

# 9 
int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("O maior valor é: %d\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O maior valor é: %d\n", numero2);
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("O maior valor é: %d\n", numero3);
    } else {
        printf("Os números são iguais.\n");
    }
    
    return 0;
}

#10

  #include <stdio.h>

int main() {
    int numero;

    printf("Digite um número para verificar se é múltiplo de 7: ");
    scanf("%d", &numero);

    if (numero % 7 == 0) {
        printf("%d é múltiplo de 7.\n", numero);
    } else {
        printf("%d não é múltiplo de 7.\n", numero);
    }

    printf("Múltiplos de 7 no intervalo de 234 até 782:\n");
    for (int i = 234; i <= 782; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}



