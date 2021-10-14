// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
# define size 5
int array[size] = { 2, 3, 4, 10, 40 };
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    int x = 10;
    int n = sizeof(array) / sizeof(array[0]);
   
    // Function call
    int result = search(array, n, x);
    return 0;
}