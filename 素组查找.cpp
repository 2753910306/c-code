#include<stdio.h>

int main()
{
    int nums[10000] = { NULL };
    int target = 0;
    int count = 0;
    int n = 0;
    int i = 0;
    int left = 0, right = 0;
    printf("nums=");
    do
    {
        scanf_s("%d", &nums[n++]);
    } while (getchar() != '\n');
    printf("target=");
    scanf_s("%d", &target);
    right = n-1;
    left = n-1;
    while (left >= 0) 
    {
         if (nums[left] != target)
         {
              nums[right] = nums[left];
              right -= 1;
         }
         else 
         {
              count += 1;
         }
         left -= 1;
    }
    for (int i = 0; i < count; i++) 
    {
         nums[i] = target;
    }
    printf("nums=");
    for (i = 0; i < n; i++)
    {
         printf("%d ", nums[i]);
    }
    return 0;
}
