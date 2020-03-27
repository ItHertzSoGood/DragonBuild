//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RPRemoteDisplayXPCClientInterface-Protocol.h>

@class NSArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface>
{
    BOOL _activateCalled;
    NSMutableDictionary _discoveredDevices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSUInteger _controlFlags;
    id /* CDUnknownBlockType */ _deviceFoundHandler;
    id /* CDUnknownBlockType */ _deviceLostHandler;
    id /* CDUnknownBlockType */ _deviceChangedHandler;
    NSUInteger _errorFlags;
    id /* CDUnknownBlockType */ _errorFlagsChangedHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorFlagsChangedHandler; // @synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler;
@property(nonatomic) NSUInteger errorFlags; // @synthesize errorFlags=_errorFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(nonatomic) NSUInteger controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (BOOL)shouldReportDevice:(id)arg1;
- (void)_lostAllDevices;
- (void)remoteDisplayUpdateErrorFlags:(NSUInteger)arg1;
- (void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayLostDevice:(id)arg1;
- (void)remoteDisplayFoundDevice:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *discoveredDevices;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
