//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCEWrappedRangeRef;

__attribute__((visibility("hidden")))
@interface TSCEAnyReference : NSObject
{
    struct TSCEAnyRef _ref;
    NSString *_overrideText;
    NSString *_overrideTextAsTyped;
    struct TSUPreserveFlags _preserveFlags;
    BOOL _wasConstructedViaNames;
}

@property(nonatomic) struct TSUPreserveFlags preserveFlags; // @synthesize preserveFlags=_preserveFlags;
@property(nonatomic) BOOL wasConstructedViaNames; // @synthesize wasConstructedViaNames=_wasConstructedViaNames;
@property(copy) NSString *overrideTextAsTyped; // @synthesize overrideTextAsTyped=_overrideTextAsTyped;
@property(copy) NSString *overrideText; // @synthesize overrideText=_overrideText;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 preserveFlags:(struct TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e )arg2 preserveFlags:(struct TSUPreserveFlags)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e )arg2;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
@property(readonly, nonatomic) TSCEWrappedRangeRef *rangeReference;
@property(readonly, nonatomic) struct TSCERangeRef rangeRef;
@property(readonly, nonatomic) struct TSCEAnyRef anyRef;
- (id)initWithCellRef:(const struct TSCECellRef )arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef )arg1;

@end
