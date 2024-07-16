//Write a palladrom to find any number//
#include <iostream>
using namespace std;

// Function to return the reverse of a number
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    return num == reverse(num);
}

// Function to print all d-digit palindrome numbers
void printPalindromes(int d) {
    if (d <= 0) return;
    int smallest = pow(10, d - 1);
    int largest = pow(10, d) - 1;

    for (int i = smallest; i <= largest; ++i) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
}

int main() {
	int pow;
    int d = 2; // Change this to the desired number of digits
    printPalindromes(d);
    return 0;
}
