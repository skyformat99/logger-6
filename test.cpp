#include <iostream>
#include <iomanip>

#include "logging.h"

int main ()
{
  logger::init (0, true);
  logger::add_log_file ("log.txt", 4, false);

  logger::error << "This is an error." << std::endl;
  logger::info << "This is a test." << std::endl;
  logger::debug << "This shouldn't show on screen." << std::endl;
  logger::detail << "This also shouldn't show." << std::endl;

  logger::info << "Line started...";
  logger::info << logger::cont << "and ended!" << std::endl;
  logger::info << std::endl;
  return 0;
}
