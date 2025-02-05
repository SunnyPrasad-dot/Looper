// Develop a program to count the total number of digits in number.

#include<iostream>
using namespace std;

int main(){

    int num,temp,count;
    
    cout<<"enter Any Number : ";
    cin>>num;
    count=0;
    for(temp=num;temp>0;temp/=10){
        count++;
    }
    if (count < 10) {
        cout << "Total number of digits: " << count << endl;
    } else {
        cout << "Warning! The Digit is more then 10." << endl;
    }
}

