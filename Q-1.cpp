// Develop a program that print all alphabets from  A to Z by skipping 3 alphabets using do while loop.

#include<iostream>
using namespace std;

int main(){
    char i='A';
    do
    {
        cout<<i<<" ";
        i+=4;
    } while (i<='Z');
    
}