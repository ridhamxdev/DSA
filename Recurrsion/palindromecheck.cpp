#include<iostream>
using namespace std;
bool isPalindrome(string s, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (s[start] != s[end]) {
        return false;
    }
    return isPalindrome(s, start + 1, end - 1);
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (isPalindrome(s, 0, s.size() - 1)) {
        cout << s << " is a palindrome." << endl;
    } else {
        cout << s << " is not a palindrome." << endl;
    }
    return 0;
}