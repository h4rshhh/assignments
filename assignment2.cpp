#include <iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    //3N+2
    int count = 1;
    for(int i = 1;count<=n;i++){
        int j = 3*i+2;
        if(j%4==0){
            continue;
        }
        count++;
        cout<<j<<" ";                 
    }

    return 0;
}
