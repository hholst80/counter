FROM ubuntu:18.04 AS build
RUN apt-get update
RUN apt-get install -y gcc libklibc-dev
COPY counter.c ./
RUN klcc -static -Os -o counter counter.c
RUN strip counter

FROM scratch
COPY --from=build counter /usr/local/bin/
ENTRYPOINT [ "counter" ]
