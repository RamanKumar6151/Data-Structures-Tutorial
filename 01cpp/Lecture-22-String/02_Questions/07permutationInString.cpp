// https://leetcode.com/problems/permutation-in-string/description/
// permutation in string

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkInclusion(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();
    if (n1 > n2) return false;

    vector<int> s1Count(26, 0), s2Count(26, 0);

    // Count frequency of characters in s1
    for (char c : s1) {
        s1Count[c - 'a']++;
    }

    // Initialize the first window in s2
    for (int i = 0; i < n1; ++i) {
        s2Count[s2[i] - 'a']++;
    }

    // Compare frequency arrays
    if (s1Count == s2Count) return true;

    // Slide the window over s2
    for (int i = n1; i < n2; ++i) {
        s2Count[s2[i] - 'a']++;         // Add the new character to the window
        s2Count[s2[i - n1] - 'a']--;    // Remove the old character from the window

        // Compare frequency arrays
        if (s1Count == s2Count) return true;
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    
    if (checkInclusion(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    s1 = "ab";
    s2 = "eidboaoo";
    
    if (checkInclusion(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
