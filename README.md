# yum install https://dl.fedoraproject.org/pub/epel/epel-release-latest-7.noarch.rpm 
Installation

# yum remove libreswan 

# yum install strongswan 

- Configure StrongSwan 

Notes: 

   - ANY changes to ipsec.conf/ipsec.secrets REQUIRED a restart of
strongswan 

# umask 022 

# sed -i -e 's/# file/file/' \
/etc/strongswan/strongswan.d/charon/resolve.conf 

# cd /etc/strongswan/ipsec.d/cacerts/. && \
curl -O http://www.ni.com/data/crl/Natinst-Root-CA-2.crt

# cat > /etc/strongswan/ipsec.conf << EOF
# ipsec.conf - strongSwan IPsec configuration file 

config setup 

conn %default
     ikelifetime=8h
     reauth=no
     keylife=20m
     rekeymargin=3m
     keyingtries=1
     keyexchange=ikev2
     mobike = yes 

conn ni-vpn
     left=%any
     leftsourceip=%config
     leftfirewall=yes
     leftauth=eap-mschapv2 

     right=vpn.natinst.com
     rightid=%vpn.natinst.com
     rightcert=Natinst-Root-CA-2.crt
     rightsubnet=0.0.0.0/0 

     auto=add
EOF

#systemctl enable strongswan 

# systemctl start strongswan 
Notes

You need to run the command below anytime the daemon is restarted

# strongswan stroke <e-mail|ad_username> ni-vpn <username> 
How to Connect 

On the linux cli, type "# strongswan up ni-vpn" 

wait for Microsoft Authenticator to notify you and push "Approve"
You're connected!
How to Disconnect

On the linux cli, type "# strongswan down ni-vpn"
