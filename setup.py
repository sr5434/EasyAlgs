from setuptools import setup, find_packages
setup(
  name = 'EasyAlgs',
  version = '0.1',
  description = "Easily accessible algorithms.",
  long_description = "A library with formulas and algorithms for many different fields.",
  author = "Jay Fang, Dhruv Rakhade, Samir Rangwalla",
  author_email = "jjayhappy9@gmail.com, dhruv.rakhade08@gmail.com, samir.rangwalla@gmail.com",
  url = "https://github.com/sr5434/EasyAlgs",
  license = "MIT",
  packages = find_packages(),
  install_requires = [
    'cppimport',
    'pybind11',
    ],
)
