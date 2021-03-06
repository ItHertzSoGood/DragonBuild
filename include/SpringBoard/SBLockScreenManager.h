//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/CSCoverSheetViewControllerDelegate-Protocol.h>
#import <SpringBoard/CSWallpaperColorProvider-Protocol.h>
#import <SpringBoard/SBCoverSheetPresentationDelegate-Protocol.h>
#import <SpringBoard/SBFPrivateAuthenticationObserver-Protocol.h>
#import <SpringBoard/SBHomeButtonShowPasscodeRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBHomeButtonSuppressAfterUnlockRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBLockScreenBiometricAuthenticationCoordinatorDelegate-Protocol.h>
#import <SpringBoard/SBPasscodeEntryTransientOverlayViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBSRemoteAlertHandleObserver-Protocol.h>
#import <SpringBoard/SBTapToWakeDelegate-Protocol.h>
#import <SpringBoard/SBUILockStateProvider-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class CSCoverSheetViewController, NSMutableDictionary, NSMutableSet, NSString, SBCoverSheetBiometricResourceObserver, SBFAuthenticationAssertion, SBFUserAuthenticationController, SBIdleTimerCoordinatorHelper, SBLiftToWakeManager, SBLockScreenAutoUnlockAggregateRule, SBLockScreenBiometricAuthenticationCoordinator, SBLockScreenDisabledAssertionManager, SBLockScreenOrientationManager, SBLockScreenUnlockRequest, SBPasscodeEntryTransientOverlayViewController, SBPearlInterlockObserver, SBSRemoteAlertHandle, SBTapToWakeController, UINotificationFeedbackGenerator;
@protocol SBFLockOutStatusProvider, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, SBLockScreenEnvironment, SBNotificationDestination;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBIdleTimerProviding, SBIdleTimerCoordinating>
{
    SBLockScreenBiometricAuthenticationCoordinator *_biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver *_biometricResourceObserver;
    SBPearlInterlockObserver *_pearlInterlockObserver;
    id <SBLockScreenEnvironment> _lockScreenEnvironment;
    id <SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
    id <SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
    BOOL _allowDisablePasscodeLockAssertion;
    BOOL _allowUILockUnlock;
    BOOL _isScreenOn;
    BOOL _isUILocked;
    SBLockScreenUnlockRequest *_unlockRequest;
    BOOL _saveUnlockRequest;
    BOOL _uiHasBeenLockedOnce;
    BOOL _uiUnlocking;
    SBPasscodeEntryTransientOverlayViewController *_passcodeEntryTransientOverlayViewController;
    BOOL _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    BOOL _isInLostMode;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBSRemoteAlertHandle *_wakeToRemoteAlertHandle;
    id /* CDUnknownBlockType */ _alertLaunchFinish;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_userAuthController;
    SBLiftToWakeManager *_liftToWakeManager;
    SBTapToWakeController *_tapToWakeController;
    NSMutableDictionary *_mesaCoordinatorDisabledAssertions;
    NSMutableDictionary *_mesaWalletPreArmDisabledAssertions;
    NSMutableSet *_mesaWalletPreArmDisabledReasons;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary *_mesaUnlockingDisabledAssertions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UINotificationFeedbackGenerator *_authenticationFeedbackGenerator;
    BOOL _isWaitingToLockUI;
    SBLockScreenOrientationManager *_lockScreenOrientationManager;
    id /* CDUnknownBlockType */ _unlockActionBlock;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ unlockActionBlock; // @synthesize unlockActionBlock=_unlockActionBlock;
@property(readonly) BOOL isWaitingToLockUI; // @synthesize isWaitingToLockUI=_isWaitingToLockUI;
@property(readonly, nonatomic) SBLockScreenOrientationManager *lockScreenOrientationManager; // @synthesize lockScreenOrientationManager=_lockScreenOrientationManager;
@property(retain, nonatomic, getter=_tapToWakeController, setter=_setTapToWakeController:) SBTapToWakeController *tapToWakeController; // @synthesize tapToWakeController=_tapToWakeController;
@property(retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager; // @synthesize liftToWakeManager=_liftToWakeManager;
@property(retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController; // @synthesize userAuthController=_userAuthController;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(nonatomic, getter=isUIUnlocking) BOOL UIUnlocking; // @synthesize UIUnlocking=_uiUnlocking;
@property(readonly) BOOL isUILocked; // @synthesize isUILocked=_isUILocked;
@property(readonly, nonatomic) id <SBLockScreenEnvironment> lockScreenEnvironment; // @synthesize lockScreenEnvironment=_lockScreenEnvironment;
// - (void).cxx_destruct;
- (void)_emulateInterstitialPasscodePresentation;
- (BOOL)_shouldEmulateInterstitialPresentation;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)extendedKeybagLockStateChanged:(BOOL)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1;
- (void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)arg1;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (BOOL)_shouldUnlockUIOnKeyDownEvent;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent )arg1;
- (BOOL)_shouldBeInSetupMode;
- (void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)arg1;
- (void)activationChanged:(id)arg1;
- (void)enableLostModePlugin;
- (BOOL)isInLostMode;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1;
- (void)activateLostModeForRemoteLock:(BOOL)arg1;
- (void)_lockFeaturesForRemoteLock:(BOOL)arg1;
- (void)remoteLock:(BOOL)arg1;
- (BOOL)handlesHomeButtonSinglePresses;
- (void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg1;
- (void)noteMenuButtonDoublePress;
- (void)noteMenuButtonSinglePress;
- (void)_lockScreenDimmed:(id)arg1;
- (void)_handleBacklightDidTurnOff:(id)arg1;
- (void)_handleBacklightLevelWillChange:(id)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_evaluatePreArmDisabledAssertions;
- (void)_setupModeChanged;
- (void)_activeCallStateChanged;
- (void)attemptUnlockWithMesa;
- (void)attemptUnlockWithPasscode:(id)arg1;
- (void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3;
- (BOOL)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_setMesaUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_postLockCompletedNotification:(BOOL)arg1;
- (void)_noteStartupTransitionDidBegin;
- (void)_noteStartupTransitionWillBegin;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_prepareWallpaperForStaticMode;
- (void)_prepareWallpaperForInteractiveMode;
- (void)_evaluateWallpaperMode;
- (void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg1;
- (void)_setHomeButtonShowPasscodeRecognizer:(id)arg1;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (BOOL)_unlockWithRequest:(id)arg1 cancelPendingRequests:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)unlockWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_isPasscodeVisible;
- (BOOL)isPasscodeEntryTransientOverlayVisible;
- (BOOL)_setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isUnlockDisabled;
- (void)_runUnlockActionBlock:(BOOL)arg1;
- (BOOL)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id )arg1;
- (void)_sendUILockStateChangedNotification;
- (BOOL)_lockUI;
- (void)_reallySetUILocked:(BOOL)arg1;
- (void)_setUILocked:(BOOL)arg1;
- (void)_createAuthenticationAssertion;
- (void)_clearAuthenticationLockAssertion;
- (void)_relockUIForButtonlikeSource:(int)arg1 afterCall:(BOOL)arg2;
- (void)_disconnectActiveCallIfNeededFromSource:(int)arg1;
- (BOOL)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
- (void)_activateLockScreenAnimated:(BOOL)arg1 animationProvider:(id /* CDUnknownBlockType */)arg2 automatically:(BOOL)arg3 inScreenOffMode:(BOOL)arg4 dimInAnimation:(BOOL)arg5 dismissNotificationCenter:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)_setMesaAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_setMesaCoordinatorDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_setWalletPreArmDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_handleAuthenticationFeedback:(id)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg1;
- (void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg1;
- (BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsAuthenticationFeedback:(id)arg2;
- (BOOL)biometricAuthenticationCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2;
- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg1;
- (void)_wakeScreenForTapToWake;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)newLegibilitySettingsProvider;
- (double)contrastForCurrentWallpaper;
- (id)averageColorForCurrentWallpaperInScreenRect:(CGRect)arg1;
- (id)averageColorForCurrentWallpaper;
- (void)coverSheetViewController:(id)arg1 unlockWithRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)coverSheetViewController:(id)arg1 requestsTouchIDDisabled:(BOOL)arg2 forReason:(id)arg3;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(id)arg1;
- (void)lockScreenViewControllerRequestsUnlock;
- (void)coverSheetPresentationManager:(id)arg1 unlockWithRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)lockScreenViewControllerDidDismiss;
- (void)lockScreenViewControllerWillDismiss;
- (void)lockScreenViewControllerDidPresent;
- (void)lockScreenViewControllerWillPresent;
- (void)loadViewsIfNeeded;
- (void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2;
@property(readonly) BOOL bioAuthenticatedWhileMenuButtonDown;
- (BOOL)_canHandleTransitionRequest:(id)arg1;
- (BOOL)handleTransitionRequest:(id)arg1;
- (id)biometricAuthenticationCoordinator;
@property(readonly, nonatomic) id <SBNotificationDestination> notificationDestination;
@property(readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
@property(readonly) BOOL isLockScreenVisible;
@property(readonly) BOOL isLockScreenActive;
@property(readonly) BOOL shouldPlayLockSound;
@property(readonly) BOOL shouldTapToWake;
@property(readonly) BOOL shouldHandlePocketStateChanges;
- (BOOL)shouldLockUIAfterEndingCall;
- (BOOL)_shouldLockAfterEndingFaceTimeCall;
- (BOOL)_shouldLockAfterEndingTelephonyCall;
- (BOOL)hasUIEverBeenLocked;
- (id)_newLockScreenEnvironment;
- (id)init;

@end

