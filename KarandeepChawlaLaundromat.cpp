//I used Xcode 4 on Mac to write this program.
//I then checked it with Visual Studio 8 and found many errors so I fixed them in there.
//Karandeep Chawla

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
 



class moneyCard {
public:
    double balance;
    int cardNumber;
    
    void setBalanceToZero();
    
    
};

class VTM{
public:    
    moneyCard cards[10];
    double tempBalance;
    int u;
    double totalVTMBalance;
    double totalGivenBalance;
    double newValue;

    
    //double moneyCard::*funcPtr;
    
    double getBalance();
    void displayBalance();
    void createCards();
    void addValue();
    void selectCard();
    
    void insertCard();
    void buyCard();
    void updateBalance();
    void displaySystemBalance();
    void setCardNumber();
    
    
    
    
};

class washer{
public:
    double washerBalance;
    int j;
    double balance;
    int cardNumber;
    
    
    void insertMoneyCard(int &);
    void checkBalance(int, double &);
    void load();
    void setBalanceToZero();
    void displaySystemBalance();

    
};

class dryer{
    public:
    double dryerBalance;
    int j;
    double balance;
    int cardNumber;
    int minutes;
    
    
    void insertMoneyCard(int &);
    void checkBalance(int,double);
    void load();
    void setBalanceToZero();
    void displaySystemBalance();
    void enoughBalance();



};

void VTM::createCards()
{
    
    for (int i = 0; i < 10; i++)
    {
        cards[i].setBalanceToZero();
        
    }
    cout<<"The system has 10 new money cards available for purchase."<<endl;
    //moneyCard::*funcPtr = &moneyCard::cards;
    
    //double result =(moneyCard.*funcPtr)( 2 );    
}


double VTM::getBalance()
{
    return cards[u].balance;
    
}

void VTM::displayBalance()
{
    cout<<"Your card number "<<u<<" has a balance of $"<<setprecision(2)<<cards[u].balance<<endl;
    
}


void VTM::addValue()
{
    
    for(double i=0; i<2; )
    {
        cout<<"Please insert a $1, $5, $10, or $20 bill or type 0 to exit to main menu"<<endl;
        cin>>newValue;
        if ((newValue == 1) || (newValue == 5))
        {
            tempBalance = newValue+tempBalance;
            totalVTMBalance = totalVTMBalance + newValue;
            totalGivenBalance = totalGivenBalance + tempBalance;
            updateBalance();
            displayBalance();
            i = 3;
            
        }
        else if ((newValue == 10))
        {
            tempBalance = newValue+tempBalance+1;
            totalVTMBalance = totalVTMBalance + newValue;
            totalGivenBalance = totalGivenBalance + tempBalance;
            updateBalance();
            displayBalance();
            i = 3;
            
        }
        else if ((newValue == 20))
        {
            tempBalance = newValue+tempBalance+3;
            totalVTMBalance = totalVTMBalance + newValue;
            totalGivenBalance = totalGivenBalance + tempBalance;
            updateBalance();
            displayBalance();
            i = 3;
            
            
        }
        else if ((newValue == 0))
        {
            
            i = 3;
            
            
        }
        else
        {
            cout<<"You have inserted an incorect bill"<<endl;
        } 
    }
}

void VTM::buyCard()
{
    tempBalance = cards[u].balance;
    int f = 1;

    while(f == 1)
    { 
       
    addValue();

        
    if(newValue!=0)
    {
        
    cout<<"      Add More Value?"<<endl;
    cout<<"      1.          Yes"<<endl;
    cout<<"      2.          No"<<endl;
    double answer;
    cin>> answer;
        while(answer == 1)        
        {
            addValue();
                cout<<"      Add More Value?"<<endl;
                cout<<"      1.          Yes"<<endl;
                cout<<"      2.          No"<<endl;
                cin>>answer;
        }
        
    setCardNumber();
    displayBalance();
    f = 2;   
    break;
   
        
    }
    else
    {
        f = 2;
        ;
    }

    }
    
    
    
}

void VTM::updateBalance()
{
    cards[u].balance = tempBalance + cards[u].balance;
    tempBalance = 0;
}

