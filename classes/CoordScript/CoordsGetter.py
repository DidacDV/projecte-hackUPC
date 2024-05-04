import requests
import sys
import config

def usage():
    print("Correct usage: python CoordsGetter.py CityName")

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
                print(f"{latitude}")
                print(f"{longitude}")
        else: print("No data known")
    else:
        print("REQUEST ERROR:",response.status_code, response.text)


if __name__ == "__main__":
    if len(sys.argv) != 2:
        usage()
    else: 
        cityName = sys.argv[1]
        obt_city(cityName)