# docker build -f modsecurity_debian12.dockerfile -t debian_ms_hs:12 .

FROM debian:12

RUN apt-get update && apt-get install -y \
    git \
    g++ \
    apt-utils \
    autoconf \
    automake \
    build-essential \
    libcurl4-openssl-dev \
    libgeoip-dev \
    liblmdb-dev \
    libpcre3-dev \
    libtool \
    libxml2-dev \
    libyajl-dev \
    pkgconf \
    wget \
    zlib1g-dev \
    libhyperscan-dev

RUN git clone --depth 1 -b v3/dev/hyperscan --single-branch https://github.com/alexprivalov/ModSecurity.git \
    && cd ModSecurity \
    && git submodule init \
    && git submodule update \
    && git config --global --add safe.directory '*' \
    && ./build.sh \
    && ./configure --with-hyperscan --prefix=`pwd`/install \
    && make -j4 \
    && make install
