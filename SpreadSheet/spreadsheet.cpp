#include "spreadsheet.h"
#include <utility> // std::swap() 交换每个数据成员

SpreadSheet::SpreadSheet(size_t width, size_t height)
{

}

SpreadSheet::SpreadSheet(const SpreadSheet &src)
{

}

SpreadSheet::SpreadSheet(SpreadSheet &&src) noexcept
{

}

SpreadSheet::~SpreadSheetCell()
{

}

SpreadSheet &SpreadSheet::operator=(const SpreadSheet &rhs)
{

}

SpreadSheet &SpreadSheet::operator=(SpreadSheet &&rhs) noexcept
{

}

void SpreadSheet::setCellAt(size_t x, size_t y, const SpreadSheetCell &cell)
{

}

SpreadSheet::SpreadSheetCell &SpreadSheet::getCellAt(size_t x, size_t y)
{

}

bool SpreadSheet::inRange(size_t x, size_t y)
{

}

void SpreadSheet::verifyCoordinate(size_t x, size_t y) const
{

}

void SpreadSheet::cleanUp() noexcept
{

}



