//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject
{
    NSString *_ratingName;
    NSString *_ratingDescription;
}

@property(readonly, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(retain, nonatomic) NSString *ratingName; // @synthesize ratingName=_ratingName;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRatingDescription:(id)arg1;

@end
