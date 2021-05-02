// Register Class
#ifndef _REGISTER_H_
#define _REGISTER_H_

class Register
{
	char name[11];  // 이름(한글 최대 4자가 들어간다)
	char address[61]; // 주소
	char phon[16]; // 전화번호
	char email[25]; // E메일
	int amount;

public :
	Register() {}
	~Register() {}
	
	void set_amount(int a) { amount = a; }
	int get_amount() { return amount; }

	char* f_email() { return email;}
	char* f_name() { return name;}
	char* f_adr()  { return address;}
	char* f_phon()  { return phon;}

	void input();
	void input2();
	void show(Register temp);
	
};

#endif