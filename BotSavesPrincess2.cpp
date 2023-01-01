#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    int rPrincess, cPrincess;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j]=='p'){
                rPrincess = i;
                cPrincess = j;
            }
        }
    }
    
    if(rPrincess==r){
        if(cPrincess>c) cout << "RIGHT";
        else cout << "LEFT";
    }
    else if(cPrincess==c){
        if(rPrincess>r) cout << "DOWN";
        else cout << "UP";
    }
    else{
        if(cPrincess>c) cout << "RIGHT";
        else cout << "LEFT";
    }
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
