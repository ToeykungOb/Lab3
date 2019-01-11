#include<iostream>

using namespace std;

int main(){
    double n=2,total=0;
    while(n<70){
        total=total+(1/n);
        n++;
    }
    cout<<total<<endl;
    return 0;
}