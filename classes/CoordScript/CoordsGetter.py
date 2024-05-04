import requests
import json
import config

def  obt_city(cityName):
    paramsIn = {'city': cityName}
    api_url = 'https://api.api-ninjas.com/v1/geocoding'
    response = requests.get(api_url, params =paramsIn, headers = {'X-Api-Key': config.api_key})
    if response.status_code == requests.codes.ok:
        data = response.json()
        if len(data) > 0:
            result = data[0]

            latitude = result.get('latitude')
            longitude = result.get('longitude')
            if latitude is None and longitude is None:
                print("Coords Unknown")
            else:
                path = "coords.txt"
                with open(path, 'w') as file:
                    file.write(f"{latitude}\n")
                    file.write(f"{longitude}\n")
        else: print("No data known")
    else:
        print("REQUEST ERROR:",response.status_code, response.text)


obt_city('London')