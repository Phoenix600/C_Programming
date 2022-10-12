void printArray(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = i;
        printf("%d \n",arr[i]);
    }
}