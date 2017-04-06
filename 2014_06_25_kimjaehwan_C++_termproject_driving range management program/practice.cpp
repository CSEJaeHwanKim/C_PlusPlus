// 소스코드 자료 : Naver 지식in 및 학우의 도움 참조

#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
using namespace std;

//Member.text 파일에 저장한다.
// id, name, person_number, grade, phone_number 데이터
//기능 : 신규 회원 등록,삭제,변경,조회
//시작할 때 : Member.text 에서 불러온다  
//종료 : Member.text에 저장 한다.

enum {INSERT=1, DELETE, UPDATE, DISPALY, EXIT,MONEY};

//기능 수행 클래스
class Member
{
private:
	char id[20];//회원번호
    char grade[10];//등급
    char name[20];//회원이름
    char person_number[20];//주민등록번호
    char phone_number[20];//휴대전화번호
	char money[1000];//강습료
public:

//get 함수
    char* GetGrade()
	{
		return grade;
	}
    char* GetID()
	{
		return id;
	}
    char* GetName()
	{
		return name;
	}
    char* GetPerson_number()
	{
		return person_number;
	}
    char* GetPhoneNumber()
	{
		return phone_number;
	}
	char* GetMoney()
	{
		return money;
	}
 
//set 함수
    void SetPhoneNumber(char * num)
	{ 
		strcpy_s(phone_number,num);
	}
    void SetPerson_number(char * per)
	{
		strcpy_s(person_number,per);
	}
    void SetID(char *i)
	{
		strcpy_s(id,i);
	}
    void SetName(char * n)
	{
		strcpy_s(name,n);
	}
    void SetGrade(char* g)
	{
		strcpy_s(grade,g);
	}
	 void SetMoney(char* m)
	{
		strcpy_s(money,m);
	}

 //신규등록
    void InsertInfo(Member& m,int*);

 //삭제
    void DeleteInfo(Member* m,int * a);
 
//변경
    void ChangeInfo(Member* m,int b);

//조회
    void CheckInfo(Member* m,int c);

//강습료
	void MoneyInfo(Member* m,int d);
};

//신규등록
void Member::InsertInfo(Member& m,int *i)
{
	char name[20];
    char per[20];
    char phone[20];
    char id[20];
    char grade[10];
	char money[1000];
	cout<<"*****골프장 회원 정보 입력*****"<<endl;
    cout<<"회원번호 입력: ";
    cin>>id;
    cout<<"이름 입력: ";
    cin>>name;
    cout<<"주민등록번호 입력: ";
    cin>>per;
    cout<<"등급 입력: ";
    cin>>grade;
    cout<<"휴대전화 입력: ";
    cin>>phone;
	cout<<"강습료 입력: ";
    cin>>money;
	cout<<"******************************"<<endl;
	
	m.SetGrade(grade);
    m.SetID(id);
    m.SetPerson_number(per);
    m.SetName(name);
    m.SetPhoneNumber(phone);
	m.SetMoney(money);
    cout<<"입력 완료"<<endl<<endl<<endl;
	
    (*i)++;
	system("pause");
	system("cls");
}

//조회
void Member::CheckInfo(Member* m,int c)
{
	int i;
	char nameInput[20] = {0,}; 
	char out[20] = {0,};
	int k = 0;
	int quit = 0;

	if(c==0)
	{
		cout<<"데이터가 없습니다!"<<endl;
        return;
    }
	
	for(i=0;i<c;i++)
	{
		cout<<"***********************등록된 회원정보*****************************************"<<endl;
		cout<<" 회원번호: "<<m[i].id<<" 성명:"<<m[i].name<<" 주민등록번호: "<<m[i].person_number<<" 등급: "<<m[i].grade<<" 휴대전화번호: "<<m[i].phone_number<<" 강습료: "<<m[i].money<<endl;
		cout<<"*******************************************************************************"<<endl<<endl<<endl;
		quit=0;
    }
	system("pause");
	system("cls");

//이름별 검색
	fflush(stdin);
	printf(" 검색할 이름을 입력하세요.\n");

	cout<< " 입력 : " ;
	cin>> nameInput;
	
	
	for(k = 0; k < c; k ++)
	{
		if(strcmp(m[k].name, nameInput)==0)
		{
			cout<<"***********************등록된 회원정보*****************************************"<<endl;
			cout<<" 회원번호: "<<m[k].id<<" 성명:"<<m[k].name<<" 주민등록번호: "<<m[k].person_number<<" 등급: "<<m[k].grade<<" 휴대전화번호: "<<m[k].phone_number<<" 강습료: "<<m[k].money<<endl;
			cout<<"*******************************************************************************"<<endl<<endl<<endl;
			quit++;
		}
		
	}
	
	if(quit==0)
	{
		printf(" 검색된 결과가 없습니다.\n");
		printf(" ---------------------------------------------------------------------------\n");
		printf("\n\n");
	} 
	else{
		printf(" ---------------------------------------------------------------------------\n");
		printf("\n [ 회원이름별 검색 ] 완료\n");
		printf(" ---------------------------------------------------------------------------\n\n\n");
	} 

	fflush(stdin);
	gets(out);
	system("cls");
    
	
}

