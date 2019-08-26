#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdio.h>
#include <climits>
#include <cstring>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    vector<int> heigts;
    int x;
    for(int i =0; i < cases; i++){
        int high_jump=0;
        int low_jump= 0;
        cin >> x;
        for ( int j = 0; j < x ; j++){
            int height;
            cin >> height;
            heigts.push_back(height);
        }
        for(int k = 0; k < heigts.size()-1; k++){
            if(heigts[k]<heigts[k+1]){
                high_jump=high_jump+1;
            }
            else if(heigts[k]>heigts[k+1]){
                low_jump=low_jump+1;
            }
        }
        int tam = heigts.size();
        for(int k = 0; k <tam;k++){
            heigts.pop_back();
        }
        cout << "Case " << i+1 <<":" <<" " << high_jump << " " << low_jump << endl;
    }
}
