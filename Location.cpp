#include <iostream>
using namespace std;
  
int main(){
    int input[100], count, i, num;
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
    cout << "Enter " << count << " numbers \n";
    fo
    }
    cout << "Enter a number to serach in Array\n";
    cin >> num;
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element Location " << i+1;
            break;
        }
    }
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }

    return 0;
}r(i = 0; i < count; i++){
        cin >> input[i];
