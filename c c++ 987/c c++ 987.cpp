#include <iostream>

using namespace std;

void afisflags(void);
void main(){

	afisflags();
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	afisflags();
	system("pause");
}

void afisflags(void){

	long flag_set, i;
	int j;
	char flags[15][12] = {
		"skipws","left","right","internal","dec",
		"oct","hex","showbase","showpoint","uppercase",
		"showpos","scientific","fixed","unitbuf"
	};
	flag_set = cout.flags();
	for(i=1,j=0;i<0x200;i=i<<1,j++){
		if( i & flag_set){
			cout << flags[j] << " este activat " << endl;
		}
		else
			cout << flags[j] << " este dezactivat " << endl;
		
	}
	cout << endl;
}