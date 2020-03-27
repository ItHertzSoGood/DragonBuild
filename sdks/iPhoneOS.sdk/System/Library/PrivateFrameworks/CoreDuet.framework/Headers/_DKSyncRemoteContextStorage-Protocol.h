//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSArray, NSDictionary, NSString, _DKSyncPeer;
@protocol _DKSyncRemoteContextStorageDelegate;

@protocol _DKSyncRemoteContextStorage <_DKSyncRemoteStorage>
- (void)setDelegate:(id <_DKSyncRemoteContextStorageDelegate>)arg1;
- (void)sendContextValuesToPeer:(_DKSyncPeer *)arg1 registrationIdentifier:(NSString *)arg2 archivedObjects:(NSDictionary *)arg3 highPriority:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchContextValuesFromPeer:(_DKSyncPeer *)arg1 forKeyPaths:(NSArray *)arg2 highPriority:(BOOL)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(_DKSyncPeer *)arg1 registrationIdentifier:(NSString *)arg2 predicate:(NSDictionary *)arg3 highPriority:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(_DKSyncPeer *)arg1 registrationIdentifier:(NSString *)arg2 predicate:(NSDictionary *)arg3 highPriority:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
@end
