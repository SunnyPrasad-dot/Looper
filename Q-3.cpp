// Develop a program to find the sum of a number's first and last degits.




#include<iostream>
using namespace std;

int main(){
    int num,first,last,sum;
    cout<<"Enter Any Number: ";
    cin>>num;
    last=num%10;
    while(num>=10){
        num=num/10;
    }
    first=num;
    sum=first+last;
    cout<<"The Sum of First and Last digit : "<<sum;
    return 0;
}

