#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello World";

    cout << "Length using size(): " << str.size() << endl;

    cout << "Length using length(): " << str.length() << endl;

    cout << "Using index: ";
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] ;
    }
    cout << endl;

    cout << "Using range-based for loop: ";
    for (char ch : str) {
        cout << ch ;
    }
    cout << endl;

    string str1 = "Hello";
    string str2 = " World";

    // Using + operator. it creates a new string
    string result1 = str1 + str2;
    cout << "Concatenation using + : " << result1 << endl;

    // Using append() function. it modifies the existing string
    string result2 = str1;
    result2.append(str2);
    cout << "Concatenation using append(): " << result2 << endl;

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5, " C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string
    str.erase(5, 4); //erase 4 characters starting from index 5
    cout << "After erase: " << str << endl; 

    // Extract "Hello"
    string sub1 = str.substr(0, 5);   
    cout << "Substring 1: " << sub1 << endl;

    int pos = str.find("World");
    if(pos < str.size()){
        cout<< "Found 'World' at index: " << pos << endl;
    }

    //swapping two strings
    string a = "First";
    string b = "Second";
    a.swap(b);
    cout << "After swap, a: " << a << ", b: " << b << endl;

    //clearing a string
    a.clear();
    cout << "After clear, a: '" << a << "'" << endl;
    
    //checking if a string is empty
    if(a.empty()){
        cout << "String a is empty" << endl;
    } else {
        cout << "String a is not empty" << endl;
    }

    //

    return 0;
}