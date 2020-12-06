//ВЫВЕВСТИ КОЛ-ВО ЭЛЕМЕНТОВ МАССИВА 0; КОЛ-ВО ЭЛЕМЕНТОВ И ОНИ САМИ ВВОДЯТСЯ ПОЛЬЗОВАТЕЛЕМ
#include<iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Russian");
	int n;
	int count;
	int *array = new int[n];
		cout<<"Введите кол-во чисел: ";
		cin>>n;
		for (int i=0;i<n;i++){
			cout<<"Введите "<<i+1<<" число: ";
			cin>>array[n];
			if (array[n]==0){
				count+=1;
			}
		}
		cout<<"Чисел равных 0: "<<count<<endl;
	return 0;
}
