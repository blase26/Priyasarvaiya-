
#include <iostream>
using namespace std;

int addition(int arr[], int size)
 {
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main()
 {
    int numbers[2];
    cout << "Enter the first number: ";
    cin >> numbers[0];
    cout << "Enter the second number: ";
    cin >> numbers[1];

    int result = addition(numbers, 2);
    cout << "The sum of the two numbers is: " << result << endl;

    return 0;
}

    