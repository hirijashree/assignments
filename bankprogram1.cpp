#include<iostream>
#include<string>
#include<fstream>

using namespace std;
class login{
public:
     string username,pass;
    login()
    {
        username ="\0";
        pass ="\0";
    };
    bool islogin();
};
bool login :: islogin()
{
    string usser ="hirija",passcode="66774";
    cout<<"enter ur username :: \t";
    cin>>username;
    cout<<"enter ur password :: \t";
    cin>>pass;
    if(username == usser && pass == passcode)
    {
        return true;
        
    }
    else
    {
    return false;
    
}
}
    
class mainaccount {

private:
    int accno;
    string accountholdername;
    string accounttype;
    string currenta;
    string savingsa;
public:
    string currentaccount;
    string savingsaccount;
   
mainaccount(int ac,string anam,string aty)
    {
    ac = accno;
    anam = accountholdername;
    aty = accounttype;
}
    mainaccount()
    {
        currentaccount="\0";
        savingsaccount ="\0";
    };
    
    
    bool isaccounttype();
    
    
    void accountdetails(string accountholdername,int accno,string accounttype)
        {
        cout<<"enter customer name:\n";
        cin>>accountholdername;
        cout<<"enter account number:\n";
        cin>>accno;
        cout<<"enter account type:\n";
        cin>>accounttype;
    }
    
    void displaydetails(string accountholdername,int accno,string accounttype)
    {
        cout<<"name:\n"<<accountholdername;
        cout<<"number:\n"<<accno;
        cout<<"type:\n"<<accounttype;
    }
    
};

    bool mainaccount:: isaccounttype()
{
        string currentaccount="trffyy",savingsaccount="guyguuu";
        cout<<"enter ur current account:: \t";
        cin>>currenta;
        cout<<"enter ur savings account:: \t";
        cin>>savingsa;
        if(currentaccount==currenta){
            fstream file;
            file.open("myfile",ios::out);
            cout<<"name:hirija,account is 23434,account is current account";
            file<<"name:hirija,account is 23434,account is current account";
            file.close();
            
        return true;
            }
        else
        {
        return false;
        
    }
    







int main()
        {
    mainaccount obj1;
    obj1.accountdetails();
    obj1.displaydetails();
    login obj;
    bool status = obj.islogin();
    if(!status)
    {
        cout<<"login failed\n";
        return 1;
    }
    else
    {
        cout<<"welcome\n";
    }
    mainaccount acn;
    bool statuschack = acn.isaccounttype();
    if(!statuschack)
    {
        cout<<"is savings account not current\n";
        return 1;
    }
    else
    {
        cout<<"its current account\n";
    }
    
    return 0;
}