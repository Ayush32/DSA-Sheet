void rearrange(int arr[], int n)
{
    int i = 0, j = n-1;
 
    // shift all negative values to the end
    while (i < j) {
        while (i <= n - 1 and arr[i] > 0)
            i += 1;
        while (j >= 0 and arr[j] < 0)
            j -= 1;
        if (i < j )
            swap(arr[i], arr[j]);
    }
 
    // i has index of leftmost
    // negative element
    if (i == 0 || i == n)
        return;
 
    // start with first positive
    // element at index 0
 
    // Rearrange array in alternating
    // positive &
    // negative items
    int k = 0;
    while (k < n && i < n ) {
        // swap next positive
        // element at even position
        // from next negative element.
        swap(arr[k], arr[i]);
        i = i + 1;
        k = k + 2;
    }
}
 
