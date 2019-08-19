#include <iostream>
using namespace std;
void solution(){
    int a,b,t;
    cin>>a>>b;
    t = a; a = b; b = t;
    cout<<a<<" "<<b<<endl;
}

int main() {
    solution();
    return 0;
}