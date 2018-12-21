//A C++ program to implement the Binary Search algorithm

#include <iostream>
using namespace std;

int binary(int arrNum[], int size, int value);

int main() {
    int a[] = {10, 25, 28, 39, 56, 55, 87, 104};
    int value;
    cout << "Enter an integer you wish to find in the array: ";
    cin >> value;
    int result = binary(a, 8, value);
    	if(result >= 0) {
        	cout << "The number " << a[result] << " was found at the element with index " << result << endl;
    	}
    	else {
        	cout << "The number " << value << " was not found. " << endl;
    	}
    return 0;
}

int binary(int arrNum[], int size, int value) {
    int lowest = 0;
    int highest = size - 1;

    int midNum;

    while (lowest <= highest) {
        midNum = (lowest + highest) / 2;
        if(value == arrNum[midNum]) {
            return midNum;
        }
        else if (value > arrNum[midNum]) {
            lowest = midNum + 1;
        }
        else {
            highest = midNum - 1;
        }
    }

    return -1;

}
