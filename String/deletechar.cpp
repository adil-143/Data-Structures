#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello world";
    int index = 2;

    if(index < 0 || index >= str.length()){
        cout<<"Index out of bounds"<<endl;
        return -1;
    }

    str.erase(index, 1); // Erase character at specified index. here 1 is the count of characters to be erased, index is the position
    cout<<"The new string after deletion is: "<<str<<endl;

    str.erase(str.begin() + index); // Erase character at specified index using iterator
    cout<<"The new string after deletion using iterator is: "<<str<<endl;

    char ch = 'l';

    str.erase(remove(str.begin(), str.end(), ch), str.end()); // Erase all occurrences of a specific character
    cout<<"The new string after deleting all occurrences of character "<<ch<<" is: "<<str<<endl;

    string s = "banana";
    char ch2 = 'a';
    string newstr = "";
    for(char c : s){
        if(c != ch2){
            newstr.push_back(c); // Add character to new string if it is not the one to be deleted
        }
    }
    cout<<"The new string after deleting all occurrences of character "<<ch2<<" manually is: "<<newstr<<endl;
    return 0;

}