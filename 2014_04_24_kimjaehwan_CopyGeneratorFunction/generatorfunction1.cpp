#include<iostream>
#include<cstring>
using namespace std;
class Book
{
private:
 char *title;
public:
Book(char*string=NULL)
  {
   title=new char[strlen(string)+1];
   strcpy(title,string);
  }
     Book(const Book&copy)
  {
   title=new char[strlen(copy.title)+1];
   strcpy(title,copy.title);
  }
  ~Book()
 {
  delete title;
 }

   
  void Book::showtitle(void)
  {
   cout<<title<<endl;
  }
};
void main(void)
  {
   Book Book1("A C++ Programming");
   Book Book2=Book1;

   Book1.showtitle();
   Book2.showtitle();
  }


