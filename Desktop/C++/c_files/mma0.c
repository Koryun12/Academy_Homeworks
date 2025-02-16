#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#define BUFFER 10 

int* create_buffer() {

int * buffer = mmap(NULL,BUFFER_SIZE * sizeof(int),PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANONYMOUS, -1,0);
if (buffer == MAP_FAILED){
	perror("mmap");
	return NULL;

}
memset(buffer,0,BUFFER_SIZE * sizeof(int));
	return buffer;

void push_front(int* buffer,int element){
	for(int i = 0; i < BUFFER_SIZE;i++){
		if(buffer[i] == 0){
			buffer[i] = element;
			return;
			}		
		}
	}


printf("Buffer is very full,can not add element!: \n");
	}

