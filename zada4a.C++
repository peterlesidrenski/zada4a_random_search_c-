#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int nominal[4] = {50, 20, 10, 5};
    cout << "Enter sum in euro: ";
    double sum = 0.0;
    int  C_count = 0, T_count = 0, index = 0;
    cin >> sum;
    sum = round(sum * 100); 
    while (sum > 0 ){
        if (sum - nominal[index] >= -0){
            sum -= nominal[index];
            C_count++;
            T_count++;
            cout << C_count << " nominal is " << nominal[index] << " cents" << endl;
            cout << "Left : " << sum << " cents" << endl;       
        }else{
            index++;
            C_count = 0;
            if (index > 3){
                cout << "\n Not enough nominals for this sum" << endl;
                break; 

            }
        }   
    }
    cout << "\nNumber of all of the nominals used " << T_count << endl;
    return 0;
}
