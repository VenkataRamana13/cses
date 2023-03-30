#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    char middle_char;
    string palindrome;

    for (auto p : freq) {
        if (p.second % 2 == 1) {
            odd_count++;
            middle_char = p.first;
        }
        for (int i = 0; i < p.second / 2; i++) {
            palindrome.push_back(p.first);
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        string second_half = palindrome;
        reverse(second_half.begin(), second_half.end());

        if (odd_count == 1) {
            palindrome.push_back(middle_char);
        }

        palindrome += second_half;
        cout << palindrome << endl;
    }

    return 0;
}

