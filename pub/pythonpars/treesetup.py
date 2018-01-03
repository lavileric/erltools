from distutils.core import setup, Extension

setup (name = 'Tree',
       version = '1.0',
       ext_modules=[Extension('Tree',libraries=['meta','cplus'],library_dirs=['.'],sources=["pythontree.cc"])])
