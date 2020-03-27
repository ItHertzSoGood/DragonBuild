//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class NSSet;

@interface CRKCloudModifyRecordsOperation : CRKCloudOperation <CRKCloudResetable>
{
    BOOL _atomic;
    NSSet *_recordsToSave;
    NSSet *_recordIdsToDelete;
}

@property(readonly, nonatomic, getter=isAtomic) BOOL atomic; // @synthesize atomic=_atomic;
@property(readonly, nonatomic) NSSet *recordIdsToDelete; // @synthesize recordIdsToDelete=_recordIdsToDelete;
@property(readonly, nonatomic) NSSet *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
// - (void).cxx_destruct;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 recordsToSave:(id)arg2 recordIdsToDelete:(id)arg3 isAtomic:(BOOL)arg4;
- (id)initWithDatabase:(id)arg1;

@end
