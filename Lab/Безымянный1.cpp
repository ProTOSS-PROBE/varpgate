//�������� ���-�� ��������� ������� 0; ���-�� ��������� � ��� ���� �������� �������������
#include<iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Russian");
	int n;
	int count;
	int *array = new int[n];
		cout<<"������� ���-�� �����: ";
		cin>>n;
		for (int i=0;i<n;i++){
			cout<<"������� "<<i+1<<" �����: ";
			cin>>array[n];
			if (array[n]==0){
				count+=1;
			}
		}
		cout<<"����� ������ 0: "<<count<<endl;
	return 0;
}
