#!/bin/bash

curl -s "$1" | grep 'class="price" itemprop="lowPrice"' | awk '{ print $6 $7 }' >> aux.txt

