#include<iostream>
using namespace std;
int main()
{
    const int maxn=100,coursen=5;
	int sum=0,n,score[maxn][coursen];
	float average[coursen];
	char *sub;
    sub=new char[10];/*z������ʹ�õĶ�̬��������ַ����飬subʵ������һ���ַ���ָ�룬Ҳ���Դ洢�ַ�����������ͨ�ı�����ֵ����
	���Ǻ��ַ������������һ�������ַ�ĵ�λ*/
	//sub subject[coursen]={"math","engligh","chinese","science","politics"};
	cout<<"�������Ӧ��ѧ��"<<endl;
	cout<<sub;
    while(sub==NULL)//�����ǽ��ѧ�����������.��ס����������ɿմ����÷�������
	{
		cout <<"��ȷ"<<endl;
		cin>> sub;
		if(sub=="��ѧ")
		{
			n=0;
            cout<<"������ѧ������"<<endl;
		    break;
		}//�������ﲻ������Ķ��巽��
		else if(sub=="Ӣ��")
		{
			n=1;
            cout<<"������ѧ������"<<endl;
		    break;
		}
		else if(sub=="����")
		{  
			n=2;
            cout<<"������ѧ������"<<endl;
			break;
		}
		else if(sub=="��ѧ")
		{
			n=3;
            cout<<"������ѧ������"<<endl;
			break;
		}
	    else if(sub=="����")
		{
			n=4;
            cout<<"������ѧ������"<<endl;
			break;
		}
		else
		{
			cout<<"����������"<<endl;
			sub=NULL;
		}
	}

	return 0;
}