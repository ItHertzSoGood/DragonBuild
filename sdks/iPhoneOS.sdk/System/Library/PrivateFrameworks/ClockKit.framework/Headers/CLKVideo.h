//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLKDevice, NSString, NSURL;

@interface CLKVideo : NSObject <NSCopying>
{
    CLKDevice *_device;
    NSString *_name;
    NSURL *_url;
}

+ (id)videoNamed:(id)arg1 forDevice:(id)arg2;
+ (id)videoWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;
+ (id)videoNamed:(id)arg1 forDevice:(id)arg2 inBundle:(id)arg3;
+ (id)_videoNamed:(id)arg1 device:(id)arg2 bundle:(id)arg3 modifier:(id)arg4;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;

@end
