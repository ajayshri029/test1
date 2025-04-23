import unittest
import HtmlTestRunner

if __name__ == '__main__':
    runner = HtmlTestRunner.HTMLTestRunner(
        output='html-report',
        report_title='Unit Test Report',
        descriptions='Test Suite Execution'
    )
    suite = unittest.defaultTestLoader.discover('tests', pattern='test_*.py')
    runner.run(suite)
