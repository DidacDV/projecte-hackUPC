from flask import Flask, render_template, request
import json
import os
import subprocess

app = Flask(__name__)

# Ruta al archivo de almacenamiento de coordenadas
COORDINATES_FILE = 'coordinates.txt'

# Cargar coordenadas almacenadas
def load_coordinates():
    if os.path.exists(COORDINATES_FILE):
        with open(COORDINATES_FILE, 'r') as file:
            return json.load(file)  # Leer y cargar el archivo JSON
    return []

# Guardar nuevas coordenadas
def save_coordinate(lat, lng):
    coordinates = load_coordinates()
    coordinates.append({'lat': lat, 'lng': lng})
    with open(COORDINATES_FILE, 'w') as file:
        json.dump(coordinates, file)

# Función para ejecutar el script solo cuando se hace clic en un botón
def ejecutar_escribir_corchetes():
    subprocess.run(['python', 'escribir_corchetes.py'], check=True)


@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST' and 'ejecutar_boton' in request.form:
        # Si el formulario tiene el botón 'ejecutar_boton', ejecutar el script
        ejecutar_escribir_corchetes()

    if request.method == 'POST':
        lat = request.form.get('lat')
        lng = request.form.get('lng')
        if lat and lng:
            try:
                lat = float(lat)
                lng = float(lng)
                save_coordinate(lat, lng)
            except ValueError:
                pass  # Si no es un número, ignora

    coordinates = load_coordinates()  # Cargar todas las coordenadas
    return render_template('map.html', coordinates=coordinates)

@app.errorhandler(404)
def page_not_found(error):
    # Renderizar la plantilla 404.html con el código de estado 404
    return render_template('404.html'), 404

if __name__ == '__main__':
    app.run(debug=True)
