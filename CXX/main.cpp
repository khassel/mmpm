#include "mmpm.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    mmpm::error_message("Too few arguments");
    exit(1);
  }

  mmpm::parse_json(static_cast<const std::string>(argv[1]));

  /*
  fort::utf8_table table;
  table.set_border_style(FT_NICE_STYLE);
  table.column(0).set_cell_text_align(fort::text_align::center);
  table.column(1).set_cell_text_align(fort::text_align::center);

  table << fort::header << "N"
        << "Driver"
        << "Time"
        << "Avg Speed" << fort::endr << "1"
        << "Ricciardo"
        << "1:25.945"
        << "47.362" << fort::endr << "2"
        << "Hamilton"
        << "1:26.373"
        << "35.02" << fort::endr << "3"
        << "Verstappen"
        << "1:26.469"
        << "29.78" << fort::endr;

  std::cout << table.to_string() << std::endl;
  */

  return 0;
}
