//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRPlayerPath, MSVMultiCallback, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientCallbacks : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MSVMultiCallback *_createPlaybackQueueForRequestCallbacks;	// 16 = 0x10
    MSVMultiCallback *_createItemForOffsetCallbacks;	// 24 = 0x18
    MSVMultiCallback *_createItemForIdentifierCallbacks;	// 32 = 0x20
    MSVMultiCallback *_createChildItemCallbacks;	// 40 = 0x28
    MSVMultiCallback *_metadataCallbacks;	// 48 = 0x30
    MSVMultiCallback *_languageOptionsCallbacks;	// 56 = 0x38
    MSVMultiCallback *_infoCallbacks;	// 64 = 0x40
    MSVMultiCallback *_transcriptAlignmentsCallbacks;	// 72 = 0x48
    MSVMultiCallback *_lyricsCallbacks;	// 80 = 0x50
    MSVMultiCallback *_artworkCallbacks;	// 88 = 0x58
    CDUnknownBlockType _playbackSessionCallback;	// 96 = 0x60
    CDUnknownBlockType _playbackSessionMigrateBeginCallback;	// 104 = 0x68
    CDUnknownBlockType _playbackSessionMigrateEndCallback;	// 112 = 0x70
    CDUnknownBlockType _playbackSessionMigrateRequestCallback;	// 120 = 0x78
    CDUnknownBlockType _beginLyricsEventCallback;	// 128 = 0x80
    CDUnknownBlockType _endLyricsEventCallback;	// 136 = 0x88
    CDUnknownBlockType _videoThumbnailsCallback;	// 144 = 0x90
    CDUnknownBlockType _audioAmplitudeSamplesCallback;	// 152 = 0x98
    NSMutableDictionary *_commandHandlerBlocks;	// 160 = 0xa0
    MSVMultiCallback *_createItemToken;	// 168 = 0xa8
    MSVMultiCallback *_createItemForIdentifierToken;	// 176 = 0xb0
    MSVMultiCallback *_metadataToken;	// 184 = 0xb8
    MSVMultiCallback *_languageToken;	// 192 = 0xc0
    MSVMultiCallback *_artworkToken;	// 200 = 0xc8
    MRPlayerPath *_playerPath;	// 208 = 0xd0
    MSVMultiCallback *_formattedArtworkCallbacks;	// 216 = 0xd8
    MSVMultiCallback *_availableArtworkFormatsCallbacks;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000001f9f43
@property(readonly, nonatomic) MSVMultiCallback *availableArtworkFormatsCallbacks; // @synthesize availableArtworkFormatsCallbacks=_availableArtworkFormatsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *formattedArtworkCallbacks; // @synthesize formattedArtworkCallbacks=_formattedArtworkCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *artworkCallbacks; // @synthesize artworkCallbacks=_artworkCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *lyricsCallbacks; // @synthesize lyricsCallbacks=_lyricsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *transcriptAlignmentsCallbacks; // @synthesize transcriptAlignmentsCallbacks=_transcriptAlignmentsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *infoCallbacks; // @synthesize infoCallbacks=_infoCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks; // @synthesize languageOptionsCallbacks=_languageOptionsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *metadataCallbacks; // @synthesize metadataCallbacks=_metadataCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks; // @synthesize createChildItemCallbacks=_createChildItemCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createItemForIdentifierCallbacks; // @synthesize createItemForIdentifierCallbacks=_createItemForIdentifierCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks; // @synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks; // @synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (_Bool)removePlaybackQueueDataSourceCallback:(id)arg1;	// IMP=0x00000000001f9c8b
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1;	// IMP=0x00000000001f9899
- (void)registerNowPlayingInfoAssetCallbacks:(id)arg1;	// IMP=0x00000000001f94f0
- (void)registerNowPlayingInfoCallbacks:(id)arg1;	// IMP=0x00000000001f9051
- (void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;	// IMP=0x00000000001f8fe9
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;	// IMP=0x00000000001f8df0
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000001f8ce2
- (unsigned long long)_onQueue_capabilities;	// IMP=0x00000000001f8c25
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) _Bool hasPlaybackQueueCallbacks;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateRequestCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateEndCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionCallback;
@property(copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback;
@property(copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001f7757

@end
