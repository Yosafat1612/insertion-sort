// C program for insertion sort
# define size 5
int array[size] = { 12, 11, 13, 5, 6 };
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
/* Driver program to test insertion sort */
int main()
{
    int n = sizeof(array) / sizeof(array[0]);
 
    insertionSort(array, n);
 
    return 0;
}