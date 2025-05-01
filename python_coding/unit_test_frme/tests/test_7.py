#!/bin/env python3

import unittest

def multiply_fun(a,b):
    return a*b

class Testsample(unittest.TestCase):
    def test_1(self):
        c=multiply_fun(2,4)
        self.assertEqual(8,c,msg="failed ..!")

    def test_2(self):
        c=multiply_fun(2,4)
        self.assertNotEqual(9,c,msg="failed !!!")

if __name__=="__main__":
    unittest.main()                