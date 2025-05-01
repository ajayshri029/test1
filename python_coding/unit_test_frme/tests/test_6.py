#!/bin/env python3

import unittest

def add_fun(a,b):
    return a+b

class Sample_Test(unittest.TestCase):
    def test_1(self):
        c = add_fun(10,20)
        self.assertEqual(30,c,msg="failed.....!")

    def test_2(self):
        c = add_fun(10,20)
        self.assertNotEqual(31,c,msg="failed.....!")    

if __name__=="__main__":
    unittest.main()
