import phonenumbers
from phonenumbers import geocoder

number = "+917797915501"

samNumber = phonenumbers.parse(number)
yourLocation = geocoder.description_for_number(samNumber, "en")
print(yourLocation)

from phonenumbers import carrier
serviceProvider = phonenumbers.parse(number)
print(carrier.name_for_number(serviceProvider, "en"))

from opencage.geocoder import OpenCageGeocode
geocoder = OpenCageGeocode("e9e33977f9fb4d51afe783c983fddb69")
query = str(yourLocation)
results = geocoder.geocode(query)
#print(results)

lat = results[0]['geometry']['lat']
lng = results[0]['geometry']['lng']
print(lat, lng)

import folium
myMap = folium.Map(location=[lat, lng], zoom_start=9)
folium.Marker([lat, lng], popup=yourLocation).add_to(myMap)
myMap.save("myLocation.html")
