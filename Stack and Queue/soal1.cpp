#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    queue<int>q;
    vector<pair<string,int>>operations;
    
    for(int i = 0; i < N; i++){
        string command;
        cin >> command;
        
        if(command == "push"){
            int bilangan;
            cin >> bilangan;
            operations.push_back(make_pair(command,bilangan));
        } else if(command == "pop"){
            operations.push_back(make_pair(command, -1));
        }
    }
    for(const auto &op : operations){
        if(op.first == "push"){
            q.push(op.second);
        }else if (op.first =="pop"){
            if(!q.empty()){
                q.pop();
            }
        }
        queue<int>temp = q;
        while(!temp.empty()){
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}