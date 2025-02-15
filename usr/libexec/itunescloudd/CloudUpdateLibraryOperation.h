//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStoreURLRequest, NSString, SagaImporter;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper;

@interface CloudUpdateLibraryOperation
{
    _Bool _didSubscriptionStatusLapse;	// 8 = 0x8
    _Bool _didEncounterFatalErrorImportingPayload;	// 9 = 0x9
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 16 = 0x10
    _Bool _uploadingLibraryIsSupported;	// 24 = 0x18
    _Bool _allowNoisyAuthPrompt;	// 25 = 0x19
    _Bool _isExplicitUserAction;	// 26 = 0x1a
    long long _reason;	// 32 = 0x20
    SagaImporter *_importer;	// 40 = 0x28
    NSString *_cuid;	// 48 = 0x30
    NSString *_troveID;	// 56 = 0x38
    ICStoreURLRequest *_updateRequest;	// 64 = 0x40
    ICStoreURLRequest *_uploadLibraryRequest;	// 72 = 0x48
    ICStoreURLRequest *_getResultsRequest;	// 80 = 0x50
    long long _uploadResponseStatus;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001304cc
@property(nonatomic) long long uploadResponseStatus; // @synthesize uploadResponseStatus=_uploadResponseStatus;
@property(retain, nonatomic) ICStoreURLRequest *getResultsRequest; // @synthesize getResultsRequest=_getResultsRequest;
@property(retain, nonatomic) ICStoreURLRequest *uploadLibraryRequest; // @synthesize uploadLibraryRequest=_uploadLibraryRequest;
@property(retain, nonatomic) ICStoreURLRequest *updateRequest; // @synthesize updateRequest=_updateRequest;
@property(retain, nonatomic) NSString *troveID; // @synthesize troveID=_troveID;
@property(retain, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(retain, nonatomic) SagaImporter *importer; // @synthesize importer=_importer;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool isExplicitUserAction; // @synthesize isExplicitUserAction=_isExplicitUserAction;
@property(nonatomic) _Bool allowNoisyAuthPrompt; // @synthesize allowNoisyAuthPrompt=_allowNoisyAuthPrompt;
@property(nonatomic) _Bool uploadingLibraryIsSupported; // @synthesize uploadingLibraryIsSupported=_uploadingLibraryIsSupported;
- (void)_clearAllCloudIDs;	// IMP=0x0010000000130242
- (id)_determineResultsURLWhenReadyWithUpdateID:(id)arg1 retryTimeout:(double)arg2 responseStatusCode:(out long long *)arg3;	// IMP=0x001000000012fb49
- (_Bool)_updateLibrary;	// IMP=0x001000000012dc99
- (void)_prepareLibraryForInitialUpdate;	// IMP=0x001000000012db9d
- (_Bool)_uploadLibrary;	// IMP=0x001000000012ad19
- (_Bool)_ensureDeviceIsRegistered;	// IMP=0x001000000012abfb
- (void)main;	// IMP=0x0010000000129294
- (void)cancel;	// IMP=0x001000000012914a
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic, getter=isInitialUpdate) _Bool initialUpdate;
- (void)dealloc;	// IMP=0x00100000001290da
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 reason:(long long)arg3 updateTaskHelper:(id)arg4;	// IMP=0x0010000000129045

@end

