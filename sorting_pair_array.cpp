#include<bits/stdc++.h>
using namespace std;


int calculate_total(vector<int>marks){
    return marks[0]+marks[1]+marks[2]+marks[3];
}


bool compare(pair<string,vector<int>>s1,pair<string,vector<int>>s2){
     vector<int>m1=s1.second;
     vector<int>m2=s2.second;
    return calculate_total(m1)>calculate_total(m2);
}


int main(){
     vector<pair<string,vector<int>>>students_marks={
         {"niroba",{99,96,98,100}},
         {"om",{33,45,67,89}},
         {"ram",{66,78,89,67}},
         {"sham",{23,45,67,89}}
     };
     sort(students_marks.begin(),students_marks.end(),compare);
     for(auto x:students_marks){
         cout<<x.first<<" "<<" "<<calculate_total(x.second)<<endl;
     }


    return 0;
}