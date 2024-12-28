//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, VUIStoreDownloadMonitor, VUIStoreFPSKeyLoader, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUIStoreMediaItem_iOS
{
    _Bool _needsRentalCheckin;	// 8 = 0x8
    _Bool _needsRentalCheckoutPriorToPlayback;	// 9 = 0x9
    _Bool _isForStartingDownload;	// 10 = 0xa
    _Bool _useSidebandLibraryForPlaybackKeys;	// 11 = 0xb
    NSURL *_fpsCertificateURL;	// 16 = 0x10
    NSURL *_fpsKeyServerURL;	// 24 = 0x18
    NSDictionary *_fpsAdditionalServerParams;	// 32 = 0x20
    unsigned long long _playbackContext;	// 40 = 0x28
    NSURL *_hlsPlaybackURL;	// 48 = 0x30
    unsigned long long _loadingContext;	// 56 = 0x38
    NSDictionary *_sinfsDict;	// 64 = 0x40
    NSNumber *_fileSize;	// 72 = 0x48
    NSURL *_downloadDestinationURL;	// 80 = 0x50
    NSNumber *_downloadToken;	// 88 = 0x58
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;	// 96 = 0x60
    long long _playbackType;	// 104 = 0x68
    NSURL *_playbackURL;	// 112 = 0x70
    VUIStoreDownloadMonitor *_downloadMonitor;	// 120 = 0x78
    NSObject *_parentReportingToken;	// 128 = 0x80
    NSError *_fpsKeyError;	// 136 = 0x88
    VUIVideoManagedObject *_videoManagedObject;	// 144 = 0x90
}

+ (void)initialize;	// IMP=0x00100000001c2315
- (void).cxx_destruct;	// IMP=0x00000000001ce71c
@property(nonatomic) _Bool useSidebandLibraryForPlaybackKeys; // @synthesize useSidebandLibraryForPlaybackKeys=_useSidebandLibraryForPlaybackKeys;
@property(nonatomic) _Bool isForStartingDownload; // @synthesize isForStartingDownload=_isForStartingDownload;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
@property(nonatomic) _Bool needsRentalCheckoutPriorToPlayback; // @synthesize needsRentalCheckoutPriorToPlayback=_needsRentalCheckoutPriorToPlayback;
@property(retain, nonatomic) NSError *fpsKeyError; // @synthesize fpsKeyError=_fpsKeyError;
@property(retain, nonatomic) NSObject *parentReportingToken; // @synthesize parentReportingToken=_parentReportingToken;
@property(nonatomic) _Bool needsRentalCheckin; // @synthesize needsRentalCheckin=_needsRentalCheckin;
@property(retain, nonatomic) VUIStoreDownloadMonitor *downloadMonitor; // @synthesize downloadMonitor=_downloadMonitor;
@property(retain, nonatomic) NSURL *playbackURL; // @synthesize playbackURL=_playbackURL;
@property(nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // @synthesize storeFPSKeyLoader=_storeFPSKeyLoader;
@property(retain, nonatomic) NSNumber *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(retain, nonatomic) NSURL *downloadDestinationURL; // @synthesize downloadDestinationURL=_downloadDestinationURL;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSDictionary *sinfsDict; // @synthesize sinfsDict=_sinfsDict;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) NSURL *hlsPlaybackURL; // @synthesize hlsPlaybackURL=_hlsPlaybackURL;
@property(nonatomic) unsigned long long playbackContext; // @synthesize playbackContext=_playbackContext;
@property(copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // @synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
- (_Bool)_url:(id)arg1 hasSameAdamIDAsURL:(id)arg2;	// IMP=0x00000000001cdf50
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg1;	// IMP=0x00000000001cdd3a
- (id)_rentalExpirationDate;	// IMP=0x00000000001cdc85
- (id)_rentalPlaybackEndDate;	// IMP=0x00000000001cda86
- (id)_rentalEndDate;	// IMP=0x00000000001cd8b5
- (id)_iTunesStoreContentInfo;	// IMP=0x00000000001cd33f
- (void)_externalPlaybackTypeDidChange:(id)arg1;	// IMP=0x00000000001cd08a
- (void)_checkInRental;	// IMP=0x00000000001ccfe0
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)arg1 startPlaybackClock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ccc02
- (void)_persistOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2;	// IMP=0x00000000001cc60f
- (id)_offlineKeyDataForKeyRequest:(id)arg1;	// IMP=0x00000000001cc2cd
- (id)_videoPlaybackTypeDescription;	// IMP=0x00000000001cc2a5
- (id)_downloadForThisMediaItemReturningDownloadManager:(id *)arg1;	// IMP=0x00000000001cbd05
- (void)_deleteDownloadKeyCookieForURL:(id)arg1;	// IMP=0x00000000001cbaca
- (void)_setDownloadKeyCookieWithURL:(id)arg1 downloadKey:(id)arg2;	// IMP=0x00000000001cb8d9
- (id)_iTunesStoreContentPurchasedMediaKind;	// IMP=0x00000000001cb875
- (_Bool)_loadingCancelled:(unsigned long long)arg1;	// IMP=0x00000000001cb852
- (void)_performRedownloadWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cb69e
- (void)_configureForDownloadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ca99e
- (void)_configureForStreamingPlaybackWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c96f4
- (void)_configureForPlaybackFromExistingDownload:(id)arg1 downloadManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c8c70
- (void)_configureForLocalPlaybackWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c8b3a
- (void)_updateRentalPlaybackStartDate:(id)arg1;	// IMP=0x00000000001c8856
- (void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;	// IMP=0x00000000001c8738
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000001c8625
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000001c833a
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c7b53
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;	// IMP=0x00000000001c7b3f
- (void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;	// IMP=0x00000000001c7684
- (id)reportingDelegate;	// IMP=0x00000000001c767b
- (void)cleanUpMediaItem;	// IMP=0x00000000001c74ef
- (void)processFinishedDownloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c6c10
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x00000000001c690a
- (id)replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000001c6268
- (_Bool)shouldRetryPlaybackForError:(id)arg1;	// IMP=0x00000000001c60a0
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c5cb3
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c545f
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000001c5230
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000001c369e
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000001c3095
- (id)mediaItemURL;	// IMP=0x00000000001c3083
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000001c2fda
- (void)resetReportingEventCollection;	// IMP=0x00000000001c2f5e
- (void)dealloc;	// IMP=0x00000000001c2eac
- (id)initWithMPMediaItem:(id)arg1 videoManagedObject:(id)arg2 isForStartingDownload:(_Bool)arg3;	// IMP=0x00000000001c244d
- (id)initWithAdamID:(long long)arg1 videoManagedObject:(id)arg2 isForStartingDownload:(_Bool)arg3;	// IMP=0x00000000001c2394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
