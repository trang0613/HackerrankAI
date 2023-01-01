#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    pair<int, int> princessPosition;
    pair<int, int> botPosition;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j]=='p') princessPosition = make_pair(i, j);
            if(grid[i][j]=='m') botPosition = make_pair(i, j);
        }
    }
    
    if(botPosition.first > princessPosition.first){
        for(int i = 0; i < botPosition.first - princessPosition.first; i++){
            cout << "UP\n";
        }
    }
    else if(botPosition.first < princessPosition.first){
        for(int i = 0; i < princessPosition.first - botPosition.first; i++){
            cout << "DOWN\n";
        }
    }
    
    if(botPosition.second > princessPosition.second){
        for(int i = 0; i < botPosition.second - princessPosition.second; i++){
            cout << "LEFT\n";
        }
    }
    else if(botPosition.second < princessPosition.second){
        for(int i = 0; i < princessPosition.second - botPosition.second; i++){
            cout << "RIGHT\n";
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
