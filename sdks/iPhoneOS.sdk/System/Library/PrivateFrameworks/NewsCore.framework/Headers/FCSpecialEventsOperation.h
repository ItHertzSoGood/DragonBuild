//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCSpecialEventsOperationResult, NSError;
@protocol FCCoreConfiguration;

@interface FCSpecialEventsOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCSpecialEventsOperationResult *_specialEventsResult;
    NSError *_error;
    id /* CDUnknownBlockType */ _catchUpCompletionHandler;
}

@property(copy) id /* CDUnknownBlockType */ catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) FCSpecialEventsOperationResult *specialEventsResult; // @synthesize specialEventsResult=_specialEventsResult;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_checkShouldShowBreakingNewsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end
