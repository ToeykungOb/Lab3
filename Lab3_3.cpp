#include<iostream>

using namespace std;

int main(){
    double n=6,total=0;
    while(n<20){
        total=total+(1/n);
        n++;
    }
    cout<<total<<endl;
    return 0;
}