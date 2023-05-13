#include <iostream>
using namespace std;
int main(){ 
    int n,c;
    cin>>n;
    cin>>c;
    if(c == 1){
        int i = 1, sum = 0;
        while(i<=n){
            sum = sum + i;
            i++;
        }
        cout<<sum;        
    }
    else if(c == 2){
        int i = 1, product = 1;
        while(i<=n){
            product = product*i;
            i++;
        }
        cout<<product;
    }
    else{
        cout<<"-1";
    }
    return 0;
}
