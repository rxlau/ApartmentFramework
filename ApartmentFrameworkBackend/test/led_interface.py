import socket

def connect(address, port):

    sockfd = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sockfd.connect(address, port)

    return sockfd

def send_data(sockfd, id, data):

    msg = [16, 16, 16] + [id] + data
    sockfd.send(msg)

