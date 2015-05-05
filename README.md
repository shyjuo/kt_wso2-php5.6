
#wso2 for PHP ( Still in progress ) 
#### Installation process for PHP 5.6.7-1 / Ubuntu 14.04-LTS

#1.0 Compilation from source. 

##1.1 Ubuntu 14.04-LTS pre-requirements

Grab a fresh Ubuntu Distro and install OpenSSH and the VM tools
Log into Ubuntu and install the following packages : 

### PHP 5.6
Natively Ubuntu 14.04-LTS Does not provide the last version of PHP 5.6. In order to install it we need to relay on a different repo.

The command below will configure  Ubuntu 14.04-LTS to get PHP 5.6. 

```bash
sudo bash 
echo "deb http://ppa.launchpad.net/ondrej/php5-5.6/ubuntu trusty main" > /etc/apt/sources.list.d/ondrej-php5-5_6-trusty.list

apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 4F4EA0AAE5267A6C
```
Finally a simple :

`sudo apt-get update && apt-get install php5 php5-mysql` 

will do the trick. 

To test if everything is working as expected you can run the following command : 

`php -v`

the output would be : 

```
PHP 5.6.7-1+deb.sury.org~trusty+1 (cli) (built: Mar 24 2015 11:21:10) 
Copyright (c) 1997-2015 The PHP Group
Zend Engine v2.6.0, Copyright (c) 1998-2015 Zend Technologies
    with Zend OPcache v7.0.4-dev, Copyright (c) 1999-2015, by Zend Technologies
```

### Build, Libs and git. 

In order to compile wso2 for PHP you need to install several tools / libs. This can be done with the following statement : 

```bash
sudo apt-get install git build-essentials automake libtool g++ gcc-4.4 pkg-config pkg-config-aarch64-linux-gnu libxml2 php5-dev php5-xsl 
```

Then prepare the filesystem : 

```bash
mkdir  /kroknet.io
cd /kroknet.io
```

Now time to grab the sources and go at the right folder : 

```bash
git clone https://github.com/Estebita/ws02-php5.6.git
cd ws02-php5.6/php
```

Reconfigure everything with : 

```bash
autoreconf -f -s -i
```

run the configure script with the following command : 

```bash
./configure --enable-openssl CC=gcc-4.4
```

Once the configure script is terminated compile and install ( According to your setup, this can take a while, have fun with a coffe )
```
make && make install 
```

> **NOTE:** All depedencies are installed under `/usr/local/wsf`. You can change the default PREFIX through `--prefix=%YOURPATH%`. Please this is discouraged as i didn't performed any tests on it. 

### PHP and WSF-PHP

Go under the php mods-available folder : 

```
cd /etc/php5/mods-available
touch wsf.ini
```

open this new file w/ your favorite editor and paste the following content : 

```
extension=wsf.so
wsf.home=/usr/local/wsf_c
```

then run the following command : 

```
php5enmod wsf
```

You can test if everything work by typing : 

```bash  
php -i | grep wsf
```
this will output something like : 

```ini
wsf support => enabled
wsf version => 2.1.0
wsf.attachment_cache_dir => /tmp => /tmp
wsf.enable_attachment_caching => 0 => 0
wsf.home => no value => no value
wsf.log_level => 4 => 4
wsf.log_path => /tmp => /tmp
wsf.rm_db_dir => /tmp => /tmp
```
The output above correspond to all configuration directive, please refer to the ws02 documentation ( TBA )


WSO2 Web Services Framework
===
http://wso2.com/products/web-services-framework/c/

http://wso2.com/products/web-services-framework/cpp/

http://wso2.com/products/web-services-framework/php/

The project is dead and the "official" Github repository is not updated. https://github.com/wso2/wsf/

The Subversion repository is more complete, yet still not maintained. https://svn.wso2.org/repos/wso2/trunk/wsf/

You may be able to find a fork that suits your needs.  Add them here.

Forks
====
https://github.com/gillesgagniard/wso2-wsf-cpp-gg

https://github.com/techhead/wsf

https://github.com/calders/wsf
