# coding: utf-8

from websocket import create_connection
import argparse


def main():
    args = get_args()
    req_url = 'ws://{}'.format(args.host)
    print('Connect to {}'.format(req_url))
    ws = create_connection(req_url)

    if args.message:
        ws.send(args.message)
        print(ws.recv())

    print('Close')
    ws.close()


def get_args():
    parser = argparse.ArgumentParser()

    parser.add_argument('--message', type=str)
    parser.add_argument('--host', type=str, default='localhost:8080')

    args = parser.parse_args()

    return args


if __name__ == '__main__':
    main()
