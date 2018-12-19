FROM ubuntu:18.04 AS builder
RUN apt-get update
RUN apt-get install -y gcc libklibc-dev
COPY counter.c itoa.c itoa.h ./
RUN klcc -static -Os -o counter counter.c itoa.c
RUN strip counter

FROM scratch
COPY --from=builder counter /usr/local/bin/
ENTRYPOINT [ "counter" ]
