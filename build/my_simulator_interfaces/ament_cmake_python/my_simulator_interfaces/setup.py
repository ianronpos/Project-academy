from setuptools import find_packages
from setuptools import setup

setup(
    name='my_simulator_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_simulator_interfaces', 'my_simulator_interfaces.*')),
)
