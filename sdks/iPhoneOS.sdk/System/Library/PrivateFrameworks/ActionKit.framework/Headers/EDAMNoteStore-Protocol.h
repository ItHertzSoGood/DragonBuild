//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EDAMAd, EDAMAdParameters, EDAMAuthenticationResult, EDAMBusinessQuery, EDAMBusinessQueryResult, EDAMClientUsageMetrics, EDAMContactsQuery, EDAMCreateOrUpdateNotebookSharesResult, EDAMLazyMap, EDAMLinkedAccount, EDAMLinkedNotebook, EDAMLogRequest, EDAMLogResponse, EDAMManageNoteSharesParameters, EDAMManageNoteSharesResult, EDAMManageNotebookSharesParameters, EDAMManageNotebookSharesResult, EDAMNote, EDAMNoteCollectionCounts, EDAMNoteEmailParameters, EDAMNoteFilter, EDAMNoteList, EDAMNoteLockStatus, EDAMNoteResultSpec, EDAMNoteShareRelationships, EDAMNotebook, EDAMNotebookRecipientSettings, EDAMNotebookShareTemplate, EDAMNotesMetadataList, EDAMNotesMetadataResultSpec, EDAMPreferences, EDAMRelatedQuery, EDAMRelatedResult, EDAMRelatedResultSpec, EDAMResource, EDAMResourceAttributes, EDAMSavedSearch, EDAMSearchSuggestionQuery, EDAMSearchSuggestionResult, EDAMSearchSuggestionResultSpec, EDAMShareRelationships, EDAMSharedNoteTemplate, EDAMSharedNotebook, EDAMSharedNotebookRecipientSettings, EDAMSyncChunk, EDAMSyncChunkFilter, EDAMSyncState, EDAMTag, EDAMTimeZoneSpec, EDAMUpdateNoteIfUsnMatchesResult, NSArray, NSData, NSDictionary, NSSet, NSString;

