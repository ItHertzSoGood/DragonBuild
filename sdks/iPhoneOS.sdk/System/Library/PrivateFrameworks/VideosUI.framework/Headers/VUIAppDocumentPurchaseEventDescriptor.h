//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor
{
    NSString *_canonicalID;
}

@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCanonicalID:(id)arg1;
- (id)initWithEventType:(NSUInteger)arg1;

@end
