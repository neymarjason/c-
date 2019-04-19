#include<iostream> 
using namespace std;

class Number
{
	public:
		Number(int m)
		{
			num=m;
		}; 
		Number maxDivisor(Number t)
		{
			int a,divisor;
			if(t.num>num) a=num;
			else  a=t.num;
			for(int i=1;i<=a;i++)
			{
				if(t.num%i==0 && num%i==0)
				{
					divisor=i;
				}
			}
			return divisor;
		};
		void show()
		{
			cout<<num<<endl;
		};
	private:
		int num;
		
};

int main() 
{
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) 
	{
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3 = no1.maxDivisor(no2);  //最大公约数
        no3.show();
    }
}
