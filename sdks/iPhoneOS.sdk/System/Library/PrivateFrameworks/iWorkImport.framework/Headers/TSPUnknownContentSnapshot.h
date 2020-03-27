//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider>
{
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
    NSArray *_messages;
}

@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
// - (void).cxx_destruct;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL isContentUnknown;
- (void)updateMessageInfo:(struct MessageInfo )arg1;
- (void)saveToArchiver:(id)arg1;
- (id)newUnknownContentSnapshotWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 preserveFields:(id)arg2 preserveUntilModifiedFields:(id)arg3 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)arg4;
- (id)init;

@end
