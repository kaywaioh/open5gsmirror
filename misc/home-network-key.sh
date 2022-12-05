#!/bin/sh

if [ 1 -ne $# ]
then
    echo You must specify output directory : ./home-network-key.sh ../config/open5gs/sidf
    exit;
fi

openssl genpkey -algorithm X25519 -out $1/private-key-1.pem
openssl pkey -in $1/private-key-1.pem -pubout -out $1/public-key-1.pem

openssl ecparam -name prime256v1 -genkey -conv_form compressed -out $1/private-key-2.pem
openssl ec -in $1/private-key-2.pem -pubout -conv_form compressed -out $1/public-key-2.pem
