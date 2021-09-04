#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

foo = 4
bar = 2

print("The answer is \"{foo*10 + bar:10d}\"")
print(f"The answer is \"{foo*10 + bar:10d}\"")
print("The answer is", foo * 10 + bar)

s1 = f"{foo*10 + bar}"
s2 = f"{foo*10 + bar:e}"
s3 = f"{foo*10 + bar:20.4f}"

print(s1)
print(s2)
print(s3)

print(f"{round(2/3):d}")
