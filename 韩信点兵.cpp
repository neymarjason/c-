#include<iostream> 
using namespace std;

class HanXin
{
	public:
		void line3(int t)
		{
			a=t;
		};
		void line5(int t)
		{
			b=t;
		};
		void line7(int t)
		{
			c=t;
		};
		void showMany()
		{
		    num = 70*a+21*b+15*c-105;
			for (int i=1;i<10;i++)
			{
				if (num>105)
				num=num-105;
			}
			if(num>10&&num<100)
			cout<<num<<endl;
			else
			cout<<"Impossible"<<endl;
	    } 
		
	private:
		int a,b,c,num;
		
};

int main() 
{
    int n, n1, n2, n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) 
	{
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //����
        hx.line3(n1);  //3��һ��
        hx.line5(n2);   //5��һ��
        hx.line7(n3);   //7��һ��
        hx.showMany();
    }
}
