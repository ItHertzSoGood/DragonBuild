//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface MapsSuggestionsRelevanceScorer : NSObject
{
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

// - (void).cxx_destruct;
- (id)_postProcessConfidences;
- (void)_processScorerConfidences:(id)arg1 names:(id)arg2 addresses:(id)arg3 mapItems:(id)arg4 error:(id)arg5;
- (BOOL)_preProcessNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3;
- (void)_confidenceForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 scorerIndex:(NSUInteger)arg4 group:(id)arg5;
- (id)_confidenceForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3;
- (void)preLoadAllScorers;
- (id)confidenceForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceForMapItems:(id)arg1;
- (void)addScorer:(id)arg1;
- (id)init;

@end
