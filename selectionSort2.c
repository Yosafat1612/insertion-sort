#define N 10
int array[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int findMinElementPosition(int d, int position) {

    if (array[position] > array[d])
        position = d;
        return position;
}

void selectionSort(int array[], int n) {

    int c, d, position, t;

    // One by one move boundary of unsorted subarray
    for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
    {
        // Find the minimum element in unsorted array
        position = c;
        for (d = c + 1; d < n; d++)
        {
            position = findMinElementPosition(d, position);
        }
        
        if (position != c)
        {
            t = array[c];
            array[c] = array[position];
            array[position] = t;
        }
    }
}

int main() {
    selectionSort(array, N);
    return 0;
}