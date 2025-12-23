// wires queues + stages together
#pragma once
#include "stage.hpp"
#include <vector>

namespace radar {
class Pipeline {
public:
    void add_stage(Stage* stage);
    void run();
private:
    std::vector<Stage*> stages_;
};
}
