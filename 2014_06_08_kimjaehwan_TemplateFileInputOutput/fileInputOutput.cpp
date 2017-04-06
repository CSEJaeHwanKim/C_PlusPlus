#include <iostream>
#include <fstream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
 {
    char str[MAX][MAX];
    ifstream in("input.txt");
       
    ofstream out("output.txt");
    
    int count=0;

    if(!in)
    {
       cout<<"파일 오픈 실패"<<endl;
       return -1;
    }
   
    while(!in.eof())
    {
       in.getline(str[count], 30);
      
       count++;

    }
    for(int i=0; i<count; i++)
    {
       out<<i+1<<": "<<str[i]<<endl;
    }
    in.close();
    out.close();
    return 0;
}
