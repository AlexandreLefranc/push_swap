#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Mar 18 09:24:26 2022

@author: alexandre
"""

import random
import sys

k = int(sys.argv[1])
min_val = int(sys.argv[2])
max_val = int(sys.argv[3])

a = random.sample(range(min_val, max_val), k)
a = [str(x) for x in a]
print(' '.join(a))
