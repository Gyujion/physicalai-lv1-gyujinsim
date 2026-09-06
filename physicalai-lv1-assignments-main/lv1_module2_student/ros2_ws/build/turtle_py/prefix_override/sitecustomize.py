import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sgjzz1/git/physicalai-lv1-gyujinsim/physicalai-lv1-assignments-main/lv1_module2_student/ros2_ws/install/turtle_py'
