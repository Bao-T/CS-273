strings = ['Some string','Art','Music','Artificial Intelligence']
strings1=[x.lower() for x in strings if len(x) > 5]
print (strings1)
strings2=[x.lower() if len(x)>5 else x.upper() for x in strings ]
print (strings2)
