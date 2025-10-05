#include<bits/stdc++.h>
using namespace std;

int insertusinginsert(string str, char ch, int index){
    str.insert(index, 1, ch); // Insert character at specified index. here 1 is the count of characters to be inserted, index is the position, ch is the character to be inserted
    cout<<"The new string after insertion is: "<<str<<endl;
    return 0;
}

string insertmanually(string str, char ch, int index){
    string newstr = "";
    for(int i = 0; i<str.length(); i++){
        if(i == index){
            newstr.push_back(ch); // Insert character at specified index
        }
        newstr.push_back(str[i]); // Add original characters
    }
    if(index >= str.length()){
        newstr.push_back(ch); // If index is greater than length, append at the end
    }
    return newstr;
}

int main(){
    string str = "hello world";
    char ch = 'X';
    int index = 5;
    insertusinginsert(str, ch, index);

    cout<<"The new string after insertion is: "<<insertmanually(str, ch, index)<<endl;
    return 0;
}