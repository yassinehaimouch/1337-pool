#!/bin/sh
ifconfig | grep 'ether ' | cut -b 7-24 | tr -d " "
