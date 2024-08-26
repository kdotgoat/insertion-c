#include <stdio.h>
#include <stdlib.h>

int main()
{
 int WISE[] = {1,3,5,7,8};
 int item = 10;
 int k = 3;
 int n = 5;
 int i = 0;
 int j = n;
 printf("The original array elements are :\n");
 for(i = 0; i<n; i++)
 {
 printf("WISE[%d] = %d \n", i, WISE[i]);
 }
 n = n + 1;
 while( j >= k)
 {
 WISE[j+1] = WISE[j];
 j = j - 1;
 }
 WISE[k] = item;
 printf("The array elements after insertion :\n");
 for(i = 0; i<n; i++)
 {
      printf("WISE[%d] = %d \n", i, WISE[i]);
 }



    return 0;
}
