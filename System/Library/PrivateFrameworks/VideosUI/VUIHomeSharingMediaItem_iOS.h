//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSHomeSharingLibrary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIHomeSharingMediaItem_iOS
{
    _Bool _needsKeyBagSyncPriorToPlayback;	// 8 = 0x8
    HSHomeSharingLibrary *_homeSharingLibrary;	// 16 = 0x10
    NSURL *_mediaItemURLInternal;	// 24 = 0x18
    NSString *_keyBagFilePath;	// 32 = 0x20
    unsigned long long _loadingContext;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x006000000018dab9
- (void).cxx_destruct;	// IMP=0x000000000018eafd
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(nonatomic) _Bool needsKeyBagSyncPriorToPlayback; // @synthesize needsKeyBagSyncPriorToPlayback=_needsKeyBagSyncPriorToPlayback;
@property(retain, nonatomic) NSString *keyBagFilePath; // @synthesize keyBagFilePath=_keyBagFilePath;
@property(retain, nonatomic) NSURL *mediaItemURLInternal; // @synthesize mediaItemURLInternal=_mediaItemURLInternal;
@property(retain, nonatomic) HSHomeSharingLibrary *homeSharingLibrary; // @synthesize homeSharingLibrary=_homeSharingLibrary;
- (_Bool)_loadingCancelled:(unsigned long long)arg1;	// IMP=0x000000000018ea29
- (void)_fetchKeybagForDSID:(id)arg1 isFamilyAccount:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018ea1e
- (_Bool)shouldRetryPlaybackForError:(id)arg1;	// IMP=0x000000000018e928
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x000000000018e779
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000000018e636
- (void)cleanUpMediaItem;	// IMP=0x000000000018e5d0
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018e23c
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000000018e167
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000000018e0b4
- (id)mediaItemURL;	// IMP=0x000000000018de4c
- (id)imageLoader;	// IMP=0x000000000018dc15
- (id)initWithMPMediaItem:(id)arg1;	// IMP=0x000000000018db09

@end

