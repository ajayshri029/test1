#!/usr/bin/env python3
import unittest


class Test_sample_one(unittest.TestCase):
    def test_so(self): 
        self.assertEqual(1,1)

if __name__=='__main__':
    unittest.main()        