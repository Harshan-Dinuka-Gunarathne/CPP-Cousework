#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class account
{


};
class currunt_acc:public account
{

};

int main()
{
    string uname,vuname;
        int acn,vacn;
        int type,vtype;

    int c;

login_success:

    cout<<"select a choice.1 for register,2 for login and 3 for exit"<<endl;
    cin>>c;
    if(c==3)
    {
        exit;
    }
    else if(c==1)
    {
        cout<<"Enter registration name"<<endl;
        cin>>uname;
       
        cout<<"enter type"<<endl;
        cin>>type;
acn=(rand()%99999999)+10000000;
fstream w;
w.open("login.txt",ios::app);
w<<uname<<"\t"<<acn<<"\t"<<type<<endl;
w.close();
cout<<"please notedown this number.this is your account number: "<<acn<<endl;
cout<<"please login using details"<<endl;
//clr
    }
    else if(c==2)
    {
        
        cout<<"enter username and account no"<<endl;
        cin>>vuname;
        cin>>vacn;
    fstream r;
    r.open("login.txt",ios::in);
    while(r>>uname>>vacn>>type)
    {
            if(uname==vuname && acn==vacn)
            {
                
            
            }

    }
    r.close();
    
    }
   
}
    

