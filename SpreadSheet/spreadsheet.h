#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <cstddef>
#include "spreadsheetcell.h"
// 在类中动态分配内存后，应该编写复制构造函数和复制赋值运算符，提供深复制

class SpreadSheet
{
public:
    SpreadSheet(size_t width, size_t height);
    // Rule of Five
    SpreadSheet(const SpreadSheet& src);
    SpreadSheet(SpreadSheet&& src) noexcept;
    ~SpreadSheetCell();
    SpreadSheet& operator=(const SpreadSheet& rhs);  // 使用临时对象储存源对象
    SpreadSheet& operator=(SpreadSheet&& rhs) noexcept;

    friend void swap(SpreadSheet& first, SpreadSheet& second) noexcept; // 类友元函数，禁止抛出异常，要么全部成功，要么该对象保持不变

    void setCellAt(size_t x, size_t y, const SpreadSheetCell& cell);
    SpreadSheetCell& getCellAt(size_t x, size_t y);

private:
    bool inRange(size_t x, size_t y);
    void verifyCoordinate(size_t x, size_t y) const; // 判断给定的(x, y)是否超出表的范围， x ∈ (0, m_width), y ∈ (0, m_height)
    void cleanUp() noexcept;
    size_t m_width;
    size_t m_height;
    SpreadSheetCell** m_cells = nullptr;
};

#endif // SPREADSHEET_H
