// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 14, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <istream>
#include <iomanip>
#include "cstring.h"  // using strLen, strCpy and strCmp 
#include "Label.h"
using namespace std;
namespace sdds 
{


    void Label::readLabel()
    {
        m_contentName = new char[71];  //holds 70 characters 

        cin.getline(m_contentName, 71);
    }

    void Label::printLine() const
    {
        int i = 0;
        while(m_contentName[i])
        {
            cout << " ";
            i++;
        }
        cout << "  ";
    }


    std::ostream& Label::printLabel() const
    {
        if(m_contentName != nullptr && strLen(m_contentName) > 0)
        {
            cout << frame[0];

            for(int i = 0; i<strLen(m_contentName)+2; i++)
            {
                cout << frame[1];
            }

            cout << frame[2] << endl;
            cout << frame[7];

                printLine();

            cout << frame[3] << endl;
            cout << frame[7];

                cout << " " << m_contentName << " ";

            cout << frame[3] << endl;
            cout << frame[7];

                printLine();

            cout << frame[3] << endl;
            cout << frame[6];

            int i;
            
            for(i = 0; i < strLen(m_contentName) + 2; i++)
            {
                cout << frame[5];
            }

            cout << frame[4];
            
        } return cout;
    }


    void Label::setFrame(const char* Cstr)
    {
        if(Cstr != nullptr)
        {
            int i;
            i = strLen(Cstr);
            
            frame = new char[i + 1];
            
            strCpy(frame, Cstr);
        }
    }


    void Label::setContent(const char* Cstr)
    {
        if(Cstr != nullptr)
        {
            int i;
            i = strLen(Cstr);
            
            m_contentName = new char[i + 1];
            
            strCpy(m_contentName, Cstr);
        }
    }


    Label::Label()
    {
        m_contentName = nullptr;

        frame = new char[9];

        strCpy(frame, "+-+|+-+|");
    }


    Label::Label(const char* frameIn)
    {
        m_contentName = nullptr;
        setFrame(frameIn);
    }


    Label::Label(const char* frameIn, const char* contentName)
    {
        setContent(contentName);
        setFrame(frameIn);
    }


    Label::~Label()
    {
        frame = nullptr;
        m_contentName = nullptr;
    }
}
