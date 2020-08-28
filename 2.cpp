#include<iostream>
using namespace std;


void mov(int n, int a, int b, int c){
    if(n>0){
        mov(n-1,a,b,c);
        cout<< "("<<a<<","<<c<<")";
        mov(n-1,b,a,c);
    }

}




int main(){
    mov(20,1,2,3);
    return 0;
}