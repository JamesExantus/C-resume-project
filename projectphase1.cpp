// Danny Sollomoni, James Exantus

#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

bool linearSearchList(vector<string>, string);

int main()
{
    string firstName, lastName, country, bestName, search;
    int rank, points;
    int bestRank = 1000;
    char again;

    // recieve user input
    do {
    string target;
    cout << "Enter a players last name: ";
    cin >> target;

    vector<string>lastNames;

    ifstream infile;
    infile.open("womensSingles.txt");


    while (infile >> rank >> lastName >> firstName >> country >> points) {
        lastNames.push_back(lastName);
    }

    

        bool found = linearSearchList(lastNames, target);
    if (found)
        cout << target << " is found!";
    else
        cout << target << " is NOT found";
        cout << endl;

    //ask the user if they want to do it again
    cout << "Do you want to search for another player?  enter Y or N" << endl;
    cin >> again;
    } while(again == 'Y' || again == 'y');
    return 0;
}


bool linearSearchList(vector<string> last, string target){

    int i;
    for(i = 0; i < last.size(); i++)
    {
        if(last.at(i) == target)
            return true;
    }

    return false;

}