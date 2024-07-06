valor_hora = float(input("Ente com o valor da hora de trabalho!:  "))
hora_trabalhada = float(input("Entre com as Horas trablhadas!:  "))

sal_bruto = valor_hora * hora_trabalhada

print("salário sem Desconto  " , sal_bruto ,)

inss = float(input("Entre com o valor do INSS  "))

desconto_inss = (sal_bruto*inss/100)

print("O valor do Salário com desconto  ",desconto_inss,)
sal_liquido = sal_bruto - desconto_inss

print("O valor do Salário Liquido é " , sal_liquido,)
