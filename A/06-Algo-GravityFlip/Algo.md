# ALGO
## Quick Sort Algorithm — Explanation & Code

This problem gives us an array filled with random numbers, and our task is to sort the array in ascending order.

---

### **Algorithm Used: Quick Sort**

#### **Why Quick Sort?**

* One of the fastest comparison-based sorting algorithms in practice.
* Average time complexity: **O(n log n)**.
* Performs extremely well on random/uniformly distributed data.
* **In-place algorithm** → uses no extra memory unlike merge sort.

---

### **Comparison with Other Algorithms**

#### **Merge Sort**

* Time: always **O(n log n)**
* Stable and predictable
* ❌ Requires extra memory (not in-place)

#### **Bubble Sort / Insertion Sort**

* Time: **O(n²)** in worst and average cases
* Only efficient for very small or nearly-sorted arrays

#### **Selection Sort**

* Time: always **O(n²)**
* In-place but too slow for large input

---

### **Why Quick Sort Here**

Quick Sort provides the best real-world performance for **random arrays**, uses **O(1) extra memory**, and is faster than simple algorithms like Bubble, Insertion, or Selection Sort.

---

## **Quick Sort Code Implementation (C/C++)**

```c
// Swap two integers by pointer
void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Partition the subarray arr[low..high] using arr[low] as pivot.
   Returns the final pivot index (j). */
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];   // choose the pivot value (first element)
    int i = low;
    int j = high;

    while (i < j)
    {
        // Move i right while arr[i] <= pivot (with bound check)
        while (arr[i] <= pivot && i <= high - 1)
            i++;

        // Move j left while arr[j] > pivot (with bound check)
        while (arr[j] > pivot && j >= low + 1)
            j--;

        // Swap when indices haven't crossed
        if (i < j)
            ft_swap(&arr[i], &arr[j]);
    }

    // Place pivot in its correct position
    ft_swap(&arr[low], &arr[j]);

    return j;
}

// Recursive quicksort on arr[low..high]
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int par = partition(arr, low, high);

        // Sort left part
        quicksort(arr, low, par - 1);

        // Sort right part
        quicksort(arr, par + 1, high);
    }
}
```

---

## **Recommended Video Explanation**

For a clear video explanation, watch **Abdul Bari** – [QuickSort Algorithm](https://youtu.be/7h1s2SojIRw?si=lQO-WGjSyeOLdRxk) on YouTube.