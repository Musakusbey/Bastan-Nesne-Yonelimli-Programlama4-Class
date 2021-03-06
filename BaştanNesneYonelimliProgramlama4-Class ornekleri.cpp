/*#include<iostream>

using namespace std;

class hacimhesapla
{
	int x,y,z,hacim;
	
	public:
		
		hacimhesapla(int a,int b,int c)
		{
			x=a;
			
			y=b;
			
			z=c;
			
			hacim=x*y*z;
		}
		
		void goster()
		{
			cout<<"hacim:"<<hacim<<endl;
		}
};

int main ()
{
	hacimhesapla test1(3,4,5);
	
	test1.goster();
	
	return 0;
} */

#include<iostream>

using namespace std;

class kutuphane
{
	char kitapadi[20];
	
	char yazar[20];
	
	int kitapadeti;
	
	public:      //////////kod hataliiiiiiiiiiiiiiii
		
		void sakla(char*ka,char*y,int sa)
		{
			strcpy(kitapadi,ka);
			
			strcpy(yazar,y);
			
			kitapadeti=sa;
		}
		
		void goster()
		{
			cout<<"kitapadi:"<<kitapadi<<endl;
			
			cout<<"yazar:"<<yazar<<endl;
			
			cout<<"kitapadeti:"<<kitapadeti<<endl;
		}

};

int main ()
{
	kutuphane ob1;
	
	ob1.sakla("yaban","ali",18);
	
	ob1.goster();
	
	return 0; 
}









