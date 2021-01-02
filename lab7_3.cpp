#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
    int A,H,P;
    string status;
    cout << "Enter your age: ";
    cin >> A;

    if(A <= 20){
        cout << "Enter your height: ";
        cin >> H;
        if(H < 160){
            status = "UNFRIEND";
        }else if(H < 175){
            status = "FRIEND";
        }else{
            cout << "Enter your property: ";
            cin >> P;
            
            if(P > 69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }else if(A < 30){
        cout << "Enter your property: ";
        cin >> P;

        if(P > 10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }
    cout << "Your status = " << status;
    return 0;
}
