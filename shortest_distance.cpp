#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[100];
    cin.getline(s,100);
    //cout<<s;
    int x=0;
    int y=0;
    for(int i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'N':y++;
                      break;
            case 'E':x++;
                      break;          
            case 's':y--;
                      break;
            case 'W':x--;
                      break;                    
        }
    }
   
        if(x>0&&y>0){
            while(y--){
                cout<<"N";
            }
            while(x--){
                cout<<"E";
            }
        }
        // else if(x>0&&y>0){

        // }
        // else if(x>0&&y>0){}
        // else if(x>0&&y>0){}
    


    return 0;
}