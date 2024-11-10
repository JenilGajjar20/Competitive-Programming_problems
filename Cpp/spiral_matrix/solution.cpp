#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        int x=0,y=0;
        vector<int>vec;
        int top=0,bottom=row-1,left=0,right=col-1;
        while(top<=bottom&& left<=right){
            for(int i=left;i<=right;++i){
                vec.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;++i){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;--i){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;--i){
                vec.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return vec;
    }

int main(){
    cout<<"Enter number of rows and columns"<<endl;
    int numberOfRows,numberOfColumns;
    cin>>numberOfRows>>numberOfColumns;

    vector<vector<int>> matrix;
    cout<<"Enter the matrix values"<<endl;
    
    for(int i=0;i<numberOfRows;++i){
        vector<int> temp;
        for(int j=0;j<numberOfColumns;++j){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        matrix.push_back(temp);
    }

    vector<int> spiralMatrix =spiralOrder(matrix);
    cout<<"Spiral order print:"<<endl;
    for(auto val:spiralMatrix){
        cout<<val<<" ";
    }
    cout<<endl;
}