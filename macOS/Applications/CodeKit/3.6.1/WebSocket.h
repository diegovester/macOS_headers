//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, HTTPMessage, NSData, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface WebSocket : NSObject
{
    NSObject<OS_dispatch_queue> *websocketQueue;
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    NSData *term;
    BOOL isStarted;
    BOOL isOpen;
    BOOL isVersion76;
    id delegate;
    BOOL isRFC6455;
    BOOL nextFrameMasked;
    unsigned long long nextOpCode;
    NSData *maskingKey;
}

+ (BOOL)isRFC6455Request:(id)arg1;
+ (BOOL)isVersion76Request:(id)arg1;
+ (BOOL)isWebSocketRequest:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *websocketQueue; // @synthesize websocketQueue;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (BOOL)isValidWebSocketFrame:(unsigned char)arg1;
- (void)didClose;
- (void)didReceiveMessage:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)didOpen;
- (void)sendResponseBody:(id)arg1;
- (id)processKey:(id)arg1;
- (void)sendResponseHeaders;
- (id)secWebSocketKeyResponseHeaderValue;
- (id)locationResponseHeaderValue;
- (id)originResponseHeaderValue;
- (void)readRequestBody;
- (void)stop;
- (void)start;
@property id delegate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 socket:(id)arg2;

@end

