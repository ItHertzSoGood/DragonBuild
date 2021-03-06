//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBCardItemsControllerRemoteInterface-Protocol.h>

@class MCProfileConnection, NSMutableArray, NSMutableDictionary, NSXPCListener, SBWalletNotificationSource;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate>
{
    NSMutableDictionary *_cardItems;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    MCProfileConnection *_profileConnection;
    BOOL _cardWhileLockedAllowed;
    SBWalletNotificationSource *_walletNotificationSource;
}

@property(retain, nonatomic) SBWalletNotificationSource *walletNotificationSource; // @synthesize walletNotificationSource=_walletNotificationSource;
// - (void).cxx_destruct;
- (void)_updateRestrictions;
- (void)_deactivateCardItem:(id)arg1;
- (void)_updateCardItem:(id)arg1;
- (void)_activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@end