void VTM::displaySystemBalance()
{

    
    cout<<"This VTM machine has a total balance of $"<<setprecision(2)<<totalVTMBalance<<endl;
    cout<<"This VTM machine has given out a total balance of $"<<setprecision(2)<<totalGivenBalance<<endl;
    cout<<endl;
    cout<<endl;
    
    
}

void VTM::selectCard()
{
    //cout<<"input card number"<<endl;
    //cin>>u;
    if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0 && cards[4].balance == 0 && cards[3].balance == 0 && cards[2].balance == 0 && cards[1].balance == 0 && cards[0].balance == 0)
    {
        u = 0;
        
    }
    else
    {
        if   (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0 && cards[4].balance == 0 && cards[3].balance == 0 && cards[2].balance == 0 && cards[1].balance == 0)
        {
            u = 1;
        }
        
        else 
        {
            if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0 && cards[4].balance == 0 && cards[3].balance == 0 && cards[2].balance == 0)
            {
                u = 2;
                
            }
            else
            {
                if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0 && cards[4].balance == 0 && cards[3].balance == 0)
                {
                    u = 3;
                }
                else
                    if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0 && cards[4].balance == 0)
                    {
                        u = 4;
                    }
                    else
                    {
                        if(cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0 && cards[5].balance == 0)
                        {
                            u = 5;
                            
                        }
                        else
                        {
                            if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0 && cards[6].balance == 0)
                            {
                                u = 6;
                            }
                            
                            else{
                                
                                
                                if (cards[9].balance == 0 && cards[8].balance == 0 && cards[7].balance == 0)
                                {
                                    u = 7;
                                    
                                }
                                else{
                                    if (cards[9].balance == 0 && cards[8].balance == 0)
                                    {
                                        u = 8;
                                        
                                    }
                                    else
                                    {
                                        if (cards[9].balance == 0)
                                        {
                                            u = 9;
                                            
                                        }
                                        
                                        else{
                                        cout<<"      Sorry! We're out of cards."<<endl;
                                        cout<<"      Please replenish cards from the homescreen"<<endl;
                                        }
                                        
                                    }
                                }
                            }}
                    }
            }
        }
    }   }










void VTM::insertCard()
{
    cout<<"Please insert your VTM card (card number)"<<endl;
    cin>> u;
    displayBalance();
}

void VTM::setCardNumber()
{
    
    cards[u].cardNumber = u;
}

void moneyCard::setBalanceToZero()
{
    balance = 0;
}

void washer::setBalanceToZero()
{
    washerBalance = 0;
    balance = 0;
}

void dryer::setBalanceToZero()
{
    dryerBalance = 0;
    balance = 0;
}






void washer::insertMoneyCard(int &j)
{
    cout<<"Please insert your VTM card (card number)"<<endl;
    cin>>j;
    while(j > 9)
    {
        cout<<"You have inserted an incorrect VTM Card"<<endl;
        cin>>j;

    }
    
    
    
}





void washer::checkBalance(int cardNumber1, double &balance1)
{
    cardNumber = cardNumber1;
    balance = balance1;
    
    int balance2 = static_cast<int>(balance1);
    
    if(balance <= 1.25)
    {
        
        balance2 = 1;
    }
   
    switch (balance2) {
        case 0:
            cout<<"Your money card is out of money.  Please add more money at the VTM machine."<<endl;
            break;
        case 1:
            cout<<"Your money card does not have enough money.  Please add more money at the VTM machine."<<endl;
            balance1 = 0;
            break;
            
        default:
            cout<<"Your card number "<<cardNumber<<" has a balance of $"<<setprecision(2)<<balance<<endl;
            break;
    }
    
    
    
}


void washer::load()
{
    cout<<"Please place your clothes in the washer.  This load will cost you $1.25."<<endl;
    cout<<"Once you have placed the clothes in the washer, please press any number key and then enter"<<endl;
    double m;
    cin>> m;
    cout<<"Your clothes are being washed."<<endl;
    for (double y = 0; y < 100; y++) 
    {
        cout<<"."<<endl;
    }
    cout<<"Your clothes have been washed."<<endl;
    balance = balance - 1.25;
    washerBalance = washerBalance + 1.25;
    
    
    
    
      cout<<"The remaining balance on your card is $"<<setprecision(2)<<balance<<endl;
    
}

