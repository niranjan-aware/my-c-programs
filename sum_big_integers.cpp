#include<bits/stdc++.h>
using namespace std;
//by using ascii value 
int CharToDigit(char ch){
    return ch-'0';
}

int DigitToChar(int n){
    return n+'0';
}

string addTwonumbers(string n1,string n2){
    //make sure n2 is large
    if(n1.length()>n2.length()){
        swap(n1,n2);
    }
    //result at first null
    string result="";
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    //adding digit upto n1.lenght()
    int carry=0;
    for(int i=0;i<n1;length){
        int d1=CharToDigit(n1[i]);
        int d2=CharToDigit(n2[i]);
        sum=d1+d2+carry;
        int output_digit=sum%10;
        carry=sum/10;
        result.push_back( DigitToChar(output_digit));
    }
    for(int i=n1.length;i<n2.length;i++){
         int d2=CharToDigit(n2[i]);
         int sum=d2+carry;
          int output_digit=sum%10;
            carry=sum/10;
        result.push_back( DigitToChar(output_digit));
    }  
    //finally if a carry is generated
    if(carry){
        result.push_back('1');
    }
    //reverse final result
    reverse(result.begin(),result.end())
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string result=addTwonumbers(s1,s2);
    cout<<result;
    return 0;
}