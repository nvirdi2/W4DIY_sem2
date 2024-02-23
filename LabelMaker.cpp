// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 14, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <iostream>
#include <iomanip>
#include "cstring.h"   // using strLen, strCpy and strCmp 
#include "LabelMaker.h"
using namespace std;

namespace sdds 
{

    void LabelMaker::printLabels()
    {
        int x;

        for(x = 0; x < NUM_labels; x++)
        {
            labels[x].printLabel() << endl;
        }
    }


    void LabelMaker::readLabels()
    {
        cout << "Enter " << NUM_labels 
                << " labels:" << endl;

        int x;

        for(x = 0; x < NUM_labels; x++)
        {
            cout << "Enter label number " << x + 1 << endl;
            cout << "> ";

            labels[x].readLabel();
        }
    }


    LabelMaker::~LabelMaker()
    {
        int x;

        for(x = 0; x < NUM_labels; x++)
        {
            labels[x] = nullptr;
        }
        delete[] labels;
    }


    LabelMaker::LabelMaker(int LabelsNum)
    {
        NUM_labels = LabelsNum;
        labels = new Label[LabelsNum];
    }
}
