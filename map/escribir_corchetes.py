# Nombre del archivo donde se escribirá
nombre_archivo = 'coordinates.txt'

# Modo de apertura del archivo en 'w' para escritura (sobrescribirá cualquier contenido previo)
with open(nombre_archivo, 'w') as archivo:
    # Escribe los corchetes []
    archivo.write('[]')