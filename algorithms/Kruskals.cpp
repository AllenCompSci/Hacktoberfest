#include<bits/stdc++.h>
#define I INT_MAX

using namespace std;

int edges[3][9]={
                {1,1,2,2,3,4,4,5,5},
                {2,6,3,7,4,5,7,6,7},
                {28,10,16,14,12,22,18,25,24}
                };

//Making array for applying dijoint theory :: 
int s[8] = {-1,-1,-1,-1,-1,-1,-1,-1};

//Disjoint set Union and Find func ::
void Union(int a, int b){
    if(s[a] < s[b]){
        s[a]  += s[b];
        s[b] = a;
    }
    else{
        s[b] += s[a];
        s[a] = b;
    }
}

int find(int a){
    int x = a,v=0;
    while(s[x] > 0){
        x = s[x];
    }
    return x;   
}

int include[8] = {0};

int indexStore[2][6];

int main(){
    int i=0,k,u,v;
    while(i<6){
        int min = I;
        for(int j=0;j<9;j++){
            if(include[j]!=1 && edges[2][j] < min){
                min = edges[2][j];
                k=j; u=edges[0][j];v=edges[1][j];
            }
        }
        include[k] = 1;
        
        if(find(u)!=find(v)){
            indexStore[0][i] = u; indexStore[1][i] = v;
            Union(find(u),find(v));
            i++;
        }
    }

    for(int j=0;j<6;j++){
        cout<<"( "<<indexStore[0][j]<<" , "<<indexStore[1][j]<<" )"<<endl;
    }
}
