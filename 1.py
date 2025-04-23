#!/usr/bin/env python3
# print("ajay")
import  unittest

class Test_sample(unittest.TestCase):
    def test_one(self):
        self.assertEqual(1,1)

if __name__ == '__main__':
    unittest.main()
