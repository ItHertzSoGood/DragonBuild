//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSPerSitePreferenceManager.h>

#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>

@class WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_geolocationPreference;
}

@property(readonly, nonatomic) WBSPerSitePreference *geolocationPreference; // @synthesize geolocationPreference=_geolocationPreference;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // @synthesize perSitePreferencesStore=_perSitePreferencesStore;
// - (void).cxx_destruct;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_isDateLessThanOneDayAgo:(id)arg1;
- (id)perSitePreferenceValueForGeolocationSetting:(long long)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (void)_removePermissionsPassingTest:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removeAllPermissions;
- (void)removeAllTemporaryPermissions;
- (void)setDefaultGeolocationSetting:(long long)arg1;
- (void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithPerSitePreferencesStore:(id)arg1;

@end
