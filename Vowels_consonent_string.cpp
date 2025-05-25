#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void VowelandConsonents(const string &s, int &vowel,int &consonent){
vowel = 0;
consonent = 0;


for(int i=0;i<s.length();i++){
    char ch = s[i];
    if(isalpha(ch)){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        vowel+=1;
    }else{
        consonent+=1;
    }
    }
}

}



int main()
{
    string str;

    cout<<"Enter the string: ";
    getline(cin,str);
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    int vCount=0,cCount=0;
    VowelandConsonents(str,vCount,cCount);

    cout<<"vowels are: "<<vCount<<endl;
    cout<<"consonent are: "<<cCount<<endl;
    
    return 0;
}