@protocol EDAMNoteStore <NSObject>
- (EDAMSyncState *)getLinkedAccountSyncState:(NSString *)arg1 linkedAccount:(EDAMLinkedAccount *)arg2;
- (EDAMLogResponse *)sendLogRequest:(NSString *)arg1 logRequest:(EDAMLogRequest *)arg2;
- (int)renameNotebook:(NSString *)arg1 notebookGuid:(NSString *)arg2 name:(NSString *)arg3;
- (NSSet *)getNotebookSharesEmailAddresses:(NSString *)arg1 notebookGuid:(NSString *)arg2 identities:(NSArray *)arg3 skipUnknownUserIdentities:(BOOL)arg4;
- (void)unpublishNotebook:(NSString *)arg1 notebookGuid:(NSString *)arg2 convertGroupSharesToIndividual:(BOOL)arg3;
- (EDAMSharedNotebook *)joinPublishedBusinessNotebook:(NSString *)arg1 notebookGuid:(NSString *)arg2;
- (EDAMManageNoteSharesResult *)manageNoteShares:(NSString *)arg1 parameters:(EDAMManageNoteSharesParameters *)arg2;
- (EDAMNoteShareRelationships *)getNoteShares:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (EDAMShareRelationships *)getNotebookShares:(NSString *)arg1 notebookGuid:(NSString *)arg2;
- (EDAMManageNotebookSharesResult *)manageNotebookShares:(NSString *)arg1 parameters:(EDAMManageNotebookSharesParameters *)arg2;
- (EDAMUpdateNoteIfUsnMatchesResult *)updateNoteIfUsnMatches:(NSString *)arg1 note:(EDAMNote *)arg2;
- (NSDictionary *)getViewersForNotes:(NSString *)arg1 noteGuids:(NSArray *)arg2;
- (EDAMNoteLockStatus *)releaseNoteLock:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (EDAMNoteLockStatus *)acquireNoteLock:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (EDAMNoteLockStatus *)getNoteLockStatus:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (void)requestAccessToNotebook:(NSString *)arg1 notebookGuid:(NSString *)arg2 privilegeLevel:(int)arg3;
- (int)stopSharingNoteWithBusiness:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (int)shareNoteWithBusiness:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (EDAMBusinessQueryResult *)findInBusiness:(NSString *)arg1 query:(EDAMBusinessQuery *)arg2;
- (NSArray *)findContacts:(NSString *)arg1 query:(EDAMContactsQuery *)arg2;
- (NSArray *)findTimeZones:(NSString *)arg1 timeZoneSpec:(EDAMTimeZoneSpec *)arg2 maxTimeZones:(int)arg3;
- (void)updateUserSetting:(NSString *)arg1 setting:(int)arg2 value:(NSString *)arg3;
- (EDAMSearchSuggestionResult *)findSearchSuggestions:(NSString *)arg1 query:(EDAMSearchSuggestionQuery *)arg2 resultSpec:(EDAMSearchSuggestionResultSpec *)arg3;
- (EDAMRelatedResult *)findRelated:(NSString *)arg1 query:(EDAMRelatedQuery *)arg2 resultSpec:(EDAMRelatedResultSpec *)arg3;
- (NSArray *)createOrUpdateSharedNotes:(NSString *)arg1 shareTemplate:(EDAMSharedNoteTemplate *)arg2;
- (EDAMAuthenticationResult *)authenticateToSharedNote:(NSString *)arg1 noteKey:(NSString *)arg2 authenticationToken:(NSString *)arg3;
- (void)stopSharingNoteWithRecipients:(NSString *)arg1 guid:(NSString *)arg2;
- (void)stopSharingNote:(NSString *)arg1 guid:(NSString *)arg2;
- (NSString *)shareNote:(NSString *)arg1 guid:(NSString *)arg2;
- (void)emailNote:(NSString *)arg1 parameters:(EDAMNoteEmailParameters *)arg2;
- (EDAMSharedNotebook *)getSharedNotebookByAuth:(NSString *)arg1;
- (EDAMAuthenticationResult *)authenticateToSharedNotebook:(NSString *)arg1 authenticationToken:(NSString *)arg2;
- (int)expungeLinkedNotebook:(NSString *)arg1 guid:(NSString *)arg2;
- (NSArray *)listLinkedNotebooks:(NSString *)arg1;
- (int)updateLinkedNotebook:(NSString *)arg1 linkedNotebook:(EDAMLinkedNotebook *)arg2;
- (EDAMLinkedNotebook *)createLinkedNotebook:(NSString *)arg1 linkedNotebook:(EDAMLinkedNotebook *)arg2;
- (int)expungeSharedNotebooks:(NSString *)arg1 sharedNotebookIds:(NSArray *)arg2;
- (NSArray *)listSharedNotebooks:(NSString *)arg1;
- (int)sendMessageToSharedNotebookMembers:(NSString *)arg1 notebookGuid:(NSString *)arg2 messageText:(NSString *)arg3 recipients:(NSArray *)arg4;
- (EDAMNotebook *)setNotebookRecipientSettings:(NSString *)arg1 notebookGuid:(NSString *)arg2 recipientSettings:(EDAMNotebookRecipientSettings *)arg3;
- (int)setSharedNotebookRecipientSettings:(NSString *)arg1 sharedNotebookId:(long long)arg2 recipientSettings:(EDAMSharedNotebookRecipientSettings *)arg3;
- (int)updateSharedNotebook:(NSString *)arg1 sharedNotebook:(EDAMSharedNotebook *)arg2;
- (EDAMCreateOrUpdateNotebookSharesResult *)createOrUpdateNotebookShares:(NSString *)arg1 shareTemplate:(EDAMNotebookShareTemplate *)arg2;
- (EDAMSharedNotebook *)shareNotebook:(NSString *)arg1 sharedNotebook:(EDAMSharedNotebook *)arg2 message:(NSString *)arg3;
- (EDAMSharedNotebook *)createSharedNotebook:(NSString *)arg1 sharedNotebook:(EDAMSharedNotebook *)arg2;
- (EDAMNotebook *)getPublicNotebook:(int)arg1 publicUri:(NSString *)arg2;
- (EDAMAd *)getRandomAd:(NSString *)arg1 adParameters:(EDAMAdParameters *)arg2;
- (NSArray *)getAds:(NSString *)arg1 adParameters:(EDAMAdParameters *)arg2;
- (EDAMResourceAttributes *)getResourceAttributes:(NSString *)arg1 guid:(NSString *)arg2;
- (NSData *)getResourceAlternateData:(NSString *)arg1 guid:(NSString *)arg2;
- (NSData *)getResourceRecognition:(NSString *)arg1 guid:(NSString *)arg2;
- (EDAMResource *)getResourceByHash:(NSString *)arg1 noteGuid:(NSString *)arg2 contentHash:(NSData *)arg3 withData:(BOOL)arg4 withRecognition:(BOOL)arg5 withAlternateData:(BOOL)arg6;
- (NSData *)getResourceData:(NSString *)arg1 guid:(NSString *)arg2;
- (int)updateResource:(NSString *)arg1 resource:(EDAMResource *)arg2;
- (int)unsetResourceApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3;
- (int)setResourceApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3 value:(NSString *)arg4;
- (NSString *)getResourceApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3;
- (EDAMLazyMap *)getResourceApplicationData:(NSString *)arg1 guid:(NSString *)arg2;
- (EDAMResource *)getResource:(NSString *)arg1 guid:(NSString *)arg2 withData:(BOOL)arg3 withRecognition:(BOOL)arg4 withAttributes:(BOOL)arg5 withAlternateData:(BOOL)arg6;
- (EDAMNote *)getNoteVersion:(NSString *)arg1 noteGuid:(NSString *)arg2 updateSequenceNum:(int)arg3 withResourcesData:(BOOL)arg4 withResourcesRecognition:(BOOL)arg5 withResourcesAlternateData:(BOOL)arg6;
- (NSArray *)listNoteVersions:(NSString *)arg1 noteGuid:(NSString *)arg2;
- (EDAMNote *)copyNote:(NSString *)arg1 noteGuid:(NSString *)arg2 toNotebookGuid:(NSString *)arg3;
- (int)expungeInactiveNotes:(NSString *)arg1;
- (int)expungeNotes:(NSString *)arg1 noteGuids:(NSArray *)arg2;
- (int)expungeNote:(NSString *)arg1 guid:(NSString *)arg2;
- (int)deleteNote:(NSString *)arg1 guid:(NSString *)arg2;
- (EDAMNote *)updateNote:(NSString *)arg1 note:(EDAMNote *)arg2;
- (EDAMNote *)createNote:(NSString *)arg1 note:(EDAMNote *)arg2;
- (NSArray *)getNoteTagNames:(NSString *)arg1 guid:(NSString *)arg2;
- (NSString *)getResourceSearchText:(NSString *)arg1 guid:(NSString *)arg2;
- (NSString *)getNoteSearchText:(NSString *)arg1 guid:(NSString *)arg2 noteOnly:(BOOL)arg3 tokenizeForIndexing:(BOOL)arg4;
- (NSString *)getNoteContent:(NSString *)arg1 guid:(NSString *)arg2;
- (int)unsetNoteApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3;
- (int)setNoteApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3 value:(NSString *)arg4;
- (NSString *)getNoteApplicationDataEntry:(NSString *)arg1 guid:(NSString *)arg2 key:(NSString *)arg3;
- (EDAMLazyMap *)getNoteApplicationData:(NSString *)arg1 guid:(NSString *)arg2;
- (int)updatePreferences:(NSString *)arg1 preferencesToUpdate:(NSDictionary *)arg2;
- (EDAMPreferences *)getPreferences:(NSString *)arg1 preferenceNames:(NSArray *)arg2;
- (EDAMNote *)getNote:(NSString *)arg1 guid:(NSString *)arg2 withContent:(BOOL)arg3 withResourcesData:(BOOL)arg4 withResourcesRecognition:(BOOL)arg5 withResourcesAlternateData:(BOOL)arg6;
- (EDAMNote *)getNoteWithResultSpec:(NSString *)arg1 guid:(NSString *)arg2 resultSpec:(EDAMNoteResultSpec *)arg3;
- (EDAMNoteCollectionCounts *)findNoteCounts:(NSString *)arg1 filter:(EDAMNoteFilter *)arg2 withTrash:(BOOL)arg3;
- (NSDictionary *)getNoteSnippets:(NSString *)arg1 noteGuids:(NSArray *)arg2 maxSnippetLength:(int)arg3;
- (EDAMNotesMetadataList *)findNotesMetadata:(NSString *)arg1 filter:(EDAMNoteFilter *)arg2 offset:(int)arg3 maxNotes:(int)arg4 resultSpec:(EDAMNotesMetadataResultSpec *)arg5;
- (int)findNoteOffset:(NSString *)arg1 filter:(EDAMNoteFilter *)arg2 guid:(NSString *)arg3;
- (EDAMNoteList *)findNotes:(NSString *)arg1 filter:(EDAMNoteFilter *)arg2 offset:(int)arg3 maxNotes:(int)arg4;
- (int)expungeSearch:(NSString *)arg1 guid:(NSString *)arg2;
- (int)updateSearch:(NSString *)arg1 search:(EDAMSavedSearch *)arg2;
- (EDAMSavedSearch *)createSearch:(NSString *)arg1 search:(EDAMSavedSearch *)arg2;
- (EDAMSavedSearch *)getSearch:(NSString *)arg1 guid:(NSString *)arg2;
- (NSArray *)listSearches:(NSString *)arg1;
- (int)expungeTag:(NSString *)arg1 guid:(NSString *)arg2;
- (void)untagAll:(NSString *)arg1 guid:(NSString *)arg2;
- (int)updateTag:(NSString *)arg1 tag:(EDAMTag *)arg2;
- (EDAMTag *)createTag:(NSString *)arg1 tag:(EDAMTag *)arg2;
- (EDAMTag *)getTag:(NSString *)arg1 guid:(NSString *)arg2;
- (NSArray *)listTagsByNotebook:(NSString *)arg1 notebookGuid:(NSString *)arg2;
- (NSArray *)listTags:(NSString *)arg1;
- (int)expungeNotebook:(NSString *)arg1 guid:(NSString *)arg2;
- (int)updateNotebook:(NSString *)arg1 notebook:(EDAMNotebook *)arg2;
- (EDAMNotebook *)createNotebook:(NSString *)arg1 notebook:(EDAMNotebook *)arg2;
- (EDAMNotebook *)getDefaultNotebook:(NSString *)arg1;
- (EDAMNotebook *)getNotebook:(NSString *)arg1 guid:(NSString *)arg2;
- (NSArray *)listAccessibleBusinessNotebooks:(NSString *)arg1;
- (NSArray *)listPublishedBusinessNotebooks:(NSString *)arg1;
- (NSArray *)listNotebooks:(NSString *)arg1;
- (EDAMSyncChunk *)getLinkedNotebookSyncChunk:(NSString *)arg1 linkedNotebook:(EDAMLinkedNotebook *)arg2 afterUSN:(int)arg3 maxEntries:(int)arg4 fullSyncOnly:(BOOL)arg5;
- (EDAMSyncState *)getLinkedNotebookSyncState:(NSString *)arg1 linkedNotebook:(EDAMLinkedNotebook *)arg2;
- (EDAMSyncChunk *)getFilteredSyncChunk:(NSString *)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 filter:(EDAMSyncChunkFilter *)arg4;
- (EDAMSyncChunk *)getSyncChunk:(NSString *)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(BOOL)arg4;
- (EDAMSyncState *)getSyncStateWithMetrics:(NSString *)arg1 clientMetrics:(EDAMClientUsageMetrics *)arg2;
- (EDAMSyncState *)getSyncState:(NSString *)arg1;
@end
