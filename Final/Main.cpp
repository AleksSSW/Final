#include <iostream>
#include<cstdlib>
#include<ctime>;
#include<algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	int sum;

	std::cout << "hello world!\n\n";
	//������ 1. ���������� �������� �������
	/*std::cout << "������ 1.\n����������� ������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1; //[1..10]
		std::cout << arr1[i] << ' ';

	}
	std::cout << '\n';
	//����������� ����������
	//for(int i=size1-1;i>0; i--)//�������� � �������� ��������, ������� ������������
		//for (int j = 0; j < i; j++) {
			//if (arr1[j] > arr1[j + 1])//���������, �������� �� ������� ������� ������, ��� ����������
				//std::swap(arr1[j], arr1[j + 1]);//������ �������� �������
              //} 
				//������� ����������:
	std::sort(arr1, arr1+5);

	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/
	//������ 2. ����������� � ������
	/*std::cout << "������ 2.\n����������� �� ��� ��� ������:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1+1-(-30))+(-30); //[-30..-1] �.� -30 ������ ��� -1, �� ��� ����� ������������ � ������
		std::cout << arr2[i] << " ,";
      }
	std::cout << "\b\b.\n";
	sum = 0; // ����� ��� �������� ���������������
	int counter = 0;// ���-�� ���� ��� < n;
	std::cout << "������� ������������ ������� ����������� (�� -30 �� -1)-> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "���-�� ����, ����� ����������� ���������� ����" << n << " ��������:" << counter << '\n';
	std::cout << "������� ����������� �� �����: " << (double)sum / size2 << "\n\n";*/
		//������ 3. ��������� � ��������
	/*std::cout << "������ 3. ������� ������ ��������� - > ";
	std::cin >> n;
	std::cout << "������� ����� ��������� -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << " �����:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101; // [0..100]
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;*/
		//������ 4. ���������������. � ������� ������ ������� ������� ������� ������ ��� ������� ������� ����� ���
	std::cout << "������ 4. \n����������� ������:\n";
	const int size4 = 6;
	int arr4[size4];
	int counter = 0;
	srand(time(NULL));
	for (int i = 0; i < size4; i++) {
		arr4[i] = rand() % (20 - 10) + 10;
		std::cout << arr4[i] << " ";
	}
	
	for (int i = 0; i < size4; i++) {
		if (arr4[i] > i-1)
			counter++;
		std::cout << "�������� ������� ��� ����������: " << counter << '\n';
		}
	
	
	return 0;
}