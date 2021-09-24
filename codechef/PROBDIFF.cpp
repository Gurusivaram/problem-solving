#include <iostream>
#include<map>
using namespace std;

void testCase(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    map<int, int> m;
    ++m[a];
    ++m[b];
    ++m[c];
    ++m[d];
    for(auto i = m.begin(); i != m.end(); ++i){
        if(i -> second == 2){
            cout<<2<<endl;
            return;
        }else if(i -> second == 3){
            cout<<1<<endl;
            return;
        }else if(i -> second == 4){
            cout<<0<<endl;
            return;
        }
    }
    cout<<2<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    testCase();
	}
	return 0;
}