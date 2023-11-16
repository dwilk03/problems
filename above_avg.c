#include <stdio.h>

typedef enum bool {
  false = 0,
  true = 1
} bool;

bool solution(int *class_points, int class_size, int your_points) {
  int sum = 0;
  float avg;
  for(int i = 0; i < class_size; i++)
    sum += class_points[i];
  avg = sum / (float)class_size; 

  return (your_points > avg) ? true : false;
}

int main() {
  int arr[] = {1,2,3,6,4,5};

  printf("Solution => %d\n", solution(arr, 6, 4));

  return 0;
}
