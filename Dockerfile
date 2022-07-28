FROM gcc:8.5

RUN mkdir /app
WORKDIR /app

COPY index.sh ./
COPY build-watcher.sh ./
COPY ./src/ ./src/

EXPOSE 80

CMD ["bash", "./build-watcher.sh"]