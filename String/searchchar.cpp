#include<bits/stdc++.h>
using namespace std;

// int searchchar(string str, char ch){
//     for(int i =0; i<str.length(); i++){
//         if(str[i] == ch){
//             return i;
//         }
//         else{
//             continue;
//         }
//     }
//     return -1; // Character not found
// }

int searchusingfind(string str, char ch){
    int index = str.find(ch);
    return index;
}

int main(){
    string str = "hello world";
    char ch = 'l';

    // int index = searchchar(str, ch);

    int index = searchusingfind(str, ch);

    cout<<"The index of character "<<ch<<" is: "<<index<<endl;
    return 0;

}