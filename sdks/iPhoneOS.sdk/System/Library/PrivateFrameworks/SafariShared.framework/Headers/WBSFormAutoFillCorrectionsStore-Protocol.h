//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSString;

@protocol WBSFormAutoFillCorrectionsStore <NSObject>
- (void)removeAllLocalClassificationsWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)removeLocalClassificationsForDomain:(NSString *)arg1 recordedOnOrAfter:(NSDate *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)getClassificationForFieldWithFingerprint:(NSString *)arg1 onDomain:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setCrowdsourcedClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)setLocalClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
@end
