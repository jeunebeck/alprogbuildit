#include <stdio.h>

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int nilai;

  scanf("%d", &nilai);

  int data[nilai];

  for (int i = 0; i < nilai; i++) {
    scanf("%d", &data[i]);
  }

  bubbleSort(data, nilai);
  printArray(data, nilai);

  return 0;
}
