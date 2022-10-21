/*
Autor: Eduardo Monteiro Zitske
Data: 21/10/2022
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int ePrimo(int num){
    int cont,div=0;
    if(num == 1 || num == 0){
        return 0;
        }else{
            for (cont = 2; cont <= num / 2; cont++) {
                if (num % cont == 0) {
                div++;
                }
            }
            if (div == 0)
                return 1;
            else
                return 0;
        }
}

int main(){
int a,b,n,i,c=0;

printf("Digite o numero de elementos a serem impressos: ");
scanf("%d", &i);
pid_t pid = fork();

if (pid == 0){
    printf("Sou o processo filho (pid: %d, ppid: %d). ",getpid(),getppid());
    printf("\nDigite termo 1: ");
    scanf("%d", &a);
    printf("Digite termo 2: ");
    scanf("%d", &b);
    printf("Sou o processo filho (pid: %d, ppid: %d). ",getpid(),getppid());
    printf("Vou gerar a serie:\n");
    printf("%d ", a);
    printf("%d ", b);

    while (i>0) {
        n=a+b;
        printf("%d ", n);
        a=b;
        b=n;
        i--;
        if (i == 0) {
            printf("\nSou o processo filho (pid: %d, ppid: %d) e terminei\n",getpid(),getppid());
        }
    }
}else {
        printf("Sou o processo pai (pid: %d, ppid: %d). ",getpid(),getppid());
        printf("Vou esperar meu filho e depois gerar os primos\n");
        waitpid(pid, NULL, 0);
        printf("Sou o processo pai (pid: %d, ppid: %d), esperei meu filho. Vou gerar os primos:\n",getpid(),getppid());
        for (int n=0; n < i; ++c){
            if (ePrimo(c)){
                n++;
                printf("%d ", c);
            }
        }
        printf("\nSou o processo pai (pid: %d, ppid: %d) e terminei\n",getpid(),getppid());
}return 0;
}



