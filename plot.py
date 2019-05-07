import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.axes3d import Axes3D, get_test_data
from matplotlib import cm

data = np.loadtxt("onda.dat")
x=np.linspace(0,1,data.shape[1])

plt.figure(figsize=(15,5))
plt.subplot(1,2,1)
plt.imshow(data)
plt.xlabel("Indice X")
plt.ylabel("Indice D")
plt.colorbar(label="Desplazamiento")

plt.subplot(1,2,2)
plt.plot(data[0,:], label="tiempo inicial")
plt.plot(data[-1,:], label="tiempo final")
plt.xlabel("Posicion [metros]")
plt.ylabel("Desplazamiento [metros]")
plt.legend()
plt.savefig("imagen.png", bbox_="tight")
