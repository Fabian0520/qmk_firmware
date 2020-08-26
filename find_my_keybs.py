#!/usr/bin/python
import os


def fast_scandir(dirname):
    subfolders = [f.path for f in os.scandir(dirname) if f.is_dir()]
    for dirname in list(subfolders):
        subfolders.extend(fast_scandir(dirname))
    return subfolders


for i in fast_scandir("keyboards"):
    if "fabian0520" in i:
        print(i)
