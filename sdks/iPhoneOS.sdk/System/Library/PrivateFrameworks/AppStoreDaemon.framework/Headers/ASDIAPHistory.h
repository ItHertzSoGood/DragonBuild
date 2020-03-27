//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker;

@interface ASDIAPHistory : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withResultHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getAllIAPsForActiveAccountWithResultHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end