//BEGIN DRYER FUNCTIONS

void dryer::insertMoneyCard(int &j)
{
    cout<<"Please insert your VTM card (card number)"<<endl;
    cin>>j;
    while(j > 9)
    {
        cout<<"You have inserted an incorrect VTM Card"<<endl;
        cin>>j;
        
    }
    
}





void dryer::checkBalance(int cardNumber1, double balance1)
{
    cardNumber = cardNumber1;
    balance = balance1;
    
    
    int balance2 = static_cast<int>(balance1);
    
    switch (balance2) {
        case 0:
            cout<<"Your money card is out of money.  Please add more money at the VTM machine."<<endl;
            break;
            
        default:
            cout<<"Your card number "<<cardNumber<<" has a balance of $"<<setprecision(2)<<balance<<endl;
            break;
    }

    
}


void dryer::load()
{
    cout<<"Please place your clothes in the dryer. Each load will cost you $0.35 per 10 minutes."<<endl;
    cout<<"Please enter the amount of time: 10, 20, 30, 40, 50, or 60 minutes"<<endl;
    for(int i = 0; i<3; )
    {
        cin>> minutes;
        double cost1 = .35*(minutes/10);
        int cost2;
        if(minutes%10 != 0 || minutes >61 || minutes==0)
        {
            cout<<"You have entered an incorrect time."<<endl;
            cout<<"Please enter the amount of time: 10, 20, 30, 40, 50, or 60 minutes"<<endl;

        }
        else
        {



            
            if (cost1 >= balance)
            {
                cost2 = 0;
            }
            else
            {
                cost2 = 1;
            }
            
            switch (cost2) 
           {
                case 0:
                    {
                    cout<<"Your money card does not have enough money.  Please add more money at the VTM machine."<<endl;
                    i = 3;
                    break;
                    }
                default:
                {
                    cout<<"Your clothes are being dried."<<endl;
                    for (double y = 0; y < 10; y++) 
                    {
                        cout<<"........................."<<endl;
                    }
                    cout<<"Your clothes have been dried."<<endl;
                    double cost = .35*(minutes/10);
                    
                    balance = balance - cost;
                    dryerBalance = dryerBalance + cost;
                    
                    cout<<"The remaining balance on your card is $"<<setprecision(2)<<balance<<endl;

                    
                    
                    i=3;
                    break;
                }
                
                
            }   
                    
           
        }
        
    }
    
    
    
}


void dryer::displaySystemBalance()
{

    
    cout<<"This Dryer has collected a total amount of $"<<setprecision(2)<<dryerBalance<<endl;
    cout<<"This Dryer has been used for "<<setprecision(0)<<(dryerBalance/.35)*10<<" minutes"<<endl;

    cout<<endl;
    cout<<endl;
    
    
}

void washer::displaySystemBalance()
{
 
    
    cout<<"This Washer has collected a total amount of $"<<setprecision(2)<<washerBalance<<endl;
    cout<<"This Washer has been used for "<<setprecision(2)<<(static_cast<int>(washerBalance/1.25))<<" loads"<<endl;
    cout<<endl;
    cout<<endl;
    
    
}


void password()
{
    cout<<"Please enter the admin password."<<endl;
    string password;
    cin>>password;
    while(password != "password")
    {
        cout<<"The password is incorrect.  Try again."<<endl;
        cin>>password;
        
    }
    cout<<endl;
    cout<<endl;
}


