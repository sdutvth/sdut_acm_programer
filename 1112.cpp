#include <iostream>
using namespace std;
void solution(){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++)
        {
            cout<<'#';
        }
        cout<<endl;
    }
}

int main() {
    solution();
    return 0;
}