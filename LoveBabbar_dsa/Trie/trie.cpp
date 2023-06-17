/*
Trie - Trie is a type of k-ary search tree used for storing and searching a specific key from a set. Using Trie, search complexities can be brought to optimal limit (key length). 
Trie use optimal space
TC - Insertion - O(l) | l =lenght of word
   - Search - O(l)

*/

#include <bits/stdc++.h>
using namespace std;

class TrieNode{

    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i =0; i< 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }

};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

// insert 

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assumption words will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recurssion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

// search

    bool searchUtil(TrieNode* root, string word){

        //base case
        if(word.length()==0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //recurssion
        return searchUtil(child,word.substr(1));

    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }
};

// remove - check last char of word isTerminal true or false // TODO

int main(){

    Trie *t = new Trie();

    t->insertWord("ABCD");

    cout <<"present or not " << t->searchWord("ABC")<< endl;
    
    return 0;
}