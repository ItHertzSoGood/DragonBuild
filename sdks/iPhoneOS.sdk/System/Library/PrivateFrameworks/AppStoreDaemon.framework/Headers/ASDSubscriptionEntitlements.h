//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject
{
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
    int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(NSUInteger)arg1 withResultHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg1 ignoreCaches:(BOOL)arg2 withCacheInfoResultHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg1 ignoreCaches:(BOOL)arg2 withResultHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(NSUInteger)arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (id)init;

@end
