#!/usr/bin/env python3
"""
Created by: Mr. Logan
Created on: February 2025
This is the "Radius to Circumference" module
"""

import math


def main() -> None:
    """The main() function gets circumference from radius, returns None."""


radius = float(input("Insert radius(cm): "))
pi = math.pi
print(f"If the radius of a circle is {radius} circumference of the radius is {round(radius*pi*2, 5)} cm")


if __name__ == "__main__":
    main()
