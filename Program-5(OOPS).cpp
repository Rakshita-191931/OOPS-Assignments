
#include <iostream>
using namespace std;

// class
class Bank {
private:
    int acc_no;
    char name[30];
    long balance;

public:
    void OpenAccount()
    {
            
            cout << "Enter Account Number: ";
             cin >> acc_no;
             cout << "Enter Name: ";
             cin >> name;
             cout << "Enter  Balance: ";
             cin >> balance;
        
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acc_no == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

int main()
{
   int n;
   cout<<"enter n";
   cin>>n;
    Bank C[n];

    int found = 0, a, ch, i;
    for(i=0;i<n;i++){
         C[i].OpenAccount();
        
                 cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        
                 cout << "Please input your choice: ";
                 cin >> ch;

                 switch (ch) {
                 case 1: 
    
                 C[i].ShowAccount();
                    
                       break;
                case 2: 
                       cout << "Account Number? ";
                       cin >> a;
                       
                       found = C[i].Search(a);
                       if (found)
                            break;
                       if (!found)
                          cout << "Record Not Found" << endl;
                          break;
               case 3: // deposit operation
                          cout << "Account Number To Deposit Amount? ";
                          cin >> a;
                          
                                   found = C[i].Search(a);
                                   if (found) {
                                       C[i].Deposit();
                                       break;
                                    }
                          
                                    if (!found)
                                          cout << "Record Not Found" << endl;
                             break;
                  case 4: // withdraw operation
                              cout << "Account Number To Withdraw Amount? ";
                              cin >> a;
            
                              found = C[i].Search(a);
                              if (found) {
                                 C[i].Withdrawal();
                                 break;
                                }
                              if (!found)
                                  cout << "Record Not Found" << endl;
                               break;
                  case 5: // exit
                              cout << "Have a nice day" << endl;
                              break;
                  default:
                                cout << "Wrong Option" << endl;
                 }
    }
        return 0;
    }
