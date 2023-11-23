// Created by Heet Vavadiya
#include<iostream>
using namespace std;
class Hotel{
    public:
    int z;
    void list(void){
        cout<<"Our Menu"<<endl;
        cout<<endl;
        cout<<"1.Pizza"<<endl;
        cout<<"2.Burger"<<endl;
        cout<<"3.Panipuri"<<endl;
        cout<<"4.Momos"<<endl;
    }
    int Ordarr[8] ={0,0,0,0,0,0,0,0};  // order array
    int Order(int z){
        int a=1;
        int b=2;
        int c=3;
        int d=4;
        int InnerOrder;
        if(z==1){
            cout<<endl;
            cout<<"1.Margreta Pizza = 70"<<endl;
            cout<<"2.Cheese Pizza = 90"<<endl;
            cout<<endl;
            cout<<"Which type of Pizza You like to Order ";
            cin>>InnerOrder;
            cout<<endl;

            if(InnerOrder==1){
                cout<<"Your Order is Margreta Pizza "<<endl;
                Ordarr[0] = 70;
            }
            else if(InnerOrder==2){
                cout<<"Your Order is Cheese Pizza"<<endl;
                Ordarr[1] = 90;
            }
            else{
                cout<<"Wrong Order "<<endl;
            }
        }
        else if(z==2){
            cout<<endl;
            cout<<"1.Cheese Burger = 65"<<endl;
            cout<<"2.Veggie burger = 50"<<endl;
            cout<<endl;
            cout<<"Which type of Burger You like to Order ";
            cin>>InnerOrder;
            cout<<endl;
            if(InnerOrder==1){
                cout<<"Your Order is Cheese Burger"<<endl;
                Ordarr[2] = 65;
            }
            else if(InnerOrder==2){
                cout<<"Your Order is Veggie burger"<<endl;
                Ordarr[3] = 50;
            }
            else{
                cout<<"Wrong Order"<<endl;
            }
        }
        else if(z==3){
            cout<<endl;
            cout<<"1.Tikhi Panipuri = 25"<<endl;
            cout<<"2.Mithi Panipuri = 20"<<endl;
            cout<<endl;
            cout<<"Which type of Panipuri You like to Order ";
            cin>>InnerOrder;
            cout<<endl;
            if(InnerOrder==1){
                cout<<"Your Order is Tikhi Panipuri"<<endl;
                Ordarr[4] = 25;
            }
            else if(InnerOrder==2){
                cout<<"Your Order is Mithi Panipuri"<<endl;
                Ordarr[5] = 20;
            }
            else{
                cout<<"Wrong Order"<<endl;
            }
        }
        else if(z==4){
            cout<<endl;
            cout<<"1.Steam Momos = 50"<<endl;
            cout<<"2.Tanduri Momos = 60"<<endl;
            cout<<endl;
            cout<<"Which type of Momos You like to Order ";
            cin>>InnerOrder;
            cout<<endl;
            if(InnerOrder==1){
                cout<<"Your Order is Steam Momos"<<endl;
                Ordarr[6] = 50;
            }
            else if(InnerOrder==2){
                cout<<"Your Order is Tanduri Momos"<<endl;
                Ordarr[7] = 60;
            }
            else{
                cout<<"Wrong Order"<<endl;
            }
        }
        else{
            cout<<"Wrong Order Please Try again";
        }
    }
    void Bilsystem(void){
        cout<<endl<<"Your Bil is "<<Ordarr[0]+Ordarr[1]+Ordarr[2]+Ordarr[3]+Ordarr[4]+Ordarr[5]+Ordarr[6]+Ordarr[7]<<endl;
    }
};
int main(){
    int n=1;
    int afterOrder;
    Hotel a;
    
    for(int i = 0; 45<46; i++){
        if(n==1 || n==2 || n==3 || n==4){
        a.list();
        cout<<endl;
        cout<<"Your Order Is --> ";
        cin>>n;
        a.Order(n);
        cout<<endl;
        cout<<"1.Order agian"<<endl;
        cout<<"2.Get Bil"<<endl;
        cin>>afterOrder;
        if(afterOrder==1){
            continue;
        }
        else{
            break;
        }
        }
        else{
            cout<<"Your Order id is wrong please try again"<<endl;
        }
    }
    a.Bilsystem();
    return 0;
}