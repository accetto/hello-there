# docker build -t accetto/hello-there-debian .
# docker run --name=hello-debian accetto/hello-there-debian
# docker start -i hello-debian

FROM debian:stretch-slim

ENV REFRESHED_AT 2019-05-01

LABEL vendor="accetto" \
    maintainer="https://github.com/accetto" \
    any.accetto.description="Minimal hello-there-debian container" \
    any.accetto.display-name="Minimal hello-there-debian container" \
    any.accetto.expose-services="none" \
    any.accetto.tags="hello-there, debian"

WORKDIR /usr/src/hello
    
COPY ./src .

RUN apt-get update \
    && apt-get install -y --no-install-recommends gcc libc6-dev \
    && gcc hello.c -o hello \
    && apt-get remove -y --purge gcc libc6-dev \
    && apt-get autoremove -y --purge \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
    
CMD ["./hello"]
