//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg
{
}

- (BOOL)hasExitStationManeuver;
- (BOOL)hasEnterStationManeuver;
- (BOOL)isTransfer;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(_NSRange)arg3 transitStepRange:(_NSRange)arg4 pointRange:(_NSRange)arg5;

@end
