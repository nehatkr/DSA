#include <iostream>
using namespace std;

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;
    for(int i=2; i<number; i++){
        if(number%i == 0){
            cout<<" Given Number is not a prime number "<<endl;
            break;
        }else{
            cout<<" Given Number is a prime number ";
            break;
        }
    }


   
    return 0;
}