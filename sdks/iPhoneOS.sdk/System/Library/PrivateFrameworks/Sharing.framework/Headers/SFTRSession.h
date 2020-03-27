//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SFSession, TRAnisetteDataHandler, TRSession;
@protocol OS_dispatch_queue;

@interface SFTRSession : NSObject
{
    BOOL _activateCalled;
    TRAnisetteDataHandler *_anisetteDataHandler;
    BOOL _invalidateCalled;
    NSMutableDictionary *_handlerMap;
    BOOL _connected;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFSession *_session;
    id /* CDUnknownBlockType */ _disconnectHandler;
    id /* CDUnknownBlockType */ _sendEventImpHandler;
    id /* CDUnknownBlockType */ _sendRequestImpHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sendRequestImpHandler; // @synthesize sendRequestImpHandler=_sendRequestImpHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sendEventImpHandler; // @synthesize sendEventImpHandler=_sendEventImpHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(retain, nonatomic) SFSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (id)_decodeTRMessageData:(id)arg1 kindOfClass:(Class)arg2;
@property(readonly, nonatomic) TRSession *trSession;
- (void)setRequestHandler:(id /* CDUnknownBlockType */)arg1 forRequestClass:(Class)arg2;
- (void)setEventHandler:(id /* CDUnknownBlockType */)arg1 forEventClass:(Class)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)sendEvent:(id)arg1;
- (void)disconnect;
- (void)handleRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* CDUnknownBlockType */)arg3;
- (void)handleEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end
