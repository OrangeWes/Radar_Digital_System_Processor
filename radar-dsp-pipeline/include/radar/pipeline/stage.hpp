// stage base helpers (optional)
#pragma once

namespace radar {
class Stage {
public:
    virtual ~Stage() = default;
    virtual void run() = 0;
};
}
