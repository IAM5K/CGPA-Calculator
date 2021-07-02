#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double CGPA, tcredit,tgrade;
    tgrade=0;
    tcredit=0;
    cout << "Enter total Number of subjects" << endl ;
    cin >> n;
    cout<< "Number of Total Subject is "<< n << " \n";
    double subjects[n];
    double credit[n];
    double grade[n];
    //cout << "Initial Credit" << " : "<< tcredit <<endl;
    //cout << "Initial Grade" << " : "<< tgrade <<endl<<endl;
    cout << "Input your grade's numeric value" << " : "<<endl;
    cout << " S A B C D E F"<<endl;
    cout << "10 9 8 7 6 5 4" <<endl<<endl;

    int i; // Variable for access subjects array index


   for (i = 1; i < n+1; i++) {
      // Reading User Input subjects value Based on index
      cout << "Enter credit for Subject " << i << " : ";
      cin >> credit[i];
      cout << "Enter Grade for Subject " << i << " : ";
      cin >> grade[i];

   }

   cout << "\n User Input Values\n";
   for (i = 1; i < n+1; i++) {
      // Accessing subjects value using for loop
      cout << "Subject:" << i << " , Credit Value : " << credit[i] << " , Grade : " << grade[i] << " \n";
   }
   for (i = 1; i < n+1; i++) {
       tcredit= tcredit+credit[i];
   }
   cout << "Total Credit" << " : "<< tcredit <<endl;

   for (i = 1; i < n+1; i++) {
       tgrade= tgrade+ (credit[i]* grade[i]);
   }
   cout << "Total Grade" << " : "<< tgrade <<endl;

   CGPA=tgrade/tcredit;
   cout << "Total CGPA" << " : "<< CGPA <<endl;

    cout << "Developed By SK" <<endl;


    return 0;
}

