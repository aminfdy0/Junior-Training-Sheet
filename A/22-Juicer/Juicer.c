#include <stdio.h>
int main(void)
{
    int oranges, size, jui;
    //int oranges = 1, size = 1, jui = 1;
    scanf("%i %i %i", &oranges, &size, &jui);
    int arr[oranges];
    //int arr[] = {1};
    for (int i = 0; i < oranges; i++) {
        scanf("%i", &arr[i]);
    }
    
    int sum = 0;
    int cup = 0;
    for (int i = 0; i < oranges; i++) {
        if (arr[i] <= size) {
            sum += arr[i];
            if (sum > jui) {
                cup++;
                sum = 0; 
            }
        }
    }
    printf("%i\n", cup);
    return 0;
}