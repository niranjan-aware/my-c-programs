#include<bits/stdc++.h>
//#include<string>
//#include<unordered_map>

class Node{
    char data;
    unordered_map<char,Node*>m;
    bool IsTerminal;
    public:
    Node(char data){
        data=d;
        IsTerminal=false;
    }
};

class Trie{
    Node* root;
    //Insertion
    Public:
    Trie(){
        root=new Node('\0');
    }
    void insert(string word){
        Node* temp=root;
        for(char temp:word){
            if(temp->m.count(ch)==0){
                Node*n=new Node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch];
        }
        temp->IsTerminal=true;
    }
    bool search(string word){
         Node*temp=root;
         for(char ch:word){}
    }
};