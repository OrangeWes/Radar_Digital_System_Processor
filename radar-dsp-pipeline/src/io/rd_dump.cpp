#include "../../include/radar/io/rd_dump.hpp"
#include <fstream>

namespace radar {
RDDump::RDDump(const std::string& filename) : filename_(filename) {}
void RDDump::dump(const RDMap& rdmap) {
    std::ofstream file(filename_, std::ios::binary);
    // TODO: Dump RD map to file
}
}