void menu(int &toDo)
{
    cout<<"------Welcome to Karandeep's Laundromat.  What would you like to do?------"<<endl;
    cout<<endl;
    cout<<"---------------------------VTM Machine Options----------------------------"<<endl;
    cout<<"      1.          Buy A New Money Card"<<endl;
    cout<<"      2.          Add Money to your Card"<<endl;
    cout<<"      3.          View Card Balance"<<endl;
    cout<<"      4.          Replenish Cards in VTM Machine"<<endl;
    cout<<"      5.          Display VTM Balance (password protected)"<<endl;
    cout<<endl;
    cout<<"------------------------------Washer Options------------------------------"<<endl;
    cout<<"      6.          Wash Clothes"<<endl;
    cout<<"      7.          Display Washer Balance (password protected)"<<endl;
    cout<<endl;
    cout<<"-------------------------------Dryer Options------------------------------"<<endl;
    cout<<"      8.          Dry Clothes"<<endl;
    cout<<"      9.          Display Dryer Balance (password protected)"<<endl;
    cout<<endl;
    cout<<"--------------------------------Other Options-----------------------------"<<endl;
    cout<<"      10.         Display all system balances (password protected)"<<endl;
    cout<<"      11.         Exit Program"<<endl;


    
    
    cin>>toDo;
}





int main ()
{
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint);   
    
    VTM vtm;
    vtm.createCards();
    vtm.totalVTMBalance = 0;
    vtm.totalGivenBalance = 0;
    //(vtm::*podoubleer) (double) = &vtm.cards[10];
    
    //moneyCard *cards[10];
    
    //cout<<cards[1]->balance;
    
    
    washer wash;
    dryer dry;
    
    wash.setBalanceToZero();
    dry.setBalanceToZero();
    
    //moneyCard *cards[10];
    
    
    int toDo = 0;
    for(double i = 0; i < 2; )
    {
        switch (toDo) 
        {
                
            case 0:
            {
                menu(toDo);
                break;
            }
            case 1:
            {
                vtm.selectCard();
                vtm.buyCard();
               // vtm.setCardNumber();
               //vtm.getBalance();
                toDo = 0;
                break;
            }
            case 2:
            { vtm.insertCard();
                vtm.addValue();
                toDo = 0;
                break;
            }
            case 3:
            { vtm.insertCard();
                toDo = 0;
                break;
            }
            case 4:
            {
                vtm.createCards();
                toDo = 0;
                break;
            }
            case 5:
            {
                password();
                vtm.displaySystemBalance();
                toDo = 0;
                break;
            }
            case 6:
            {
                cout<<"Welcome to the washing machine."<<endl;
                int j;
                wash.insertMoneyCard(j);
                double balance = vtm.cards[j].balance;
                int cardNumber = vtm.cards[j].cardNumber;
                wash.checkBalance(cardNumber, balance);
                int tempBalance = static_cast<int>(balance);
                switch (tempBalance) 
                {
                    case 0:
                    {
                        toDo = 0;
                        break;
                    }
                        
                    default:
                    {
                        wash.load();
                        vtm.cards[j].balance = wash.balance;
                        toDo = 0;

                        
                    }
                        break;
                }
                
                
                break;
            }
            case 7:
            {
                password();
                wash.displaySystemBalance();
                toDo = 0;
                break;                
            }
            case 8:
            {
                cout<<"Welcome to the drying machine."<<endl;
                int j;
                dry.insertMoneyCard(j);
                double balance = vtm.cards[j].balance;
                double cardNumber = vtm.cards[j].cardNumber;
                dry.checkBalance(cardNumber, balance);
                int tempBalance = static_cast<int>(balance);
                switch (tempBalance) 
                {
                    case 0:
                    {
                        toDo = 0;
                        break;
                    }
                        
                    default:                    {

                        dry.load();
                        vtm.cards[j].balance = dry.balance;

                        toDo = 0;
                        
                    }
                        break;
                }
                
                
                break;
            }
            case 9:
            {
                password();

                    dry.displaySystemBalance();
                    toDo = 0;
                    break;                
            }
            case 10:
            {
                password();
                vtm.displaySystemBalance();
                wash.displaySystemBalance();
                dry.displaySystemBalance();
                toDo = 0;
                break;                
            }
            case 11:
            {
                i=3;
                break;                
            }
            default:
                cout<<"You have made an incorrect selection.  Please try again"<<endl;
                toDo = 0;
                break;
        }
        
    }
    cout<<"Thank you for coming to Karandeep's Laundromat"<<endl;
    
    system("pause");

    //return 0;
}

