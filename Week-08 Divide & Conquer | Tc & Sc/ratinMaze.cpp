#include <iostream>
#include <vector>
using namespace std;

    void allPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool> >& visited){
        if(srcX == row-1 && srcY == col -1 ){
            cout << output << " ";
            return;

        // up 
            // possiblity uper path close ho 
            //Path colse ho
            //out of bound  // Created a function that handle the possiblities
            if(isSafe(srcX -1 ,srcY , visited)){
                // mark visited 
                // call recursion
                //backtraing
                
                
            }

        // right 

            if(isSafe()){
                if(isSafe(srcX -1 ,srcY , visited))
                // mark visited 
                // call recursion
                //backtraing
                
            }

        //down

            if(isSafe()){
                if(isSafe(srcX -1 ,srcY , visited))
                // mark visited 
                // call recursion
                //backtraing
                
            }

        // left

            if(isSafe()){
                if(isSafe(srcX -1 ,srcY , visited))
                // mark visited 
                // call recursion
                //backtraing
                
            }

        }
    }

    bool isSafe( int newX, int newY,vector<vector<bool> >& visited ){
        if( newX >= 0 && newX <=4 &&  newY >= 0 && newY <=4  ){
            visited[newX][newY] == -1;
            return true;
        }
        
        return false;
    }
 
int main (){

    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {1,1,1,1}
    };
    int srcX =0;
    int srcY = 0;
    int row =4;
    int col =4;
    string output ="";
    for(int i =0; i < row; i++){
        for(int j =0; j < col ; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<bool> > visited(row,vector<bool>(col, false));

    if(maze[0][0] == 0){
        // src ki postion hi closed hai
        cout << "No path Exists" << endl;
        return 0;
    }
    visited[srcX][srcY] == true;    
    allPath(maze, row, col, srcX, srcY, output, visited);
    cout << output << endl;
 
return 0;
}