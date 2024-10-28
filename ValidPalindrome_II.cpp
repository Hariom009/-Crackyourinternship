#include<iostream>
using namespace std;
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;  // Not a palindrome
        }
        start++;
        end--;
    }
    return true;
}

bool validPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            // If a mismatch is found, try removing either start or end character
            return isPalindrome(s, start + 1, end) || isPalindrome(s, start, end - 1);
        }
        start++;
        end--;
    }

    return true;  // It's a palindrome if no mismatches are found
}
