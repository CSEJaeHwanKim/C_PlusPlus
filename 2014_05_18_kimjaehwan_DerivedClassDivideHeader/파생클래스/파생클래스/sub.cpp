
#include<iostream>
using namespace std;
class Student
{
protected:
int grade;
int ban;
char *name;
public:
Student(int grade1, int ban1 , char*name1)
{
grade=grade1;
ban=ban1;
name=name1;
}

void print_student()
{
cout<<"ÇĞ³â:"<<grade<<endl;
cout<<"¹İ:"<<ban<<endl;
cout<<"ÀÌ¸§:"<<name<<endl;
}

};
class Student_Freshman:public Student
{
char *juminbunho;
char *sex; 
char *juso;
public:
Student_Freshman(int grade, int ban, char* name, char *juminbunho1, char *sex1, char *juso1):Student(grade,ban,name)
{

juminbunho=juminbunho1;
sex=sex1;
juso=juso1;
}

void Print_Student_Freshman()
{
print_student();
cout<<"ÁÖ¹Î¹øÈ£:"<<juminbunho<<endl;
cout<<"¼ºº°:"<<sex<<endl;
cout<<"ÁÖ¼Ò:"<<juso<<endl;
}
};

int main(void)
{
Student A1(2,5,"È«±æµ¿");
Student_Freshman A2(1,1,"±è»ï¼ø","123456-123456","³²","´ë±¸");
A1.print_student();
A2.Print_Student_Freshman();
return 0;
}