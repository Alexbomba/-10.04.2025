#include <iostream>
using namespace std;

double FindAverage(const int arr[], int size);
void PrintMinAndMax(const int arr[], int size);
void ReverseArray(int arr[], int size);

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = { 5, 3, 9, -2, 7, 3, 10, 1 };

    double avg = FindAverage(numbers, SIZE);
    cout << "Average value: " << avg << "\n";

    PrintMinAndMax(numbers, SIZE);

    ReverseArray(numbers, SIZE);

    cout << "Array after reverse: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

}

double FindAverage(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return static_cast<double>(sum) / size;
}

void PrintMinAndMax(const int arr[], int size) {
    int minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    cout << "Minimum value: " << minVal << " (index: " << minIndex << ")\n";
    cout << "Maximum value: " << maxVal << " (index: " << maxIndex << ")\n";
}

void ReverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

