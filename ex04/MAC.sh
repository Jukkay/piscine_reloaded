ifconfig -a | grep 'ether ' | sed s/ether// | cut -b 3-19
