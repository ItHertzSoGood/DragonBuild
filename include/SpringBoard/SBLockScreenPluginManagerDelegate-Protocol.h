//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBLockScreenPlugin, SBLockScreenPluginAction, SBLockScreenPluginManager;

@protocol SBLockScreenPluginManagerDelegate <NSObject>
- (BOOL)pluginManager:(SBLockScreenPluginManager *)arg1 plugin:(SBLockScreenPlugin *)arg2 handleAction:(SBLockScreenPluginAction *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidChangeFromPlugin:(SBLockScreenPlugin *)arg2 toPlugin:(SBLockScreenPlugin *)arg3;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 displayedPluginDidUpdateAppearance:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 activePluginDidChange:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 willUnloadPlugin:(SBLockScreenPlugin *)arg2;
- (void)pluginManager:(SBLockScreenPluginManager *)arg1 didLoadPlugin:(SBLockScreenPlugin *)arg2;
@end

