#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello, World!";

    // Basic Operations
    cout << "Original String: " << str << endl;
    cout << "Length: " << str.length() << endl;

    // Append and Insert
    str.append(" How are you?");
    str.insert(5, " beautiful");
    cout << "After Append and Insert: " << str << endl;

    // Erase and Replace
    str.erase(5, 10);
    str.replace(0, 5, "Hi");
    cout << "After Erase and Replace: " << str << endl;

    // Search and Substring
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "Found 'World' at position: " << pos << endl;
    }
    string sub = str.substr(3, 4);
    cout << "Substring: " << sub << endl;

    // Comparison
    string str2 = "Hi, World!";
    cout << "Are strings equal? " << (str == str2 ? "Yes" : "No") << endl;

    // Iterating
    cout << "Iterating over characters: ";
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;

    // String Conversion
    int num = 456;
    string numStr = std::to_string(num);
    cout << "Integer to String: " << numStr << endl;
    int convertedNum = std::stoi(numStr);
    cout << "String to Integer: " << convertedNum << endl;

    // String Stream
    stringstream ss;
    ss << "The number is " << num;
    string ssStr = ss.str();
    cout << "String Stream: " << ssStr << endl;

    // Sorting and Reversing
    string s = "dcba";
    sort(s.begin(), s.end());
    cout << "Sorted String: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed String: " << s << endl;

    // Case Conversion
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "To Lowercase: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "To Uppercase: " << str << endl;

    return 0;
}

