def perimetro():
	print(" seguente programma caclocla il perimetro di una data figura geometrica")
	print("""
	- Quadrato: >> 1
	- Rettangolo >> 2
	- Cerchio >> 3
	""")

	print('Inserire la scela:')
	scelta = int(input(">>> "))
	if scelta == 1:  
	    print("Hai selezionato il perimetro del quadrato") 
	    lato = float(input('Inserisci il valore del lato del quadrato '))
	    print("Il perimetro del Quadrato, avente lato", lato, " è:", laot *4)
	elif scelta == 2:
	    print("Hai selezionato il perimetro del Rettangolo")
	    base = float(input('Inserisci il valore della base'))
	    altezza = float(input("Inserisci il valore dell'altezza "))
	    print("Il perimetro del rettangolo, avente base", base, "e altezza", altezza, "è:", base*2 + altezza*2)
	elif scelta == 3:
	    print("hai selezionato la circonferenza del Cerchio")
	    r = float(input('Inserisci il valore del raggio '))
	    print("Il perimetro del Cerchio di raggio",r, "è", 2* r* 3.14)
	else:
	    print ("Inserire una scelta valida")


perimetro ();
