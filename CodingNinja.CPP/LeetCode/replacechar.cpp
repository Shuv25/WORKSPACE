#include<iostream>

using namespace std;

void replace(string str)
{
    int spaces_count = 0;
    int i;
    for( i  = 0 ; i < str.length() ; i++){
        if(str[i] == ' ' ){
            spaces_count++;
        }
    }
    
    int new_length = i + spaces_count * 2 + 1;
    
    int index = new_length - 1;
    
    str[index--] = '\0';
    
    for(int j = i - 1 ; j >=0 ; j--){
        if(str[j] == ' '){
            str[index] = '0';
            str[index-1] = '4';
            str[index-2] = '@';
            index = index - 3;
        }
        else{
            str[index] = str[j];
            index--;
        }
    }
    
    for(int i=0;i<new_length;i++)
    {
        cout<<str[i];
    }
}

int main()
{
    string str;
    cout<<"Enter the sentance:";
    getline(cin,str);

    replace(str);
    return 0;
}