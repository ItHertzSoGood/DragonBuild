//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXMutableCuratedLibraryItemCountsController-Protocol.h>

@class NSObject, PXCuratedLibraryAssetsDataSourceManager;
@protocol OS_dispatch_queue, PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryItemCountsController : PXObservable <PXMutableCuratedLibraryItemCountsController, PXAssetsDataSourceManagerObserver>
{
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;
    BOOL _isCountingAssetTypes;
    BOOL _hasUsableCounts;
    BOOL _waitingToPrepare;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    id <PXCuratedLibraryEventLogger> _eventLogger;
    CDStruct_aa0b146f _counts;
}

@property(nonatomic) BOOL waitingToPrepare; // @synthesize waitingToPrepare=_waitingToPrepare;
@property(nonatomic) BOOL hasUsableCounts; // @synthesize hasUsableCounts=_hasUsableCounts;
@property(nonatomic) BOOL isCountingAssetTypes; // @synthesize isCountingAssetTypes=_isCountingAssetTypes;
@property(readonly, nonatomic) CDStruct_aa0b146f counts; // @synthesize counts=_counts;
@property(retain, nonatomic) id <PXCuratedLibraryEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateEventLogging;
- (void)_updateCounts;
- (void)_handlePreparationCompletion;
- (BOOL)_prepareCounts;
- (void)prepareCountsIfNeeded;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (id)init;

@end
