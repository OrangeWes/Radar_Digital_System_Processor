# quick matplotlib heatmap for RD dumps (optional)
import numpy as np
import matplotlib.pyplot as plt
import sys

if len(sys.argv) < 2:
    print("Usage: plot_rd.py <rdmap_file>")
    sys.exit(1)

rdmap = np.load(sys.argv[1])
plt.imshow(rdmap, aspect='auto', cmap='hot')
plt.colorbar()
plt.title('Range-Doppler Map')
plt.show()
