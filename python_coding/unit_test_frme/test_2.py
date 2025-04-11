#!/usr/bin/env python3
import unittest

def add(a,b):
    return a+b


class Test_sample_2(unittest.TestCase):
    def setUp(self):
        print("this is setup function")

    def tearDown(self):
        print("this is tearDown function")

    def test_add(self):
        c=add(10,20)
        self.assertEqual(c,30,"passed")


if __name__=='__main__':
    unittest.main()
