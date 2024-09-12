#include <iostream>
using namespace std;

int main(){
int i, jumlah; {
    for (i = 11; i >=1; i --) {
    	if (i % 2 != 0){
            cout << i << endl;
            jumlah= jumlah + i;
        }
    }
    cout <<"jumlahnya ="<< jumlah<< endl;
}
}
