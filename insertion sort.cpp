#include<stdio.h>
int main() {
   int a[50], i,j,n,t;
   printf("enter the No: of elements in the list:\n");
   scanf("%d", &n);
   printf("enter the elements:\n");
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   for(i = 1; i <= n - 1; i++)
   {
      for(j=i; j > 0 && a[j - 1] > a[j]; j--){
         t = a[j];
         a[j] = a[j - 1];
         a[j - 1] = t;
      }
   }
   printf ("after insertion sorting the elements are:\n");
   for (i=0; i<n; i++)
   printf("%d\t", a[i]);

}