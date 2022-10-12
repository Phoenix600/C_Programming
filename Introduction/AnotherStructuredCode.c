#include<stdio.h>
#include<malloc.h>

#define MAX_SIZE 100    // Upper_Case
const int MIN_SIZE = 5;

struct ArrayADT // PascalCase
{
    int* arr;
    int size;
};

struct ArrayADT* createArrayADT(int size) // camelCase
{
    struct ArrayADT* new_node = (struct ArrayADT*)malloc(sizeof(struct ArrayADT));
    new_node->arr = (int*)malloc(sizeof(int)*size);

    return new_node; // snake_case
} 

void printArray(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = i;
        printf("%d \n",arr[i]);
    }
}


int main()
{
    struct ArrayADT* new_node = createArrayADT(5);

    printArray(new_node->arr,5);

    printf("%d ",new_node->arr[3]);
    
    return 0;
}