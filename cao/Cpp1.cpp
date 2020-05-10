#include<iostream>
using namespace std;
int main()
{
    const int maxn=100,coursen=5;
	int sum=0,n,score[maxn][coursen];
	float average[coursen];
	char *sub;
    sub=new char[10];/*z这里我使用的动态的申请的字符数组，sub实际上是一个字符型指针，也可以存储字符串，他和普通的变量赋值类似
	但是和字符数组相比他多一个储存地址的单位*/
	//sub subject[coursen]={"math","engligh","chinese","science","politics"};
	cout<<"请输入对应的学科"<<endl;
	cout<<sub;
    while(sub==NULL)//这里是解决学科输入的问题.记住这个是数组变成空串的用法！！！
	{
		cout <<"正确"<<endl;
		cin>> sub;
		if(sub=="数学")
		{
			n=0;
            cout<<"请输入学生分数"<<endl;
		    break;
		}//所以这里不用数组的定义方法
		else if(sub=="英语")
		{
			n=1;
            cout<<"请输入学生分数"<<endl;
		    break;
		}
		else if(sub=="语文")
		{  
			n=2;
            cout<<"请输入学生分数"<<endl;
			break;
		}
		else if(sub=="科学")
		{
			n=3;
            cout<<"请输入学生分数"<<endl;
			break;
		}
	    else if(sub=="政治")
		{
			n=4;
            cout<<"请输入学生分数"<<endl;
			break;
		}
		else
		{
			cout<<"请重新输入"<<endl;
			sub=NULL;
		}
	}

	return 0;
}