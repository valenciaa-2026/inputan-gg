#include <iostream>
using namespace std;
int main() {
    int bilangan;
    cout<<"masukkan bilangan: ";
    cin>>bilangan;
    if(bilangan % 2 == 0) {
        cout<<"bilangan ini merupakan bilangan genap.";
    }
    else{
        cout<<"bilangan ini merupakan bilangan ganjil.";
    }
    system("pause");
    return 0;
}
