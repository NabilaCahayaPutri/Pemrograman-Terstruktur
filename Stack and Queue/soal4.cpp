#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int bilangan[N];
    
    for(int i = 0; i < N; i++){
        cin >> bilangan[i];
    }
    for(int i = 0; i < N; i++){
        if(bilangan[i] % 2 != 0){
            cout << bilangan[i] << " ";
        }
    }
    return 0;
}