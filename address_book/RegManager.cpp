#include <iostream>
#include<string.h>
#include<stdlib.h>
#include "Register.h"
#include "RegManager.h"

Register ob;

RegManager::RegManager(){ index=0; }

using namespace std;

void RegManager::PrintMenu()
{
	cout << "��������������������������������������������������������������������" << endl
	  	 << "��     **��ȭ��ȣ�� ���θ޴�**	  ��" << endl
		 << "��                                ��" << endl
		 << "��       1. ���                  ��" << endl
		 << "��       2. �˻� �� ����          ��" << endl
		 << "��       3. ��� ���             ��" << endl
		 << "��       0. ����                  ��" << endl
		 << "��                                ��" << endl
		 << "��������������������������������������������������������������������" << endl
		
		<< " �Է�: ";
}

void RegManager::MakeRegister()  // ��� �޴� ���
{

	ob.set_amount(index++);
	pArray[ob.get_amount()].input();
	cout <<" "<<index<<" ���� ����˴ϴ�."<<endl;
	
}


void RegManager::Search()  // �˻� �� ���� ���
{
	
	int i;
	char k;
	char merong[80];
	memset(merong, NULL, sizeof(merong));
	
	while(1)
	{
		cout<< "������������������������������������" << endl
			<< "��      **��ȭ��ȣ�� �˻�**       ��" << endl
			<< "��    1. ���� �˻�                ��" << endl 
			<< "��    2. �̸� �˻�                ��" << endl 
			<< "��    3. ��ȭ��ȣ �˻�            ��" << endl 
			<< "��    0. ���� �޴��� ���ư���     ��" << endl
			<< "������������������������������������" << endl
			<< " �Է�: ";   
		
		
		cin >> k;
		
		//*****�Է� ���� ��Ƴ���*****     
		if (k!='1' && k!='2' &&  k!='3'&&  k!='0' )
		{
			system("cls");
			cout << "�Է� ���� : " << k << endl;
		}
		//****************************
		
		if (k == '0') // ���� �䱸 ��Ƴ���
		{
			system("cls"); // ȭ���� �����
			break; // ���� �޴��� ����!
		}
		
		else
		{
			switch(k)
			{
			case '1' :
			int a;
			cout << " �˻�->������ �Է��ϼ���.\n  �� ";
			cin >> a;
			
			  for(i=0 ; i<index ; i++)
			  {
				  if(pArray[i].get_amount()==a != NULL)
				  {
				  	ob.show(pArray[i]);
						cout<< "������������������������������������" << endl
							<< "��    1. ����                     ��" << endl 
							<< "��    0. ���� �޴��� ���ư���     ��" << endl
							<< "������������������������������������" << endl
							<< " �Է�: ";   	
						
						cin >> k;
						
						//*****�Է� ���� ��Ƴ���*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "�Է� ���� : " << k << endl;
						}
						//****************************
						if (k == '0') // ���� �䱸 ��Ƴ���
						{
							system("cls"); // ȭ���� �����
							break; // ���� �޴��� ����
						}
						else
						{
							switch(k)
							{
							case '1':					// �������� ����ߴٸ� �ٽ� �����ϰ� �ȴ�.
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" ���� ����˴ϴ�."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}						
						}
					}
					else
					{
						system("cls");
						cout << "�Է� ���� : " << k << endl;
						break;
					}	
			  }
					break;
				
			case '2' :
				cout << " �˻�->�̸��� �Է��ϼ���.\n  �� ";
				cin >> merong;
				
				for(i=0 ; i<index ; i++)
				{
					if(strstr(pArray[i].f_name(), merong) != NULL)
					{
						ob.show(pArray[i]);
						cout<< "������������������������������������" << endl
							<< "��    1. ����                     ��" << endl 
							<< "��    0. ���� �޴��� ���ư���     ��" << endl
							<< "������������������������������������" << endl
							<< " �Է�: ";   	
						
						cin >> k;
						
						//*****�Է� ���� ��Ƴ���*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "�Է� ���� : " << k << endl;
						}
						//****************************
						if (k == '0') // ���� �䱸 ��Ƴ���
						{
							system("cls"); // ȭ���� �����
							break; // ���� �޴��� ����
						}
						else
						{
							switch(k)
							{
							case '1':
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" ���� ����˴ϴ�."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}						
						}
					}
					else
					{
						system("cls");
						cout << "�Է� ���� : " << k << endl;
						break;
					}			
				}
					break;
			case '3' :
				cout << " �˻�->��ȭ��ȣ�� �Է��ϼ���.\n  �� ";
				cin >> merong;
				
				for(i=0 ; i<index; i++)
				{
					if(strstr(pArray[i].f_phon(), merong) != NULL)
					{
						ob.show(pArray[i]);
						cout<< "������������������������������������" << endl
							<< "��    1. ����                     ��" << endl 
							<< "��    0. ���� �޴��� ���ư���     ��" << endl
							<< "������������������������������������" << endl
							<< " �Է�: ";   	
						
						cin >> k;
						
						//*****�Է� ���� ��Ƴ���*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "�Է� ���� : " << k << endl;
						}
						//****************************
						
						if (k == '0') // ���� �䱸 ��Ƴ���
						{
							system("cls"); // ȭ���� �����
							break; // ���� �޴��� ����
						}
						else
						{
							switch(k)
							{
							case '1':
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" ���� ����˴ϴ�."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}
							
						}
					}
					else
					{
						system("cls");
						cout << "�Է� ���� : " << k << endl;
						break;
					}
				}				
				break;
				}
		}
	}
}

void RegManager::List()  // ��� ��� �޴�  ���
{
	
	for(int i=0 ; i<index ; i++)
		ob.show(pArray[i]);
	
}

