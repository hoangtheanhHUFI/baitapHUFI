#include <iostream.h>
using namespace std; 
struct SinhVien {
	char name[20];
	int age, mssv;
}; typedef SinhVien sv;
struct linkedlist {
	sv data;
	linkedlist* next;
}; typedef linkedlist node;


int main()
{
	cout << "Hello word" << endl;
	system("pause");
	return 0;
}