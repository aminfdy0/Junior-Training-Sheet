#include <iostream>
using namespace std;

void ft_swap(int *a, int *b);
int partition(int arr[],int low, int high);
void quicksort(int arr[], int low, int high);

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
            i++;
        while (arr[j] > pivot && j >= low + 1)
            j--;
        
        if (i < j)
            ft_swap(&arr[i], &arr[j]);
    }

    ft_swap(&arr[low], &arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int par = partition(arr, low, high);
        quicksort(arr, low, par - 1);
        quicksort(arr, par + 1, high);
    }
}