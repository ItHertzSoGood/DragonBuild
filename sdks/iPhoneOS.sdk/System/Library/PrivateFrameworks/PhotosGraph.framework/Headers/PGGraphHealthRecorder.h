//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphHealthRecording-Protocol.h>

@interface PGGraphHealthRecorder : NSObject <PGGraphHealthRecording>
{
}

- (void)recordNumberOfHighlightEnrichmentTimeouts:(NSUInteger)arg1;
- (void)recordNumberOfHighlightEnrichmentsCancelled:(NSUInteger)arg1;
- (void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2;
- (void)recordNumberOfGraphRebuildsCancelled:(NSUInteger)arg1;
- (void)recordNumberOfUnscheduledRebuilds:(NSUInteger)arg1;
- (void)recordNumberOfGraphRebuildTimeouts:(NSUInteger)arg1;
- (void)recordNumberOfGraphRebuildFailures:(NSUInteger)arg1;
- (void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2;

@end
