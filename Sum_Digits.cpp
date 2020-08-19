#include <stdio.h>
int sum_Digits(int num);
int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    sum = sum_Digits(num);
    printf("Sum of digits of %d = %d", num, sum);
    return 0;
}
int sum_Digits(int num)
    {
      if(num == 0)
        return 0;
        
    return ((num % 10) + sum_Digits(num / 10));
}