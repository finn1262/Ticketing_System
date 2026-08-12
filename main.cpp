#include <iostream>

using namespace std;

int main()
{
     cout << endl << "--------------------------------------------" << endl;
    cout << endl;
    cout << "\tTicketing System" << endl;
    cout << endl << "--------------------------------------------" << endl;

    string moviename;
    double adultp,childp, ticketas, ticketcs, adultg, childg, totalg, percentg, donated, netsale;

    cout << endl << ">> Enter Movie Name: ";
    getline(cin, moviename);

    cout << ">> Enter Adult Ticket Price: ";
    cin >> adultp;

    cout << ">> Enter Child Ticket Price: ";
    cin >> childg;

    cout << ">> Enter Number Adult Ticket Sold: ";
    cin >> ticketas;

    cout << ">> Enter Number Ticket Sold: ";
    cin >> ticketcs;

    adultg = adultp * ticketas;
    childg = childg * ticketcs;
    totalg = adultg + childg;

    cout << endl << "--------------------------------------------" << endl;

    cout << endl << "\tAdult Ticket Gross: " << adultg << endl;
    cout << "\tChild Ticket Gross: " << childg << endl;
    cout << "\tTotal Gross Amount: " << totalg << endl;

    cout << endl << "--------------------------------------------" << endl;

    cout << endl << ">> Enter Percent of Gross Amount Donater (%): ";
    cin >> percentg;

    cout << endl << "--------------------------------------------" << endl;

    donated = totalg * percentg;
    netsale = totalg - donated;

    cout << endl << "\tAmount Donated: " << donated << endl;
    cout << "\tNet Sale:       " << netsale << endl;

    cout << endl << "--------------------------------------------" << endl;






    return 0;
}
