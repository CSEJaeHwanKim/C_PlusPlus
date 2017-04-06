// �ҽ��ڵ� �ڷ� : Naver ����in �� �п��� ���� ����

#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
using namespace std;

//Member.text ���Ͽ� �����Ѵ�.
// id, name, person_number, grade, phone_number ������
//��� : �ű� ȸ�� ���,����,����,��ȸ
//������ �� : Member.text ���� �ҷ��´�  
//���� : Member.text�� ���� �Ѵ�.

enum {INSERT=1, DELETE, UPDATE, DISPALY, EXIT,MONEY};

//��� ���� Ŭ����
class Member
{
private:
	char id[20];//ȸ����ȣ
    char grade[10];//���
    char name[20];//ȸ���̸�
    char person_number[20];//�ֹε�Ϲ�ȣ
    char phone_number[20];//�޴���ȭ��ȣ
	char money[1000];//������
public:

//get �Լ�
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
 
//set �Լ�
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

 //�űԵ��
    void InsertInfo(Member& m,int*);

 //����
    void DeleteInfo(Member* m,int * a);
 
//����
    void ChangeInfo(Member* m,int b);

//��ȸ
    void CheckInfo(Member* m,int c);

//������
	void MoneyInfo(Member* m,int d);
};

//�űԵ��
void Member::InsertInfo(Member& m,int *i)
{
	char name[20];
    char per[20];
    char phone[20];
    char id[20];
    char grade[10];
	char money[1000];
	cout<<"*****������ ȸ�� ���� �Է�*****"<<endl;
    cout<<"ȸ����ȣ �Է�: ";
    cin>>id;
    cout<<"�̸� �Է�: ";
    cin>>name;
    cout<<"�ֹε�Ϲ�ȣ �Է�: ";
    cin>>per;
    cout<<"��� �Է�: ";
    cin>>grade;
    cout<<"�޴���ȭ �Է�: ";
    cin>>phone;
	cout<<"������ �Է�: ";
    cin>>money;
	cout<<"******************************"<<endl;
	
	m.SetGrade(grade);
    m.SetID(id);
    m.SetPerson_number(per);
    m.SetName(name);
    m.SetPhoneNumber(phone);
	m.SetMoney(money);
    cout<<"�Է� �Ϸ�"<<endl<<endl<<endl;
	
    (*i)++;
	system("pause");
	system("cls");
}

//��ȸ
void Member::CheckInfo(Member* m,int c)
{
	int i;
	char nameInput[20] = {0,}; 
	char out[20] = {0,};
	int k = 0;
	int quit = 0;

	if(c==0)
	{
		cout<<"�����Ͱ� �����ϴ�!"<<endl;
        return;
    }
	
	for(i=0;i<c;i++)
	{
		cout<<"***********************��ϵ� ȸ������*****************************************"<<endl;
		cout<<" ȸ����ȣ: "<<m[i].id<<" ����:"<<m[i].name<<" �ֹε�Ϲ�ȣ: "<<m[i].person_number<<" ���: "<<m[i].grade<<" �޴���ȭ��ȣ: "<<m[i].phone_number<<" ������: "<<m[i].money<<endl;
		cout<<"*******************************************************************************"<<endl<<endl<<endl;
		quit=0;
    }
	system("pause");
	system("cls");

//�̸��� �˻�
	fflush(stdin);
	printf(" �˻��� �̸��� �Է��ϼ���.\n");

	cout<< " �Է� : " ;
	cin>> nameInput;
	
	
	for(k = 0; k < c; k ++)
	{
		if(strcmp(m[k].name, nameInput)==0)
		{
			cout<<"***********************��ϵ� ȸ������*****************************************"<<endl;
			cout<<" ȸ����ȣ: "<<m[k].id<<" ����:"<<m[k].name<<" �ֹε�Ϲ�ȣ: "<<m[k].person_number<<" ���: "<<m[k].grade<<" �޴���ȭ��ȣ: "<<m[k].phone_number<<" ������: "<<m[k].money<<endl;
			cout<<"*******************************************************************************"<<endl<<endl<<endl;
			quit++;
		}
		
	}
	
	if(quit==0)
	{
		printf(" �˻��� ����� �����ϴ�.\n");
		printf(" ---------------------------------------------------------------------------\n");
		printf("\n\n");
	} 
	else{
		printf(" ---------------------------------------------------------------------------\n");
		printf("\n [ ȸ���̸��� �˻� ] �Ϸ�\n");
		printf(" ---------------------------------------------------------------------------\n\n\n");
	} 

	fflush(stdin);
	gets(out);
	system("cls");
    
	
}

//����
void Member::DeleteInfo(Member* m,int * a)
{
	int i = 0;
    char id[20];
    if(a==0)
	{
		cout<<"�����Ͱ� �����ϴ�!"<<endl<<endl;
		system("pause");
	    system("cls");
        return;
    }

	cout<<"������ ȸ����ȣ�� �Է��ϼ���:";
    cin>>id;
	for(i=0;i<*a;i++)
	{
		if(strcmp(m[i].GetID(),id)==0)
		{
			cout<<i<<endl;
            cout<<"�����Ϸ� �Ǿ����ϴ�."<<endl<<endl;
            m[i] = m[i+1];
			(*a)--;
			system("pause");
	        system("cls");
			return;
		}
    }
	cout<<"ȸ����ȣ�� �����ϴ�!"<<endl;
	system("pause");
	system("cls");
}

