from setuptools import find_packages, setup

package_name = 'mark_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='saikiran335',
    maintainer_email='saikiran335@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node = mark_py_pkg.my_first_node:main",
            "robot_news_station = mark_py_pkg.robot_news_station:main",
            "smartphone = mark_py_pkg.smartphone:main",
            "number_publisher = mark_py_pkg.number_publisher:main",
            "number_counter = mark_py_pkg.number_counter:main",
            "add_two_ints_server = mark_py_pkg.add_two_ints_server:main",
            "add_two_ints_client_no_oop = mark_py_pkg.add_two_ints_client_no_oop:main",
            "add_two_ints_client = mark_py_pkg.add_two_ints_client:main",
            "reset_counter_client = mark_py_pkg.reset_counter_client:main",
            "reset_counter_client_oop = mark_py_pkg.reset_counter_client_oop:main",
            "hardware_status_publisher = mark_py_pkg.hardware_status_publisher:main",
            "LED_panel = mark_py_pkg.LED_panel:main",
            "Battery = mark_py_pkg.Battery:main"

        ],
    },
)
