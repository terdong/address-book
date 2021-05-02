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
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl
	  	 << "┃     **전화번호부 메인메뉴**	  ┃" << endl
		 << "┃                                ┃" << endl
		 << "┃       1. 등록                  ┃" << endl
		 << "┃       2. 검색 및 수정          ┃" << endl
		 << "┃       3. 목록 출력             ┃" << endl
		 << "┃       0. 종료                  ┃" << endl
		 << "┃                                ┃" << endl
		 << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl
		
		<< " 입력: ";
}

void RegManager::MakeRegister()  // 등록 메뉴 멤버
{

	ob.set_amount(index++);
	pArray[ob.get_amount()].input();
	cout <<" "<<index<<" 번에 저장됩니다."<<endl;
	
}


void RegManager::Search()  // 검색 및 수정 멤버
{
	
	int i;
	char k;
	char merong[80];
	memset(merong, NULL, sizeof(merong));
	
	while(1)
	{
		cout<< "┏━━━━━━━━━━━━━━━━┓" << endl
			<< "┃      **전화번호부 검색**       ┃" << endl
			<< "┃    1. 번지 검색                ┃" << endl 
			<< "┃    2. 이름 검색                ┃" << endl 
			<< "┃    3. 전화번호 검색            ┃" << endl 
			<< "┃    0. 메인 메뉴로 돌아가기     ┃" << endl
			<< "┗━━━━━━━━━━━━━━━━┛" << endl
			<< " 입력: ";   
		
		
		cin >> k;
		
		//*****입력 오류 잡아내기*****     
		if (k!='1' && k!='2' &&  k!='3'&&  k!='0' )
		{
			system("cls");
			cout << "입력 오류 : " << k << endl;
		}
		//****************************
		
		if (k == '0') // 종료 요구 잡아내기
		{
			system("cls"); // 화면을 지우고
			break; // 메인 메뉴로 간다!
		}
		
		else
		{
			switch(k)
			{
			case '1' :
			int a;
			cout << " 검색->번지를 입력하세요.\n  → ";
			cin >> a;
			
			  for(i=0 ; i<index ; i++)
			  {
				  if(pArray[i].get_amount()==a != NULL)
				  {
				  	ob.show(pArray[i]);
						cout<< "┏━━━━━━━━━━━━━━━━┓" << endl
							<< "┃    1. 수정                     ┃" << endl 
							<< "┃    0. 메인 메뉴로 돌아가기     ┃" << endl
							<< "┗━━━━━━━━━━━━━━━━┛" << endl
							<< " 입력: ";   	
						
						cin >> k;
						
						//*****입력 오류 잡아내기*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "입력 오류 : " << k << endl;
						}
						//****************************
						if (k == '0') // 종료 요구 잡아내기
						{
							system("cls"); // 화면을 지우고
							break; // 메인 메뉴로 간다
						}
						else
						{
							switch(k)
							{
							case '1':					// 오류문을 통과했다면 다시 수정하게 된다.
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" 번에 저장됩니다."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}						
						}
					}
					else
					{
						system("cls");
						cout << "입력 오류 : " << k << endl;
						break;
					}	
			  }
					break;
				
			case '2' :
				cout << " 검색->이름을 입력하세요.\n  → ";
				cin >> merong;
				
				for(i=0 ; i<index ; i++)
				{
					if(strstr(pArray[i].f_name(), merong) != NULL)
					{
						ob.show(pArray[i]);
						cout<< "┏━━━━━━━━━━━━━━━━┓" << endl
							<< "┃    1. 수정                     ┃" << endl 
							<< "┃    0. 메인 메뉴로 돌아가기     ┃" << endl
							<< "┗━━━━━━━━━━━━━━━━┛" << endl
							<< " 입력: ";   	
						
						cin >> k;
						
						//*****입력 오류 잡아내기*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "입력 오류 : " << k << endl;
						}
						//****************************
						if (k == '0') // 종료 요구 잡아내기
						{
							system("cls"); // 화면을 지우고
							break; // 메인 메뉴로 간다
						}
						else
						{
							switch(k)
							{
							case '1':
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" 번에 저장됩니다."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}						
						}
					}
					else
					{
						system("cls");
						cout << "입력 오류 : " << k << endl;
						break;
					}			
				}
					break;
			case '3' :
				cout << " 검색->전화번호를 입력하세요.\n  → ";
				cin >> merong;
				
				for(i=0 ; i<index; i++)
				{
					if(strstr(pArray[i].f_phon(), merong) != NULL)
					{
						ob.show(pArray[i]);
						cout<< "┏━━━━━━━━━━━━━━━━┓" << endl
							<< "┃    1. 수정                     ┃" << endl 
							<< "┃    0. 메인 메뉴로 돌아가기     ┃" << endl
							<< "┗━━━━━━━━━━━━━━━━┛" << endl
							<< " 입력: ";   	
						
						cin >> k;
						
						//*****입력 오류 잡아내기*****     
						if (k!='1' && k!='0' )
						{
							system("cls");
							cout << "입력 오류 : " << k << endl;
						}
						//****************************
						
						if (k == '0') // 종료 요구 잡아내기
						{
							system("cls"); // 화면을 지우고
							break; // 메인 메뉴로 간다
						}
						else
						{
							switch(k)
							{
							case '1':
								cin.get();
								pArray[ob.get_amount()].input2();
								cout <<" "<<index<<" 번에 저장됩니다."<<endl;
								ob.show(pArray[ob.get_amount()]);
								break;
							}
							
						}
					}
					else
					{
						system("cls");
						cout << "입력 오류 : " << k << endl;
						break;
					}
				}				
				break;
				}
		}
	}
}

void RegManager::List()  // 목록 출력 메뉴  멤버
{
	
	for(int i=0 ; i<index ; i++)
		ob.show(pArray[i]);
	
}

