#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* hilo_funcion(void* arg){
	printf("Hola desde el hilo %ld\n",(long)arg);
	pthread_exit(NULL);
}

int main(){
	pthread_t hilo1, hilo2;
}
