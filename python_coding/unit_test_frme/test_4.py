#!/usr/bin/env python3
import unittest

def mul(a,b):
    return a*b

def is_in_range(n, low, high):
    return low <= n <= high

class TestSample_test(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass
        
    def test_1(self):
        c = mul(a=10,b=20)
        self.assertEqual(c,33,msg='failed')

    def test_2(self):
        k = is_in_range(127,0,127)    
        self.assertTrue(k,msg='failed')


    

if __name__=='__main__':
    unittest.main()

