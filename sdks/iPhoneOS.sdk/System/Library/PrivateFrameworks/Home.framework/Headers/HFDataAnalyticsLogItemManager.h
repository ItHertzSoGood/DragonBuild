//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFDataAnalyticsModule;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemManager : HFItemManager
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsModule *_dataAnalyticsModule;
}

@property(readonly, nonatomic) HFDataAnalyticsModule *dataAnalyticsModule; // @synthesize dataAnalyticsModule=_dataAnalyticsModule;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
// - (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;

@end
