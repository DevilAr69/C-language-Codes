#include<iostream>

using namespace std;

int factorial(int n){
    int fact =1;
    for (int i = 1; i<=n; i++)
    {
        fact=fact*1;
        /* code */
    }
    return fact;
    

}

int nCr(int n,int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    int ans = num/den;
    return ans;




}

int main(){
    int n, r;
    cout<<"enter the value of n,r :"<<endl;
    cin>>n>>r;
    cout<<"the factorial is "<<nCr<<endl;

}