//����
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
    cout<<"�����Ͱ� �����ϴ�!"<<endl;
	system("pause");
	system("cls");
    return;
	}
    cout<<"������ ȸ����ȣ�� �Է��ϼ���:";
    cin>>id;
    for(i=0;i<b;i++)
	{
		if(strcmp(m[i].GetID(),id)==0)
		{
			cout<<"***********************��ϵ� ȸ������*****************************************"<<endl;
			cout<<" ȸ����ȣ: "<<m[i].id<<" ����:"<<m[i].name<<" �ֹε�Ϲ�ȣ: "<<m[i].person_number<<" ���: "<<m[i].grade<<" �޴���ȭ��ȣ: "<<m[i].phone_number<<" ������: "<<m[i].money<<endl;
	        cout<<"*******************************************************************************"<<endl;
            cout<<"1. ȸ����ȣ"<<endl;
            cout<<"2. ����"<<endl;
            cout<<"3. �ֹε�Ϲ�ȣ"<<endl;
            cout<<"4. ���"<<endl;
            cout<<"5. �޴���ȭ��ȣ"<<endl;
			cout<<"6. ������ "<<endl;
	        cout<< "���� ����: " ;
            cin>>menu;
			
    
	switch(menu)
	{
	 case 1:
		 
         cout<<"������ ȸ����ȣ �Է�:";
	     cin>>id;
         m[i].SetID(id);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
		 return;

     case 2:
         
         cout<<"������ ���� �Է�:";
	     cin>>name;
	     m[i].SetName(name);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
	     return;

     case 3:
		
         cout<<"������ �ֹε�Ϲ�ȣ �Է�:";
	     cin>>per;
         m[i].SetPerson_number(per);
	     cout<<"  "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     case 4:
         
         cout<<"������ ��� �Է�:";
	     cin>>grade;
         m[i].SetGrade(grade);
	     cout<<"   "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     case 5:
         
         cout<<"������ �޴���ȭ��ȣ �Է�:";
	     cin>>phone;
         m[i].SetPhoneNumber(phone);
	     cout<<"     "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

	case 6:
         
         cout<<"������ ������ �Է�:";
	     cin>>money;
		 m[i].SetMoney(money);
	     cout<<"     "<<endl<<endl;
		 system("pause");
	     system("cls");
         return;

     default:
         cout<<"****************************"<<endl;
         cout<<"1~6���̿� ���� �Է��ϼ���!"<<endl;
	     cout<<"****************************"<<endl<<endl<<endl;
		 system("pause");
	     system("cls");
         return;
		 
   }
    
		}
 }
	cout<<"�ش�Ǵ� ȸ����ȣ�� �����ϴ�!"<<endl;
	system("pause");
	system("cls");
}
//������
void Member::MoneyInfo(Member* m,int d)
{
	cout<<"��޺� ������"<<endl;
    cout<<" S : 5$ "<<endl;
	cout<<" A : 10$ "<<endl;
	cout<<" B : 20$ "<<endl;
	cout<<" C : 30$ "<<endl;
	cout<<" D : 40$ "<<endl;
	system("pause");
	system("cls");
}

////����� Ŭ����
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
    printf("������������������������������\n");
	printf("�� ���� ������ �������α׷� ��\n");
	printf("������������������������������\n\n");

	do
	{
		cout<<" ���α׷��� �����Ͻðڽ��ϱ�?? ( Y / N )"<<endl;;
        cout<<" �Է� : ";
		cin>> inputYN;

		if(inputYN == 'Y' || inputYN == 'y')
		{
			exit = 0;

			system("cls");
			printf("����������������������������\n");
			printf("�� ���α׷��� �����մϴ�. ��\n");
			printf("����������������������������\n\n");
			exit = 1;
		} 

		else if(inputYN == 'N' || inputYN == 'n')
		{
			system("cls");
			exit = 1;
			printf("����������������������������������\n");
			printf("�� ���α׷��� �������� �ʽ��ϴ�.��\n");
			printf("����������������������������������\n\n");
			return 0;
		} 

		else
		{
			exit = 0;
			system("cls");

			printf("��������\n");
			printf("�� !! ������������������������\n");
			printf("��������                    ��\n");
			printf("    ���Է��� �߸��Ǿ����ϴ�.��\n");
			printf("    ���ٽ� �Է��� �ּ���.   ��\n");
			printf("    ��������������������������\n\n");
		} 
	} while(exit != 1);

	int i=0;
    int menu;
    Member member[30];

//Member text ���� �ҷ�����
    SaveMember savemember;
    ifstream fin;
    fin.open("Member.txt");
    if(fin.fail())
	{
		cout<<"Member.text ������ ���弼��!"<<endl;
        return 0;
    }
	
	while(fin.eof()==false)
	{
		savemember.DataSave(member,fin,&i);
    }
	fin.close();
	while(1)
	{
		cout<<"***������ ����***"<<endl;
		cout<<"1. ���"<<endl;
        cout<<"2. ����"<<endl;
        cout<<"3. ����"<<endl;
        cout<<"4. ��ȸ"<<endl;
		cout<<"5. ����"<<endl;
        cout<<"6. ������"<<endl;
		cout<<"****************"<<endl;
		cout<< " ����� �����Ͻÿ�: ";
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
        cout<<"1~6�� �Է¹ٶ��ϴ�."<<endl;
		cout<<"********************"<<endl;
		system("pause");
		system("cls");
        break;
		}

 }
	cout<<"�̿��� �ּż� �����մϴ�! ���α׷��� �����մϴ�."<<endl;
	
// Member.text �� ����
    ofstream out;
    out.open("Member.txt");
	for(int j=0;j<i;j++)
		out<<member[j].GetName()<<" "<<member[j].GetID()<<" "<<member[j].GetPerson_number()<<" "<<member[j].GetGrade()<<" "<<member[j].GetPhoneNumber()<<member[j].GetMoney()<<endl;
    out.close();
	return 0;
}