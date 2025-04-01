#include <iostream>

void bubble_sort(int buf[], int size);
void swap(int* x, int* y);

void bubble_sort(int buf[], int size) {
	for (int i = 0; i < size; i++) {
		// i ������ ����� �� ���� ���� i��°�� ū ���� ���� �����ʿ� ���ĵǹǷ� (i+1)��°��ŭ ��ȸ�� �� �����ν� ����ȭ ����
		for (int j = 0; j < size - (i + 1); j++) {
			if (buf[j] > buf[j+1]) swap(&buf[j], &buf[j+1]);
		}
	}
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int arr[10] = { 5, 3, 9, 11, 37, 85, 42, 13, 12, 11 };
	bubble_sort(arr, sizeof(arr)/sizeof(int));
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		std::cout << arr[i] << std::endl;
	}

	return 0;
}