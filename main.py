#!/usr/bin/env python

with open("db.txt") as f:
    data = ""
    sep = ""
    for i, line in enumerate(f.readlines()):
        if i > 0:
            sep = ","
            if i % 6 == 0:
                sep = "\n"
        data += sep + line.strip()
print(data)
