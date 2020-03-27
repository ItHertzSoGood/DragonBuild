//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailExpandableDescriptionCellDelegate-Protocol.h>

@protocol NTKCFaceDetailDescriptionSectionDelegate;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate>
{
    BOOL _external;
    id <NTKCFaceDetailDescriptionSectionDelegate> _delegate;
}

+ (id)_descriptionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3;
+ (BOOL)hasDescriptionSectionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3;
@property(nonatomic) BOOL external; // @synthesize external=_external;
@property(nonatomic) __weak id <NTKCFaceDetailDescriptionSectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)descriptionCellDidExpand:(id)arg1;
- (id)_faceDescription;
@property(nonatomic) BOOL expanded;
- (void)faceDidChange;
- (id)titleForHeader;
- (void)_commonInit;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 external:(BOOL)arg4;

@end
