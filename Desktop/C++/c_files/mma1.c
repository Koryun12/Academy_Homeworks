#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 10

int* create_buffer() {
    int *buffer = mmap(NULL, BUFFER_SIZE * sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (buffer == MAP_FAILED) {
        perror("mmap");
        return NULL;
    }
    memset(buffer, 0, BUFFER_SIZE * sizeof(int));
    return buffer;
}

void add_element(int* buffer, int element) {
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (buffer[i] == 0) { 
            buffer[i] = element;
            return;
        }
    }
    printf("Buffer is full, cannot add element.\n");
}

void remove_element(int* buffer, int index) {
    if (index >= 0 && index < BUFFER_SIZE) {
        buffer[index] = 0; 
    } else {
        printf("Index out of bounds.\n");
    }
}

void current_state(int* buffer) {
    printf("Buffer state: ");
    for (int i = 0; i < BUFFER_SIZE; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
}

void destroy_buffer(int* buffer) {
    if (munmap(buffer, BUFFER_SIZE * sizeof(int)) == -1) {
        perror("munmap");
    }
}

int main() {
    int *buffer = create_buffer();
    if (buffer == NULL) return 1;

    add_element(buffer, 5);
    add_element(buffer, 10);
    add_element(buffer, 15);
    current_state(buffer);

    remove_element(buffer, 1);
    current_state(buffer);

    destroy_buffer(buffer);
    return 0;
}

