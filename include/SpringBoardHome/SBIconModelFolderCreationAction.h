//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSIndexPath, NSString, SBFolder;

@interface SBIconModelFolderCreationAction : NSObject <BSDescriptionProviding>
{
    SBFolder *_folder;
    NSIndexPath *_indexPath;
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithFolder:(id)arg1 indexPath:(id)arg2;

@end
