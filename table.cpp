#include <bits/stdc++.h>
using namespace std;
string a="*****",b="    *",c="*    ",d="    *",e="*   *";
int cot;
void pri(int p,int w){
	switch(w){
		case 1:
			if(p==1)cout<<b;
			else if(p==4)cout<<e;
			else cout<<a;
			break;
		case 2:
			if((p>=1&&p<=3)||p==7)cout<<b;
			else if(p==5||p==6)cout<<c;
			else cout<<e;
			break;
		case 3:
			if((p>=1&&p<=3)||p==7)cout<<b;
			else if(p==5||p==6)cout<<c;
			else cout<<e;
			break;
		case 4:
			if(!p)cout<<e;
			else if(p==1||p==7)cout<<b;
			else cout<<a;
			break;
		case 5:
			if(p==0||p==6||p==8)cout<<e;
			else if(p==2)cout<<c;
			else cout<<b;
			break;
		case 6:
			if(p==0||p==6||p==8)cout<<e;
			else if(p==2)cout<<c;
			else cout<<b;
			break;
		case 7:
			if(p==1||p==4||p==7)cout<<b;
			else cout<<a;
			break;
	}
}
class DAPrinter {

private:

    int num;

    int das[4]; //最多4个点阵对象

public:
	
    DAPrinter(int a){
    	num=a;
    	cout<<num<<":"<<endl; 
    }
    
    void split(){
    	int k=num;
		cot=0;
		while(k){
			das[cot]=k%10;
			k=k/10;
			cot++;
		}
		if(num)cot--;
	};

    void print(){
    	for(int i=1;i<=7;i++){
    		for(int j=cot;j>=0;j--){
    			pri(das[j],i);
    		    cout<<"  "; 
    		}
    		cout<<endl;
    	}
    };

    void reset(){
    	cout<<endl;
    };

};


int main() {

    int n;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {
    	
    	int n1;

        std::cin >> n1;

        DAPrinter p(n1);

        p.split();

        p.print();
        
        //p.reset();
    }

    return 0;

}
