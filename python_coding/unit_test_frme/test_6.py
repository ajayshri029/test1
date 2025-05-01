#!/usr/bin/env python3

import unittest
def add(a,b):
    return a+b

class TestSample(unittest.TestCase):
    def test_1(self):
        c = add(10,20)
        self.assertEqual(290,c,msg="failed....!")


if __name__=='__main__':
    unittest.main()
