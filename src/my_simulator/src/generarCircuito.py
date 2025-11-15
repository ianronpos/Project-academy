import math


def generarPuntosCurva1(x, y, r , t): 
    x0, y0 = x, y
    R = r
    theta = t          # coche hacia +X
    s = -1            # derecha
    cx = x0 - s*R*math.sin(theta)
    cy = y0 + s*R*math.cos(theta)

    for deg in range(90, -91, -30):  # de 90° a -90°
        a = math.radians(deg)
        x = cx + R * math.cos(a)
        y = cy + R * math.sin(a)
        print(f"{deg}°  ->  ({x:.2f}, {y:.2f})")

print("Puntos Cono azul Curva 1")
generarPuntosCurva1(8, 1, 7, 0) 

print("Puntos Cono amarillo Curva 1")
generarPuntosCurva1(8, -1, 5, 0) 