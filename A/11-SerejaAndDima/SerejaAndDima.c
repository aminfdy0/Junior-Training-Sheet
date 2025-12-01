#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int cards;
    scanf("%i", &cards);
    int numbers[cards];
    for (int i = 0; i < cards; i++)
    {
        scanf("%i", &numbers[i]);
    }
    
    int sereja = 0, dima = 0;
    int left = 0, right = cards - 1;
    bool turn = true;
    
    while (left <= right)
    {
        int BigNum = 0;
        if (numbers[left] >= numbers[right])
        {
            BigNum = numbers[left];
            left++;
        }
        else
        {
            BigNum = numbers[right];
            right--; 
        }
        if (turn) sereja += BigNum;
        else dima += BigNum;
        turn = !turn;
    }
     printf("%i %i",sereja, dima);
}