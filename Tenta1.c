//tenta_170419, Fråga 2

#include <stdio.h>

int main(void)

{
  int arr[];
  int n;
  int i, j;
  int next;

  for (i = 1 ; i < n ; i++) {
    next = arr[i];

    j = i - 1;

      while (j >= 0 && next < arr[j]) {

        arr[j + 1] = arr[j];

        j = j - 1;
      }

      arr[j + 1] = next;
    }
    return 0;
}
