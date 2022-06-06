// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i, j = 0;
  for (i = 0; i < size; i++)
      if (arr[i] == value)
          j++;
  return j;
  return 0; // если ничего не найдено
}
