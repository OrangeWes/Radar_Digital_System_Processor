// dump RD maps (optional)
#pragma once
#include "../types.hpp"
#include <string>

namespace radar {
class RDDump {
public:
    RDDump(const std::string& filename);
    void dump(const RDMap& rdmap);
private:
    std::string filename_;
};
}
