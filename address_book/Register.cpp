#include<iostream>
#include<string.h>
#include<stdlib.h>

#include"Register.h"
#include"RegManager.h"

using namespace std;

void Register :: input() // ��� ���
{
	system("cls");
	
	cout << " �̸��� �Է��ϼ���.\n  �� ";
	cin.getline(name, 10);

	cout << " ��ȭ��ȣ�� �Է��ϼ���.\n  �� ";	
	cin.getline(phon, 15);
	
	cout << " �ּҸ� �Է��ϼ���.\n  �� ";	
	cin.getline(address, 60);

	cout << " E Mail�� �Է��ϼ���.\n  �� "; 
	cin.getline(email, 24);

}
void Register :: input2() // ���� �Ҷ� ��� ���(������ ������ �ڵ� �ҵ��̶� ���� �ҷ��� ������ ���� ���� ����)
{
	system("cls");

	cout << " �̸��� �Է��ϼ���.\n  �� ";
	cin.getline(name, 10);

	cout << " ��ȭ��ȣ�� �Է��ϼ���.\n  �� ";	
	cin.getline(phon, 15);
	
	cout << " �ּҸ� �Է��ϼ���.\n  �� ";	
	cin.getline(address, 60);

	cout << " E Mail�� �Է��ϼ���.\n  �� "; 
	cin.getline(email, 24);

}

void Register :: show(Register temp) // ��� ��� ���
{
	int i = 0;
	cout<< "��������������������������������������������������������������������������������������������������������������������\n"
		<< "��������  �̸�  ��     �ּ�       ��   ��ȭ��ȣ   �� E ����   ��\n"
		<< "��������������������������������������������������������������������������������������������������������������������\n"
		<< "�� "<<"   ";

	cout << "��"<<temp.f_name();
	i = 9- (strlen(temp.f_name()));
	while(i-1)							// ĭ ���� ���߱����� ���� �� ���
	{
		cout << " ";
		i--;
	}

	cout << "��"<<temp.f_adr();
	i = 33- (strlen(temp.f_adr()));

	while(i-1)
	{
		cout << " ";
		i--;
	}
	
	cout << "��"<<temp.f_phon();
	i = 15- (strlen(temp.f_phon()));
	while(i-1)
	{
		cout << " ";
		i--;
	}

	cout << "��"<<temp.f_email();
	i = 20- (strlen(temp.f_email()));
	while(i-1)
	{
		cout << " ";
		i--;
	}
	cout << " ��";
	cout << "\n";
	cout << "������������������������������������������������������������������������������������������\n";
}
