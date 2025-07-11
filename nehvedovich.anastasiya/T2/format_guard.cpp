#include "format_guard.hpp"

nehvedovich::FormatGuard::FormatGuard(std::basic_ios< char > &s):
  s_(s),
  width_(s.width()),
  precision_(s.precision()),
  fmt_(s.flags()),
  fill_(s.fill())
{
}

nehvedovich::FormatGuard::~FormatGuard()
{
  s_.width(width_);
  s_.precision(precision_);
  s_.flags(fmt_);
  s_.fill(fill_);
}
