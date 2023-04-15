// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout<<std::endl;
}

void Insertion_Sort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        int temp = A[i+1];
        for (int j = i; j > -1; j--) {
            if (temp < A[j]) {
                A[j + 1] = A[j];
                A[j] = temp;
            }
            else {
                break;
            }
            temp = A[j];
        }
        printArray(A, n);
    }
}

int main()
{
    int array[] = { 5,4,2,7,1,9 };
    Insertion_Sort(array, 6);
    return 0;
}

