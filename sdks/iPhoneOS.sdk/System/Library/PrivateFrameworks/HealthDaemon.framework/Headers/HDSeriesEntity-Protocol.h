//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@class HDDatabaseTransaction, HDSQLiteDatabase, NSNumber;

@protocol HDSeriesEntity <HDSQLiteEntity>
+ (NSNumber *)hasSeriesDataForHFDKey:(NSNumber *)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id )arg3;
- (NSNumber *)HFDKeyWithDatabase:(HDSQLiteDatabase *)arg1 error:(id )arg2;
@end
