//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAudioZeroFilter;
@protocol CSVoiceTriggerAwareZeroFilterDelegate;

@interface CSVoiceTriggerAwareZeroFilter : NSObject
{
    float _sampleRate;
    id <CSVoiceTriggerAwareZeroFilterDelegate> _delegate;
    NSUInteger _vtEndInSampleCount;
    NSUInteger _numSamplesProcessed;
    CSAudioZeroFilter *_zeroFilter;
}

@property(retain, nonatomic) CSAudioZeroFilter *zeroFilter; // @synthesize zeroFilter=_zeroFilter;
@property(nonatomic) NSUInteger numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(nonatomic) NSUInteger vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) __weak id <CSVoiceTriggerAwareZeroFilterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)metrics;
- (void)flush;
- (void)processBuffer:(id)arg1 atTime:(NSUInteger)arg2;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(BOOL)arg2 voiceTriggerInfo:(id)arg3;
- (id)init;

@end
