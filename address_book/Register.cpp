#include<iostream>
#include<string.h>
#include<stdlib.h>

#include"Register.h"
#include"RegManager.h"

using namespace std;

void Register :: input() // 등록 멤버
{
	system("cls");
	
	cout << " 이름을 입력하세요.\n  → ";
	cin.getline(name, 10);

	cout << " 전화번호를 입력하세요.\n  → ";	
	cin.getline(phon, 15);
	
	cout << " 주소를 입력하세요.\n  → ";	
	cin.getline(address, 60);

	cout << " E Mail을 입력하세요.\n  → "; 
	cin.getline(email, 24);

}
void Register :: input2() // 수정 할때 등록 멤버(이유는 번지는 자동 할동이라 구별 할려구 했으나 번지 적용 실패)
{
	system("cls");

	cout << " 이름을 입력하세요.\n  → ";
	cin.getline(name, 10);

	cout << " 전화번호를 입력하세요.\n  → ";	
	cin.getline(phon, 15);
	
	cout << " 주소를 입력하세요.\n  → ";	
	cin.getline(address, 60);

	cout << " E Mail을 입력하세요.\n  → "; 
	cin.getline(email, 24);

}

void Register :: show(Register temp) // 목록 출력 멤버
{
	int i = 0;
	cout<< "┏━━━━┳━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━┳━━━━━━━━━━┓\n"
		<< "┃번지┃  이름  ┃     주소       ┃   전화번호   ┃ E 메일   ┃\n"
		<< "┣━━━━╋━━━━━━━━╋━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━╋━━━━━━━━━━┫\n"
		<< "┃ "<<"   ";

	cout << "┃"<<temp.f_name();
	i = 9- (strlen(temp.f_name()));
	while(i-1)							// 칸 수를 마추기위해 와일 문 사용
	{
		cout << " ";
		i--;
	}

	cout << "┃"<<temp.f_adr();
	i = 33- (strlen(temp.f_adr()));

	while(i-1)
	{
		cout << " ";
		i--;
	}
	
	cout << "┃"<<temp.f_phon();
	i = 15- (strlen(temp.f_phon()));
	while(i-1)
	{
		cout << " ";
		i--;
	}

	cout << "┃"<<temp.f_email();
	i = 20- (strlen(temp.f_email()));
	while(i-1)
	{
		cout << " ";
		i--;
	}
	cout << " ┃";
	cout << "\n";
	cout << "┗━━┻━━━━┻━━━━━━━━━━━━━━━━┻━━━━━━━┻━━━━━━━━━━┛\n";
}
