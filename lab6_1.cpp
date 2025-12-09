#include<iostream>
using namespace std;

int main(){
    int Even = 0;
    int Odd = 0;
    int n;
    
    while (n != 0){
        cout << "Enter an integer: ";
        cin >> n;
        if (n % 2 == 0){
            Even++;
        }
        else{
            Odd++;
        }
    }
    
    cout << "#Even numbers = " << Even-1 << "\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
