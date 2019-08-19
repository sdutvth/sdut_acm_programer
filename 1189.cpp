#include <iostream>
using namespace std;
void solution(){
    int num;
    cin>>num;
    int a,b,c;
    a = num/100;
    b = num/10%10;
    c = num%10;
    int res;
    res = c*100 + b*10 + a;
    cout<<res<<endl;
}

int main() {
    solution();
    return 0;
}