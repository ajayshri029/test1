#!/usr/bin/env python3

import unittest

def add(a,b):
    return a+b

class test_sample(unittest.TestCase):
    def test_1(self):
        c = add(10,20)
        self.assertEqual(30,c,msg="failed at ")

if __name__=='__main__':
    unittest.main()