//삭제
void Member::DeleteInfo(Member* m,int * a)
{
	int i = 0;
    char id[20];
    if(a==0)
	{
		cout<<"데이터가 없습니다!"<<endl<<endl;
		system("pause");
	    system("cls");
        return;
    }

	cout<<"삭제할 회원번호을 입력하세요:";
    cin>>id;
	for(i=0;i<*a;i++)
	{
		if(strcmp(m[i].GetID(),id)==0)
		{
			cout<<i<<endl;
            cout<<"삭제완료 되었습니다."<<endl<<endl;
            m[i] = m[i+1];
			(*a)--;
			system("pause");
	        system("cls");
			return;
		}
    }
	cout<<"회원번호가 없습니다!"<<endl;
	system("pause");
	system("cls");
}

//변경
void Member::ChangeInfo(Member* m,int b)
{
	int i = 0;
    int menu;
    char id[20];
    char name[20];
    char per[20];
    char grade[20];
    char phone[20];
	char money[1000];
	
    if(b==0)
	{
    cout<<"데이터가 없습니다!"<<endl;
	system("pause");
	system("cls");
    return;
	}
    cout<<"변경할 회원번호를 입력하세요:";
    cin>>id;
    for(i=0;i<b;i++)
	{
		if(strcmp(m[i].GetID(),id)==0)
		{
			cout<<"***********************등록된 회원정보*****************************************"<<endl;
			cout<<" 회원번호: "<<m[i].id<<" 성명:"<<m[i].name<<" 주민등록번호: "<<m[i].person_number<<" 등급: "<<m[i].grade<<" 휴대전화번호: "<<m[i].phone_number<<" 강습료: "<<m[i].money<<endl;
	        cout<<"*******************************************************************************"<<endl;
            cout<<"1. 회원번호"<<endl;
            cout<<"2. 성명"<<endl;
            cout<<"3. 주민등록번호"<<endl;
            cout<<"4. 등급"<<endl;
            cout<<"5. 휴대전화번호"<<endl;
			cout<<"6. 강습료 "<<endl;
	        cout<< "변경 사항: " ;
            cin>>menu;
			
    
	switch(menu)
	{
	 case 1:
		 
         cout<<"변경할 회원번호 입력:";
	     cin>>id;
         m[i].SetID(id);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
		 return;

     case 2:
         
         cout<<"변경할 성명 입력:";
	     cin>>name;
	     m[i].SetName(name);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
	     return;

     case 3:
		
         cout<<"변경할 주민등록번호 입력:";
	     cin>>per;
         m[i].SetPerson_number(per);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     case 4:
         
         cout<<"변경할 등급 입력:";
	     cin>>grade;
         m[i].SetGrade(grade);
	     cout<<"   "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     case 5:
         
         cout<<"변경할 휴대전화번호 입력:";
	     cin>>phone;
         m[i].SetPhoneNumber(phone);
	     cout<<"     "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

	case 6:
         
         cout<<"변경할 강습료 입력:";
	     cin>>money;
		 m[i].SetMoney(money);
	     cout<<"     "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     default:
         cout<<"****************************"<<endl;
         cout<<"1~6사이에 값을 입력하세요!"<<endl;
	     cout<<"****************************"<<endl<<endl<<endl;
		 system("pause");
	     system("cls");
         return;
		 
   }
    
		}
 }
	cout<<"해당되는 회원번호가 없습니다!"<<endl;
	system("pause");
	system("cls");
}
//강습료
void Member::MoneyInfo(Member* m,int d)
{
	cout<<"등급별 강습료"<<endl;
    cout<<" S : 5$ "<<endl;
	cout<<" A : 10$ "<<endl;
	cout<<" B : 20$ "<<endl;
	cout<<" C : 30$ "<<endl;
	cout<<" D : 40$ "<<endl;
	system("pause");
	system("cls");
}

