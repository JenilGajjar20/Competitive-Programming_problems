/*
logic:-
--> making a trie with all the strings given
--> whenever inserting a new char into trie node incrementing freq value to +1
--> so the same char trie nodes remains as freq 1 
--> taking the small length string and checking in it which character node encounters first freq value>1
--> so which means that after that part the char nodes are different for which the freq changes i.e freq=2 means 2 different char nodes
--> so we will take the part of substring before freq > 1
*/


import java.util.*;
class Node{
    Node links[]=new Node[26];
    int freq=0;
    Node(){}
    boolean containsKey(char ch){
        return links[ch-'a']!=null;
    }
    void put(char ch,Node node){
        links[ch-'a']=node;
    }
    Node get(char ch){
        return links[ch-'a'];
    }
    void infreq(){
        freq++;
    }
    int getfreq(){
        return freq;
    }
}
class Trie{
   static Node root;
    Trie(){
        root=new Node();
    }
    public static void insert(String word){
        Node node=root;
        for(int i=0;i<word.length();i++){
            if(!node.containsKey(word.charAt(i))){
                node.put(word.charAt(i),new Node());
                node.infreq();
            }
            node=node.get(word.charAt(i));
        }
    }
    public static String search(String word){
        Node node=root;
        String str="";
        for(int i=0;i<word.length();i++){
            if(node.getfreq()!=1)return str;
            str+=word.charAt(i);
            node=node.get(word.charAt(i));
        }
        return str;
    }
}
public class Solution {
    static Trie root=new Trie();
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String str[]=new String[n];
        for(int i=0;i<n;i++){
            str[i]=sc.next();
        }
        
        System.out.println(longestCommonPrefix(str));
    }
    public static String longestCommonPrefix(String[] strs) {
        
        int min=(int)1e9;String p="";
        for(String x:strs){
            root.insert(x);
            if(x.length()<min){
                min=x.length();
                p=x;
            }
        }
        return root.search(p);
    }
}
