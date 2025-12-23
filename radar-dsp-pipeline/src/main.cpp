// CLI parsing, constructs pipeline, runs threads
#include "../include/radar/config.hpp"
#include "../include/radar/pipeline/pipeline.hpp"

int main(int argc, char* argv[]) {
    radar::Config config;
    // TODO: Parse CLI args into config
    radar::Pipeline pipeline;
    // TODO: Construct pipeline stages and run
    pipeline.run();
    return 0;
}
