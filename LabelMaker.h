// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 14, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_LABELMAKERH
#define SDDS_LABELMAKERH
#include "Label.h"

namespace sdds 
{
   class LabelMaker 
   {
      Label* labels;
      int NUM_labels;

   public:
        void readLabels();
        void printLabels();
        
        LabelMaker(int LabelsNum);
        ~LabelMaker();
   };
}
#endif //!SDDS_LABELMAKERH
