#coding:utf-8

import numpy as np
import matplotlib.pyplot as plt

data = {"[29.166;2083.166]":57755,"[2083.166;4137.166]":33868,"[4137.166;6191.166]":38884,"[6191.166;8245.166]":32606,"[8245.166;10299.166]":38971}
donnees = list(data.keys())
valeurs = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(donnees, valeurs, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_BACKING_FILM")
plt.show()


data = {"[5.185;157.925]":44203,"[157.925;310.666]":41070,"[310.666;463.407]":20458,"[463.407;616.148]":50933,"[616.148;768.888]":45420}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_DRESSER")
plt.show()


data = {"[0.000;71.407]":37788,"[71.407;142.814]":45119,"[142.814;214.222]":46778,"[214.222;285.629]":45302,"[285.629;357.037]":27097}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_POLISHING_TABLE")
plt.show()


data = {"[2664.750;2772.950]":55983,"[2772.950;2881.150]":39172,"[2881.150;2989.350]":55185,"[2989.350;3097.550]":29129,"[3097.550;3205.750]":22458}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_DRESSER_TABLE")
plt.show()


data = {"[0.000;37.714]":68939,"[37.714;75.428]":53411,"[75.428;113.142]":74719,"[113.142;150.857]":4503,"[150.857;188.571]":512}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("PRESSURIZED_CHAMBER_PRESSURE")
plt.show()


data = {"[0.000;99.840]":75821,"[99.840;199.680]":1893,"[199.680;299.520]":120228,"[299.520;399.360]":680,"[399.360;499.200]":3462}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("MAIN_OUTER_AIR_BAG_PRESSURE")
plt.show()


data = {"[0.000;27.625]":75876,"[27.625;55.250]":3760,"[55.250;82.875]":118063,"[82.875;110.500]":3680,"[110.500;138.125]":705}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("CENTER_AIR_BAG_PRESSURE")
plt.show()


data = {"[0.000;2131.740]":185867,"[2131.740;4263.480]":6799,"[4263.480;6395.220]":1355,"[6395.220;8526.960]":7762,"[8526.960;10658.700]":301}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("RETAINER_RING_PRESSURE")
plt.show()


data = {"[0.000;4.227]":75486,"[4.227;8.454]":2667,"[8.454;12.681]":119696,"[12.681;16.909]":779,"[16.909;21.136]":3456}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("RIPPLE_AIR_BAG_PRESSURE")
plt.show()


data = {"[0.345;24.701]":57755,"[24.701;49.057]":33868,"[49.057;73.413]":38884,"[73.413;97.768]":32606,"[97.768;122.124]":38971}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_MEMBRANE")
plt.show()


data = {"[8.750;624.950]":57755,"[624.950;1241.150]":33868,"[1241.150;1857.350]":38884,"[1857.350;2473.550]":32606,"[2473.550;3089.750]":38971}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("USAGE_OF_PRESSURIZED_SHEET")
plt.show()


data = {"[0.000;7.666]":175006,"[7.666;15.333]":6298,"[15.333;23.000]":9318,"[23.000;30.666]":11358,"[30.666;38.333]":104}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("SLURRY_FLOW_LINE_A")
plt.show()


data = {"[0.000;2.409]":201957,"[2.409;4.818]":34,"[4.818;7.227]":20,"[7.227;9.636]":22,"[9.636;12.045]":51}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("SLURRY_FLOW_LINE_B")
plt.show()


data = {"[0.000;214.480]":80147,"[214.480;428.960]":28232,"[428.960;643.440]":93352,"[643.440;857.920]":225,"[857.920;1072.400]":128}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("SLURRY_FLOW_LINE_C")
plt.show()


data = {"[29.166;2083.166]":57756,"[2083.166;4137.166]":33868,"[4137.166;6191.166]":38884,"[6191.166;8245.166]":32606,"[8245.166;10299.166]":38970}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("WAFER_ROTATION")
plt.show()


data = {"[0.000;52.710]":144016,"[52.710;105.421]":10902,"[105.421;158.131]":12320,"[158.131;210.842]":12363,"[210.842;263.552]":22483}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("STAGE_ROTATION")
plt.show

data = {"18.400;133.120]":7,"[133.120;147.840]":0,"[147.840;162.560]":188153,"[162.560;177.280]":4568,"[177.280;192.000]":9356}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("HEAD_ROTATION")
plt.show()


data = {"[0.000;0.200]":115073,"[0.200;0.400]":0,"[0.400;0.600]":0,"[0.600;0.800]":0,"[0.800;1.000]":87011}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("DRESSING_WATER_STATUS")
plt.show()

data = {"[0.000;28.303]":76325,"[28.303;56.606]":108222,"[56.606;84.909]":16831,"[84.909;113.212]":280,"[113.212;141.515]":426,}
courses = list(data.keys())
values = list(data.values())
fig = plt.figure(figsize = (10, 5))
plt.bar(courses, values, color ='purple',width = 0.4)
plt.xlabel("Bins")
plt.ylabel("Fréquence d obervation")
plt.title("EDGE_AIR_BAG_PRESSURE")
plt.show()
