//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASVDialogNode : AceObject <SAAceSerializable>
{
}

+ (id)dialogNodeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dialogNode;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *nodeTypeHint;
@property(copy, nonatomic) NSArray *children;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
