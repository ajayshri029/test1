#!/usr/bin/env python3
import unittest

def addition(a,b):
    return a+b

class Test_sample(unittest.TestCase):
    def setUp(self):
        print("this is setup function")
    
    def tearDown(self):
        print("this is teardown function")

    def test_1(self):
        c = addition(10,20)
        self.assertEqual(c,30,msg='failed')
        
    def test_2(self):
        c = addition(10,10)
        self.assertEqual(c,10,msg="failed")    

if __name__=="__main__":
    unittest.main()

