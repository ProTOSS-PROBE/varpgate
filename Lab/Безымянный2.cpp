//написать программу, которая в вводимом с клавиатуры тексте выберет слова заканчивающиеся согласной буквой и выведет их на экран
#include<iostream>

using namespace std;

int main(){
	
	string str;
	int i,f;
	int *arr = new int[f];
	getline(cin,str);
	f=0;
	string glas = "qwrtpsdfghjklzxcvbnm";
	for(i=0;i<=str.size();i++){
		if (str[i]==' '){
			arr[f]=i;
			f+=1;
		}
	}
	for (i=0;i<f;i++){
		cout<<arr[i];
	}
	for(i=0;i<f;i++){
		if (str[arr[i]-1]==) {
			
		}
	}
	return 0;
}
