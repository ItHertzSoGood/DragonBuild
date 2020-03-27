//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDCloudStoreNotificationCoordinatorObserver-Protocol.h>
#import <PassKitCore/PDPushNotificationConsumer-Protocol.h>
#import <PassKitCore/PDScheduledActivityClient-Protocol.h>

@class NSHashTable, NSMutableArray, PDAssertionManager, PDCloudStoreNotificationCoordinator, PDPeerPaymentWebServiceArchiver, PDPushNotificationManager, PDUserNotificationManager, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;
@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PDWebServiceCoordinatorPassStore;

@interface PDPeerPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDScheduledActivityClient, PDCloudStoreNotificationCoordinatorObserver>
{
    PDPushNotificationManager *_pushNotificationManager;
    NSObject<OS_dispatch_queue> *_sharedPeerPaymentWebServiceQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PDPeerPaymentWebServiceArchiver *_archiver;
    PKPeerPaymentWebService *_sharedPeerPaymentWebService;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentAccount *_mockAccount;
    PDAssertionManager *_assertionManager;
    PDUserNotificationManager *_userNotificationManager;
    id <PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;
    id <PDWebServiceCoordinatorPassStore> _passStore;
    NSMutableArray *_pendingAccountFetches;
    NSMutableArray *_queuedPendingAccountFetches;
    BOOL _isFetchingAccount;
//     struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
    PKPaymentWebService *_paymentWebService;
}

@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator; // @synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator;
// - (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)_mockAccountInitialState;
- (NSUInteger)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2;
- (void)_updateSharedCacheWithAccount:(id)arg1;
- (void)_updateSharedCacheWithWebService:(id)arg1;
- (void)_initalizeCloudStore;
- (void)_initalizeCloudStoreIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_initalizeCloudStoreIfNecessary;
- (void)_archiveSharedPeerPaymentWebServiceContext;
- (void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2;
- (void)_completeUpdatingAccount;
- (void)_updateAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_shouldAttemptBackgroundPeerPaymentPassDownload;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)pushNotificationTopics;
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)_performPeerPaymentReregisterActivityForReason:(id)arg1;
- (void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1;
- (void)_performPeerPaymentPassDownloadActivity;
- (void)_schedulePeerPaymentCoordinatorActivities;
- (void)resetApplePayManateeViewWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_downloadAssociatedPeerPaymentPassWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_hasAssociatedPeerPaymentPass;
- (void)downloadPassIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_peerPaymentPassExists;
- (void)handleMigratedAccount:(id)arg1;
- (void)deleteAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)unregisterDeviceWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)registerDeviceWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)registerDeviceWithForceReregister:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)handleCompanionSerialNumberChanged;
- (void)registrationStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)identityVerificationResponseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)receivedPeerPaymentMessage:(id)arg1;
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;
- (void)accountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateSharedWebServiceContext:(id)arg1;
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;
@property(readonly, nonatomic) PKPeerPaymentWebService *sharedPeerPaymentWebService;
- (void)dealloc;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 dataSource:(id)arg5 passStore:(id)arg6;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)sharedWebService;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4;

@end
