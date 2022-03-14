// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int a = 0, b = 0, x = size - 1;
while (b < x) {
int k = (b + x) / 2;
if (arr[k] == value) {
a++;
int s = k;
while (arr[--k] == value) {
a++;
}
while (arr[++s] == value) {
a++;
}
return a;
} else if (arr[k] > value) {
x = k;
} else {
b = k + 1;
}
}
return 0; // если ничего не найдено
}
