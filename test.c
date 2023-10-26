#include <stdio.h>

typedef struct stu 
{
	char name[19];
	short age;
	char tele[12];
	char sex[2];

}stu;
print1(stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.sex);
}


int main()
{
	stu tmp = { "ÕÅÓî",20,"123456789","ÄĞ"};
	print1(tmp);
	return 0;
}












//struct S 
//{
//	int age;
//	char name[10];
//	char a[2];
//	int back;
//};
//struct T
//{
//	int number;
//	char banji[10];
//	char xuexiao[20];
//	char *pc;
//	struct S s;
//
//};
//int main()
//{
//	char arr[20] = "hello,world";
//	struct T t = { 20,"jiqiren","huanghejiaotong",arr,{15,"Íú²Æ",'w',8}};
//	printf("%d\n",t.s.age);
//	printf("%s\n",t.s.a);
//	printf("%s\n",t.s.name);
//	printf("%d\n",t.number);
//	printf("%s\n",t.xuexiao);
//
//	return 0;
//}