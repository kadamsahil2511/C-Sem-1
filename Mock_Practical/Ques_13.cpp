/*
Question 13:
Write a program that demonstrates pointer operations including:
1. Swapping two numbers using pointers
2. Finding largest and smallest elements in an array using pointers
3. Using pointer arithmetic to access array elements
4. Calculating product of two numbers using pointers
5. Calculating sum of array elements using pointer arithmetic
*/

#include <iostream>
using namespace std;

// Function to swap numbers using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find min and max using pointers
void findMinMax(int* arr, int size, int* min, int* max) {
    *min = *max = *arr;  // Initialize with first element
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > *max) *max = *(arr + i);
        if(*(arr + i) < *min) *min = *(arr + i);
    }
}

// Function to calculate product using pointers
int getProduct(int* a, int* b) {
    return (*a) * (*b);
}

// Function to calculate array sum using pointer arithmetic
int getArraySum(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);  // Using pointer arithmetic to access elements
    }
    return sum;
}

int main() {
    // Demonstrate swapping
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Demonstrate min-max finding
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int min, max;
    findMinMax(arr, 7, &min, &max);
    cout << "\nArray elements: ";
    for(int i = 0; i < 7; i++) cout << arr[i] << " ";
    cout << "\nMinimum: " << min << "\nMaximum: " << max << endl;

    // Demonstrate product calculation
    int num1 = 6, num2 = 7;
    cout << "\nProduct of " << num1 << " and " << num2 << " is: " 
         << getProduct(&num1, &num2) << endl;

    // Demonstrate array sum using pointer arithmetic
    cout << "Sum of array elements: " << getArraySum(arr, 7) << endl;

    return 0;
} 