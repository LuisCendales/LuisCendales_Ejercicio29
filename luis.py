import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ luis.cpp -o luis.x")
os.system("./luis.x > luis.dat")

data = np.loadtxt("luis.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("luis.png")