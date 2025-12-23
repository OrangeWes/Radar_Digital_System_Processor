# compute detection rate / latency stats
import csv
import sys

if len(sys.argv) < 2:
    print("Usage: analyze_csv.py <detections.csv>")
    sys.exit(1)

with open(sys.argv[1]) as f:
    reader = csv.reader(f)
    ranges, dopplers, snrs, times = [], [], [], []
    for row in reader:
        ranges.append(float(row[0]))
        dopplers.append(float(row[1]))
        snrs.append(float(row[2]))
        times.append(float(row[3]))
    print(f"Detections: {len(ranges)}")
    print(f"Mean SNR: {sum(snrs)/len(snrs) if snrs else 0}")
    print(f"Latency: {max(times)-min(times) if times else 0}")
