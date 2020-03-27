//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCompoundAssertionState-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable>
{
//     struct os_unfair_lock_s _syncLock;
    BOOL _syncLock_invalid;
    id /* CDUnknownBlockType */ _syncLock_block;
//     struct os_unfair_lock_s _dataLock;
    NSMutableSet *_dataLock_acquisitions;
    NSString *_dataLock_identifierPrefix;
}

+ (id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)assertionWithIdentifier:(id)arg1;
+ (id)new;
// - (void).cxx_destruct;
- (void)_acquisitionDidInvalidate:(id)arg1;
- (void)_syncLock_acquisitionDidInvalidate:(id)arg1;
- (id)_syncLock_acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)_dataLock_context;
- (id)_dataLock_copyState;
- (id)acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)acquireForReason:(id)arg1;
@property(readonly) NSSet *reasons;
@property(readonly) NSSet *context;
@property(readonly, getter=isActive) BOOL active;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;

@end
