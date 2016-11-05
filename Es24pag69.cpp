#include <iostream>

using namespace std;

main(){

int num=0;
int num_max;
int num_min;
int pos_max;
int pos_min;
int num_cicli = 0;
bool primo_ciclo = true;
cout<<"inserire una sequenza di numeri interi, digitare il numero 0 per terminare"<<endl<<"la sequenza e continuare"<<endl<<endl;
do{
    cout<<"digitare un numero: ";
    cin>>num;
    if(num!=0){
        num_cicli ++;
        if(primo_ciclo) {
            num_max = num;
            num_min = num;
            pos_max = num_cicli;
            pos_min = num_cicli;
            primo_ciclo = false;
        }
        if (num_max < num){
            num_max = num;
            pos_max = num_cicli;
        }
        if (num_min > num){
            num_min = num;
            pos_min = num_cicli;
        }
    }
} while(num!=0);

cout<<"Il numero maggiore tra quelli digitati e': "<<num_max<<endl;
cout<<"Il numero minore tra quelli digitati e': "<<num_min<<endl;

}
