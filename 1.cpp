#include<iostream>
using namespace std;


double func(int n , int m){
    static double s;
    if(m == 0){
        return s;
    }
    else{
        s = 1+n*s/m;
        return func(n,m-1);
    }

}
int main(){
    cout << func(1,10);
    return 0;
}