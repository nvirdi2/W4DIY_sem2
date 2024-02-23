// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 14, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H
#include <iostream>

namespace sdds 
{
   class Label 
   {
        char* frame;
        char* m_contentName;

        void printLine() const;
        void setFrame(const char* Cstr);
        void setContent(const char* Cstr);

   public:
        void readLabel();
        std::ostream& printLabel()const;

        Label();
        Label(const char* frameIn);
        Label(const char* frameIn, const char* contentName);

        ~Label();
   };
}

#endif //!SDDS_LABEL_H