////입출력 클래스
class SaveMember
{
private:
	char name[20];
    char id[20];
    char person_number[20];
    char grade[10];
    char phone_number[20];
	char money[1000];
public:
	void DataSave(Member*,ifstream& fin,int*);

};

void SaveMember::DataSave(Member* m,ifstream& fin,int* i)
{
	fin>>name;
    fin>>id;
    fin>>person_number;
    fin>>grade;
    fin>>phone_number;
	fin>>money;
    m[*i].SetName(name);
    m[*i].SetID(id);
    m[*i].SetPerson_number(person_number);
    m[*i].SetGrade(grade);
    m[*i].SetPhoneNumber(phone_number);
	m[*i].SetMoney(money);
	
	if(!fin.eof())
    (*i)++;
}

int main(void)
{
	char inputYN = 0;
	int exit = 0;
    printf("┌─────────────┐\n");
	printf("│ 골프 연습장 관리프로그램 │\n");
	printf("└─────────────┘\n\n");

	do
	{
		cout<<" 프로그램을 시작하시겠습니까?? ( Y / N )"<<endl;;
        cout<<" 입력 : ";
		cin>> inputYN;

		if(inputYN == 'Y' || inputYN == 'y')
		{
			exit = 0;

			system("cls");
			printf("┌────────────┐\n");
			printf("│ 프로그램을 실행합니다. │\n");
			printf("└────────────┘\n\n");
			exit = 1;
		} 

		else if(inputYN == 'N' || inputYN == 'n')
		{
			system("cls");
			exit = 1;
			printf("┌───────────────┐\n");
			printf("│ 프로그램을 실행하지 않습니다.│\n");
			printf("└───────────────┘\n\n");
			return 0;
		} 

		else
		{
			exit = 0;
			system("cls");

			printf("┌──┐\n");
			printf("│ !! ├──────────┐\n");
			printf("└─┬┘                    │\n");
			printf("    │입력이 잘못되었습니다.│\n");
			printf("    │다시 입력해 주세요.   │\n");
			printf("    └───────────┘\n\n");
		} 
	} while(exit != 1);

	int i=0;
    int menu;
    Member member[30];

//Member text 에서 불러오기
    SaveMember savemember;
    ifstream fin;
    fin.open("Member.txt");
    if(fin.fail())
	{
		cout<<"Member.text 파일을 만드세요!"<<endl;
        return 0;
    }
	
	while(fin.eof()==false)
	{
		savemember.DataSave(member,fin,&i);
    }
	fin.close();
	while(1)
	{
		cout<<"***골프장 관리***"<<endl;
		cout<<"1. 등록"<<endl;
        cout<<"2. 삭제"<<endl;
        cout<<"3. 변경"<<endl;
        cout<<"4. 조회"<<endl;
		cout<<"5. 종료"<<endl;
        cout<<"6. 강습료"<<endl;
		cout<<"****************"<<endl;
		cout<< " 기능을 선택하시오: ";
        cin>>menu;
		if(menu==EXIT)
			break;
		switch(menu)
		{
		case INSERT:
        member[i].InsertInfo(member[i],&i);
        break;

        case DELETE:
        member[i].DeleteInfo(member,&i);
   
		case UPDATE:
        member[i].ChangeInfo(member,i);
        break;
   
		case DISPALY:
        member[i].CheckInfo(member,i);
        break;

		case MONEY:
		member[i].MoneyInfo(member,i);
		break;
   
		default:
		cout<<"********************"<<endl;
        cout<<"1~6만 입력바랍니다."<<endl;
		cout<<"********************"<<endl;
		system("pause");
		system("cls");
        break;
		}

 }
	cout<<"이용해 주셔서 감사합니다! 프로그램을 종료합니다."<<endl;
	
// Member.text 에 저장
    ofstream out;
    out.open("Member.txt");
	for(int j=0;j<i;j++)
		out<<member[j].GetName()<<" "<<member[j].GetID()<<" "<<member[j].GetPerson_number()<<" "<<member[j].GetGrade()<<" "<<member[j].GetPhoneNumber()<<member[j].GetMoney()<<endl;
    out.close();
	return 0;
}