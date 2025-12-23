Architecture

![Pipeline Diagram](pipeline_diagram.png)

Stages
- Sensor: Acquires IQ data
- Range FFT: Converts IQ to range bins
- Doppler FFT: Converts range bins to RD map
- Detection: CA-CFAR
- Output: CSV logger, RD dump
