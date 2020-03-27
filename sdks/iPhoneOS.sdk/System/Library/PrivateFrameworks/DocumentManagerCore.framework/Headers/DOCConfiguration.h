//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DOCConcreteLocation, NSArray, NSString;

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _shouldIgnoreInteractionMode;
    BOOL _inProcess;
    BOOL _forPickingDocuments;
    BOOL _forPickingFolders;
    BOOL _supportsRemovableFileProviders;
    BOOL _forPickingDownloadsFolder;
    BOOL _isContentManaged;
    BOOL _neverCreateBookmarkForOpenInPlace;
    BOOL _pickingItemsShouldBumpLastOpenDate;
    BOOL _suppressBlackCallout;
    BOOL _preferLastUsedDate;
    BOOL _shouldOpenInApp;
    BOOL _restoreLastVisitedLocation;
    BOOL _saveLastVisitedLocation;
    BOOL _collectionSupportsDragAndDrop;
    BOOL _skipDownload;
    BOOL _presentingMakesCollectionFirstResponder;
    BOOL _showCollectionControls;
    BOOL _supportsColumnView;
    BOOL _shouldAdjustContentInset;
    BOOL _useSharedQuickLook;
    BOOL _useExpandedSourceList;
    DOCConcreteLocation *_defaultLocation;
    NSUInteger _interactionMode;
    NSArray *_excludedDocumentTypes;
    NSArray *_recentDocumentsTypes;
    NSArray *_urls;
    NSString *_hostIdentifier;
    NSString *_hostBundleTitle;
    NSArray *_hiddenSourcesIdentifiers;
    NSUInteger _maximumNumberOfItemsToFetch;
    NSUInteger _maximumNumberOfRows;
    NSUInteger _browserViewContext;
    NSString *_roleIdentifier;
    NSString *_stateIdentifier;
    NSString *_sceneIdentifier;
    NSArray *_forbiddenActionIdentifiers;
    double _thumbnailFetchingTimeOut;
    NSArray *_documentTypes;
}

+ (BOOL)supportsSecureCoding;
+ (id)configurationForFolderPicking;
+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(NSUInteger)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(NSUInteger)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property double thumbnailFetchingTimeOut; // @synthesize thumbnailFetchingTimeOut=_thumbnailFetchingTimeOut;
@property(copy) NSArray *forbiddenActionIdentifiers; // @synthesize forbiddenActionIdentifiers=_forbiddenActionIdentifiers;
@property(copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(copy, nonatomic) NSString *stateIdentifier; // @synthesize stateIdentifier=_stateIdentifier;
@property(copy, nonatomic) NSString *roleIdentifier; // @synthesize roleIdentifier=_roleIdentifier;
@property NSUInteger browserViewContext; // @synthesize browserViewContext=_browserViewContext;
@property BOOL useExpandedSourceList; // @synthesize useExpandedSourceList=_useExpandedSourceList;
@property BOOL useSharedQuickLook; // @synthesize useSharedQuickLook=_useSharedQuickLook;
@property BOOL shouldAdjustContentInset; // @synthesize shouldAdjustContentInset=_shouldAdjustContentInset;
@property BOOL supportsColumnView; // @synthesize supportsColumnView=_supportsColumnView;
@property BOOL showCollectionControls; // @synthesize showCollectionControls=_showCollectionControls;
@property BOOL presentingMakesCollectionFirstResponder; // @synthesize presentingMakesCollectionFirstResponder=_presentingMakesCollectionFirstResponder;
@property BOOL skipDownload; // @synthesize skipDownload=_skipDownload;
@property NSUInteger maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property NSUInteger maximumNumberOfItemsToFetch; // @synthesize maximumNumberOfItemsToFetch=_maximumNumberOfItemsToFetch;
@property BOOL collectionSupportsDragAndDrop; // @synthesize collectionSupportsDragAndDrop=_collectionSupportsDragAndDrop;
@property BOOL saveLastVisitedLocation; // @synthesize saveLastVisitedLocation=_saveLastVisitedLocation;
@property BOOL restoreLastVisitedLocation; // @synthesize restoreLastVisitedLocation=_restoreLastVisitedLocation;
@property(copy, nonatomic) NSArray *hiddenSourcesIdentifiers; // @synthesize hiddenSourcesIdentifiers=_hiddenSourcesIdentifiers;
@property BOOL shouldOpenInApp; // @synthesize shouldOpenInApp=_shouldOpenInApp;
@property BOOL preferLastUsedDate; // @synthesize preferLastUsedDate=_preferLastUsedDate;
@property BOOL suppressBlackCallout; // @synthesize suppressBlackCallout=_suppressBlackCallout;
@property BOOL pickingItemsShouldBumpLastOpenDate; // @synthesize pickingItemsShouldBumpLastOpenDate=_pickingItemsShouldBumpLastOpenDate;
@property BOOL neverCreateBookmarkForOpenInPlace; // @synthesize neverCreateBookmarkForOpenInPlace=_neverCreateBookmarkForOpenInPlace;
@property(nonatomic) BOOL isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property BOOL forPickingDownloadsFolder; // @synthesize forPickingDownloadsFolder=_forPickingDownloadsFolder;
@property BOOL supportsRemovableFileProviders; // @synthesize supportsRemovableFileProviders=_supportsRemovableFileProviders;
@property BOOL forPickingFolders; // @synthesize forPickingFolders=_forPickingFolders;
@property BOOL forPickingDocuments; // @synthesize forPickingDocuments=_forPickingDocuments;
@property(copy, nonatomic) NSString *hostBundleTitle; // @synthesize hostBundleTitle=_hostBundleTitle;
@property(copy, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *recentDocumentsTypes; // @synthesize recentDocumentsTypes=_recentDocumentsTypes;
@property(copy, nonatomic) NSArray *excludedDocumentTypes; // @synthesize excludedDocumentTypes=_excludedDocumentTypes;
@property BOOL inProcess; // @synthesize inProcess=_inProcess;
@property BOOL shouldIgnoreInteractionMode; // @synthesize shouldIgnoreInteractionMode=_shouldIgnoreInteractionMode;
@property NSUInteger interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain) DOCConcreteLocation *defaultLocation; // @synthesize defaultLocation=_defaultLocation;
// - (void).cxx_destruct;
- (NSUInteger)interactionModeForPreparing;
@property(readonly) BOOL isPopoverOrWidget;
@property(readonly) BOOL isWidget;
@property(readonly) BOOL isPopover;
@property(readonly) BOOL isFilesApp;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
