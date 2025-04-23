#!/usr/bin/env python3
import unittest

def add(x,y):
    return x+y

def sub(x,y):
    return x-y 

def mul(x,y):
    return x*y       

class Test_sampletwo(unittest.TestCase):

    def test_add(self):
        z=add(1,2)
        self.assertEqual(3,z,msg='failed for non equivalence')

    def test_sub(self):
        z=sub(2,2)
        self.assertEqual(0,z,msg='failed for non equivalence')    

    def test_mul(self):
        z=mul(2,2)
        self.assertEqual(4,z,msg='failed for non equivalence')        

if __name__=='__main__':
    unittest.main()