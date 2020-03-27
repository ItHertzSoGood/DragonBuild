//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUIGridArrangement;
@protocol NUIArrangementItem;

@protocol NUIGridArrangementDataSource <NSObject>
- (id <NUIArrangementItem>)gridArrangement:(NUIGridArrangement *)arg1 itemAtIndex:(long long)arg2 columns:(_NSRange )arg3 rows:(_NSRange )arg4 horizontalAlignment:(long long )arg5 verticalAlignment:(long long )arg6;
- (long long)numberOfItemsInGridArrangement:(NUIGridArrangement *)arg1;

@optional
- (double)gridArrangement:(NUIGridArrangement *)arg1 heightOfRowAtIndex:(long long)arg2 spacingAfter:(double )arg3;
- (double)gridArrangement:(NUIGridArrangement *)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double )arg3;
@end
