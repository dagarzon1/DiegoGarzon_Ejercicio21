import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("datos.txt")

plt.plot(data[:,0], data[:,2], label="initial", color='b')
plt.plot(data[:,0], data[:,1], label="t=0.5s", color='r')
plt.legend()
plt.savefig("grafica.pdf")
