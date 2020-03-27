//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSAnimationSettings, NSError, SBRemoteTransientOverlayHostViewController, SBUIRemoteAlertButtonAction;

@protocol SBRemoteTransientOverlayHostViewControllerDelegate <NSObject>
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 requestsActionForHandlingButtonEvents:(NSUInteger)arg2;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(SBRemoteTransientOverlayHostViewController *)arg1;
@end
