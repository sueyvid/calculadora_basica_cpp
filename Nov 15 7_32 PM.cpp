#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
  setlocale(LC_ALL, "portuguese");
  float num, num2, num3;
  int y = 1;
  char operacao;
  
  while(y != 0){
  	cout << "Digite a operação desejada: " << endl;
    cin>>num>>operacao>>num2;
    switch(operacao){
      case '+':
        num3=num+num2;
          cout<<num<<" + "<<num2<<" = "<<num3<<endl;
        cout<<"se deseja fazer outra operaçao aperte 1"<<endl<<"se n aperte 0"<<endl;
        cin>>y;
        break;
      case '-':
        num3=num-num2;
          cout<<num<<" - "<<num2<<" = "<<num3<<endl;
        cout<<"se deseja fazer outra operaçao aperte 1"<<endl<<"se n aperte 0"<<endl;
        cin>>y;
        break;
        case '*':
        num3=num*num2;
          cout<<num<<" * "<<num2<<" = "<<num3<<endl;
        cout<<"se deseja fazer outra operaçao aperte 1"<<endl<<"se n aperte 0"<<endl;
        cin>>y;
        break;
        case '/':
        num3=num/num2;
          cout<<num<<" / "<<num2<<" = "<<num3<<endl;
        cout<<"se deseja fazer outra operaçao aperte 1"<<endl<<"se n aperte 0"<<endl;
        cin>>y;
        break;
    }
  }
  
	return 0;
}