#include <iostream>
#include <string>

using namespace std;

int main()
{
    int b=1000, r, a, amt, t, re;
    cout << "\n\n\n Hello! Welcome to THE PENTESTERS MOBILE PAYMENT APP\n\n" << endl;
    //Declaring and getting User Name
    string username;
    cout<<"Enter User Name To Continue: \n";
    getline(cin, username);
    cout<<"\n Welcome " <<username;
    //choosing Payment Method
    int m;
    cout<<"\n\n Choose Payment Mode\n";
    cout<<"Enter 1 for MoMo (MTN Mobile Money) or 2 for OM (Orange Money)\n\n";
    cin>>m;
    if(m!=1 & m!=2)
        cout<<"\n Enter Either 1 or 2 to choose Payment Method\n";
    if(m==1)
    {
        cout<<username +  ", Welcome to THE PENTESTERS MTN MOMO payment System \n";
        cout<<"1: Check Account Balance \n";
        cout<<"2: Fund Account \n";
        cout<<"3: Buy HND Marking Guide \n";
        cout<<"4: Transfer Money \n";
        cout<<"5: Bank Operations \n";
        cout<<"6: Help \n";
    }
    if(m==2)
    {
        cout<<username + ", Welcome to THE PENTESTERS  Orange Money payment System\n\n";
        cout<<"1: Check Account Balance \n";
        cout<<"2: Fund Account \n";
        cout<<"3: Buy HND Marking Guide \n";
        cout<<"4: Transfer Money \n";
        cout<<"5: Bank Operations \n";
        cout<<"6: Help \n";
    }

    //responsiveness deployment
    cout<<"choose an Option to perform an Action\n";
    int mm;
    cin>>mm;
    //Account Balance
    if (m==1 && mm==1)
    {
        cout<<"Checking Account Balance\n";
        cout<<"Your account Balance is XAF: "<<b;
    }
    //Funding Account
    if (m==1 && mm==2)
    {
        cout<<"\n Funding Account\n";
    cout<<"Enter Amount to Recharge Account (FCFA)\n";
    cin>>a;
    r=a+b;
    cout<<"Your Account has being Funded successfully \n";
    cout<<"Your Current Balance is XAF: "<<r;
    }
    //buying HND Marking Guide
    if (m==1 && mm==3)
    {
        cout<<"HND Marking Guide Purchase\n";
        cout<<"Get a Copy of any HND marking Guide at 1000FCFA\n";
        cout<<"Enter Amount\n";
        cin>>amt;
        if(amt<b)
        cout<<"Account Balance Insufficient, Please Refill Account\n";

        else
        {
        cout<<amt, " Is about to be Transfered from Your Account \n";
        int opt;
        cout<<"\n Press 1 to Confirm or 0 to Abort Transaction \n";
        cin>>opt;
        if(opt=1)
            cout<<"Successful Transfer of 1000 XAF to 678866022 reference: HND Marking";
        else
        cout<<"Transaction Aborted";
        }
    }
    //Transfer Money deployment
    if (m==1 && mm==4)
    {
         cout<<"Money Transfer\n\n";
        cout<<"WARNING!!! You can't transfer amount greater than your current Balance Account\n\n";
        cout<<"Your current account balance is XAF "<<b;
        cout<<"\n Enter Amount to Transfer\n";
        cin>>t;
        cout<<"Enter Recipient Number\n";
        cin>>re;
        if (t>b)
        {
            cout<<"Transaction Aborted, Amount entered is greater than balance";
        }
        else
        {
            cout<<"Successful Transfer of XAF " << t<<" to "<<re;
            cout<<"\n Current Account Balance is XAF "<<b-t;
        }
    }

    if (m==1 && mm==5 || m==1 && mm==6)
        cout<<"Visit our Website for more info using the Link www.thepentesters.net";

    // OM Deployment
    if (m==2 && mm==1)
    {
        cout<<"Checking Account Balance\n";
        cout<<"Your account Balance is XAF: "<<b;
    }
    //Funding Account
    if (m==2 && mm==2)
    {
        cout<<"\n Funding Account\n";
    cout<<"Enter Amount to Recharge Account (FCFA)\n";
    cin>>a;
    r=a+b;
    cout<<"Your Account has being Funded successfully \n";
    cout<<"Your Current Balance is XAF: "<<r;
    }
    //buying HND Marking Guide
    if (m==2 && mm==3)
    {
        cout<<"HND Marking Guide Purchase\n";
        cout<<"Get a Copy of any HND marking Guide at 1000 FCFA\n";
        cout<<"Enter Amount\n";
        cin>>amt;
        if(amt<b)
        cout<<"Account Balance Insufficient, Please Refill Account\n";

        else
        {
        cout<<amt, " Is about to be Transfered from Your Account \n";
        int opt;
        cout<<"\n Press 1 to Confirm or 0 to Abort Transaction \n";
        cin>>opt;
        if(opt=1)
            cout<<"Successful Transfer of 1000 XAF to 678866022 reference: HND Marking";
        else
        cout<<"Transaction Aborted";
        }
    }
    //Transfer Money deployment
    if (m==4 && mm==4)
    {
         cout<<"Money Transfer\n\n";
        cout<<"WARNING!!! You can't transfer amount greater than your current Balance Account\n\n";
        cout<<"Your current account balance is XAF "<<b;
        cout<<"\n Enter Amount to Transfer\n";
        cin>>t;
        cout<<"Enter Recipient Number\n";
        cin>>re;
        if (t>b)
        {
            cout<<"Transaction Aborted, Amount entered is greater than balance";
        }
        else
        {
            cout<<"Successful Transfer of XAF " << t<<" to "<<re;
            cout<<"\n Current Account Balance is XAF "<<b-t;
        }
    }

    if (m==2 && mm==5 || m==2 && mm==6)
        cout<<"\n Visit our Website for more info using the Link www.thepentesters.net";
        cout<<"\n\n\n Copyright © 2022 THE PENTESTERS - Solution Providers All Rights Reserved!!!";
    return 0;
}
