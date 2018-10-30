#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,*b;
	a=5;
	b=&a;
	cout<<"Pointer b menyimpan alamat : "<<b<<endl;
	cout<<"Isi (nilai) dari alamat tersebut : "<<*b<<endl;
}
