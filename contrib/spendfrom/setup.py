from distutils.core import setup
setup(name='BTSspendfrom',
      version='1.0',
      description='Command-line utility for BTS "coin control"',
      author='Gavin Andresen',
      author_email='gavin@BTSfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
