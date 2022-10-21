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

printf("Enter the number of elements to be printed: ");
scanf("%d", &i);
pid_t pid = fork();

if (pid == 0){
    printf("I am the child process (pid: %d, ppid: %d). ",getpid(),getppid());
    printf("\nEnter term 1: ");
    scanf("%d", &a);
    printf("Enter term 2: ");
    scanf("%d", &b);
    printf("I am the child process (pid: %d, ppid: %d). ",getpid(),getppid());
    printf("I will generate the Fibonacci series:\n");
    printf("%d ", a);
    printf("%d ", b);

    while (i>0) {
        n=a+b;
        printf("%d ", n);
        a=b;
        b=n;
        i--;
        if (i == 0) {
            printf("\nI am the child process (pid: %d, ppid: %d) and finished\n",getpid(),getppid());
        }
    }
}else {
        printf("I am the parent process (pid: %d, ppid: %d). ",getpid(),getppid());
        printf("I'll wait for my son and then generate the prime numbers\n");
        waitpid(pid, NULL, 0);
        printf("I am the parent process (pid: %d, ppid: %d), I waited for my son. Now I will generate the prime numbers:\n",getpid(),getppid());
        for (int n=0; n < i; ++c){
            if (ePrimo(c)){
                n++;
                printf("%d ", c);
            }
        }
        printf("\nI am the parent process (pid: %d, ppid: %d) and finished\n",getpid(),getppid());
}return 0;
}



