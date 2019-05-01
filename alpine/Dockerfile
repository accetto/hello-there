# docker build -t accetto/hello-there-alpine .
# docker run --name=hello-alpine accetto/hello-there-alpine
# docker start -i hello-alpine

FROM alpine

ENV REFRESHED_AT 2019-05-01

LABEL vendor="accetto" \
    maintainer="https://github.com/accetto" \
    any.accetto.description="Minimal hello-there-alpine container" \
    any.accetto.display-name="Minimal hello-there-alpine container" \
    any.accetto.expose-services="none" \
    any.accetto.tags="hello-there, alpine"

WORKDIR /usr/src/hello

COPY ./src .

RUN apk add --no-cache build-base \
    && gcc hello.c -o hello \
    && apk del --purge build-base

CMD ["./hello"]
