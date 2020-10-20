# CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)
# (!) 2020, Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences

foo = 4.2

print(foo);

# Concatenation
print("The value of foo is: " + str(foo) + "!")

# Format operator %
print("The value of foo is %f!" % (foo,))    # Note the comma!
print("The value of foo is %.1f!" % (foo/10,))
# Best one
print("The value of foo is %g %g %g!" % (foo, foo*10, foo/10))
bar = 7
print("[%10d] [%-10d] [%+-10d]" % (bar, bar, bar))

# format method (quite but not completely similar to %)
print("The value of foo is {}!".format(foo))
print("[{foo:10d}] [{foo:<10d}] [{foo:<+10d}]".format(foo=bar)) # note < instead of - 

# f-string -- the right way
print(f"The value of foo is {foo}!")
print(f"The value of foo is {10*foo}!")
print(f"The value of foo is {foo/10:.4f}!")
print(f"[{bar:10d}] [{bar:<10d}]") # as format method
