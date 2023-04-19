#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H

#include <string>

class SpreadSheetCell
{
public:
    SpreadSheetCell() = default;
    SpreadSheetCell(double initialValue);
    SpreadSheetCell(const SpreadSheetCell& src); // copy constructor

    SpreadSheetCell& operator=(const SpreadSheetCell& rhs);

    void setValue(double inValue);
    double getValue() const;
    void setString(std::string_view inString);
    std::string getString() const;
private:
    std::string doubleToString(double inValue) const;
    double stringToDouble(std::string_view inString) const;
    double m_value;
};

#endif // SPREADSHEETCELL_H
