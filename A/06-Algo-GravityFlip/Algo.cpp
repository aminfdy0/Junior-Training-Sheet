/*
 * This problem gives us an array filled with random numbers, and our task is to
 * sort the array in ascending order.
 *
 *  Algorithm Used: Quick Sort
 *
            ?  Why Quick Sort?
 * - Quick Sort is one of the fastest comparison-based sorting algorithms in practice.
 * - It has an average time complexity of O(n log n).
 * - It performs extremely well on random/uniformly distributed data.
 * - It is an in-place algorithm, meaning it does not need extra memory like merge sort.
 *
            Comparison with Other Algorithms:
 ! Merge Sort:
 *      - Time: always O(n log n)
 *      - Stable and predictable performance
 *      - BUT requires extra memory (not in-place)
 *
 ! Bubble / Insertion Sort:
 *      - Time: O(n²) in the worst and average case
 *      - Only good for very small or nearly-sorted arrays
 *
 ! Selection Sort:
 *      - Time: always O(n²)
 *      - In-place, but still too slow for large input
 *
            ? Why Quick Sort here (short answer):
 *      Quick Sort gives the best practical performance for *random arrays*, uses
 *      O(1) extra memory, and is faster than most simple algorithms like Bubble,
 *      Insertion, or Selection Sort.
 */

            // ! Code of Quick Sort



// Swap two integers by pointer
void ft_swap(int *a, int *b)
{
    int temp = *a;    // save value at address a into temp
    *a = *b;          // copy value at address b into address a
    *b = temp;        // copy saved value from temp into address b
}



/* Partition the subarray arr[low..high] using arr[low] as pivot.
   Returns the final pivot index (j). */
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];   // choose the pivot value (first element)
    int i = low;            // i will scan from left to right
    int j = high;           // j will scan from right to left

    /* Continue until the two indices cross */
    while (i < j)
    {
        /* Move i right until we find an element > pivot.
           Note: safer to check bounds first (i <= high - 1) before accessing arr[i].
           Here the code checks arr[i] <= pivot first; in C '&&' is left-to-right so if
           i is out-of-bounds this could be undefined behavior. Prefer:
               while (i <= high - 1 && arr[i] <= pivot) i++;
        */
        while (arr[i] <= pivot && i <= high - 1)
            i++;

        /* Move j left until we find an element <= pivot.
           Similarly, safer to check bounds first:
               while (j >= low + 1 && arr[j] > pivot) j--;
        */
        while (arr[j] > pivot && j >= low + 1)
            j--;

        /* If i and j have not crossed, swap the elements at i and j.
           This places a larger-than-pivot element on the right side and
           a smaller-or-equal-than-pivot element on the left. */
        if (i < j)
            ft_swap(&arr[i], &arr[j]);
    }

    /* Place the pivot into its final position by swapping arr[low] and arr[j].
       After the loop, j is the index where pivot belongs:
       - All elements left of j are <= pivot
       - All elements right of j are > pivot
    */
    ft_swap(&arr[low], &arr[j]);

    return j; /* return pivot's final index */
}



/* Recursive quicksort on arr[low..high] */
void quicksort(int arr[], int low, int high)
{
    /* Base case: nothing to sort when low >= high */
    if (low < high)
    {
        /* Partition the array and get pivot index */
        int par = partition(arr, low, high);

        /* Recursively sort left subarray (elements before pivot) */
        quicksort(arr, low, par - 1);

        /* Recursively sort right subarray (elements after pivot) */
        quicksort(arr, par + 1, high);
    }
}

// For good explain as a video go to channel "adbul bari" video "QuickSort Algorithm" 
// link: https://youtu.be/7h1s2SojIRw?si=fONt_eS54k4Ds_zg