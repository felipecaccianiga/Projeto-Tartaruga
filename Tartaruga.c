/*
PROJETO TARTARUGA
Felipe Camargo TIA: 41920503
Mauricio Mourao TIA: 41908074
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para contagem do tempo
#include <pthread.h> //Biblioteca pthreads

void *soma(void arg); //Alocar espaço para a função

int thread_count = 8;
long double result = 0; //Resultado de todas as somas

int main(){
    char temp;
    long int x = 1;
    long thread;

    time_t inicio = time(NULL); //Inicia a contagem do tempo

    printf("\n**PARTICIPANTES***\nFelipe Camargo TIA: 41920503\nMauricio Mourao TIA: 41908074\n");
    printf("\nPressione qualquer tecla para iniciar");
    scanf("%c", &temp);

    pthread_t *thread_handles; //Iniciando as threads
    thread_handles = malloc(thread_count * sizeof(pthread_t)); //Alocando as threads

    do{ //Separa as operações nas threads
        for(thread = 0; thread < thread_count; thread++){
            pthread_create(&thread_handles[thread], NULL, soma, &x); //Realiza a soma na função 
            pthread_join(thread_handles[thread], NULL); //Finaliza a thread para iniciar outra
            x++;
        }
        printf("\nDistancia: %.10Lf   Segundos: %ld", result, time(NULL) - inicio);
    }while(1); //Código é finalizado manualmente

    free(thread_handles); //Liberar espaço da memória ocupada por threads
}

void *soma(void *arg){ //Realiza a divisão e adiciona no resultado final
    int num = (int)arg;
    result += (1.0 / *num);

    return NULL;
}
