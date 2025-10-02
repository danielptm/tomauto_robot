from setuptools import find_packages
from setuptools import setup

setup(
    name='tomauto_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('tomauto_interfaces', 'tomauto_interfaces.*')),
)
