print("Programa que calcula movimento retilílio")

s0 = float(input("Entre com S0"))
v0 = float(input("Entre com  V0"))
a =  float(input("Entre com  a "))
delta_t = float(input("Entre com o Delta_t"))

v = (v0 + a * delta_t)

s = s0 + v0 * delta_t + a (delta_t * delta_t) /2

print("A velocidade ",v, "especo decorrido",s,)
