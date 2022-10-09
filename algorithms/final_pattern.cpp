#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }
        int start = (row - 1)*2;
        while(start){
            cout<<"*";
            start--;
        } 
        col = n - row + 1;
        while(col >= 1){
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;
    }
}