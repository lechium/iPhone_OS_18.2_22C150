//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVItem, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSMutableSet, NSString;
@protocol MPCExternalPlaybackRouter;

__attribute__((visibility("hidden")))
@interface MPCPlaybackErrorController : NSObject
{
    _Bool _itemsHavePlayed;	// 8 = 0x8
    NSString *preferredFirstContentItemID;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
    MPCMediaFoundationTranslator *_translator;	// 32 = 0x20
    NSMutableSet *_failedItemsIdentifiers;	// 40 = 0x28
    id <MPCExternalPlaybackRouter> _externalPlaybackRouter;	// 48 = 0x30
    MPAVItem *_lastItemUsedForErrorResolution;	// 56 = 0x38
    long long _contiguousFailSilentlyResolutionCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000021698a
@property(nonatomic) long long contiguousFailSilentlyResolutionCount; // @synthesize contiguousFailSilentlyResolutionCount=_contiguousFailSilentlyResolutionCount;
@property(retain, nonatomic) MPAVItem *lastItemUsedForErrorResolution; // @synthesize lastItemUsedForErrorResolution=_lastItemUsedForErrorResolution;
@property(retain, nonatomic) id <MPCExternalPlaybackRouter> externalPlaybackRouter; // @synthesize externalPlaybackRouter=_externalPlaybackRouter;
@property(retain, nonatomic) NSMutableSet *failedItemsIdentifiers; // @synthesize failedItemsIdentifiers=_failedItemsIdentifiers;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(copy, nonatomic) NSString *preferredFirstContentItemID; // @synthesize preferredFirstContentItemID;
- (_Bool)isLeaseTakenError:(id)arg1;	// IMP=0x00000000002168c6
- (_Bool)shouldHandleFirstItemFailure:(id)arg1 item:(id)arg2;	// IMP=0x0000000000216819
- (_Bool)isAssetUnavailableFailure:(id)arg1;	// IMP=0x0000000000216804
- (_Bool)isUnrecoverableAssetLoadingError:(id)arg1;	// IMP=0x000000000021678b
- (_Bool)isQueueLoadingFailure:(id)arg1;	// IMP=0x0000000000216776
- (_Bool)isFirstItemFailure:(id)arg1 item:(id)arg2;	// IMP=0x000000000021668d
- (_Bool)canHandleFirstItemFailure;	// IMP=0x0000000000216619
- (void)_notifyObserversForError:(id)arg1 item:(id)arg2;	// IMP=0x000000000021580f
- (long long)_resolutionForPlaybackError:(id)arg1 item:(id)arg2;	// IMP=0x0000000000215271
- (void)_playbackFailedWithError:(id)arg1 item:(id)arg2 canResolve:(_Bool)arg3 proposedResolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000214d56
- (void)reportCriticalError:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000214a6b
- (void)resolveError:(id)arg1 forItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000213349
- (void)resetWithReason:(id)arg1;	// IMP=0x00000000002132c2
@property(nonatomic) _Bool itemsHavePlayed;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 externalPlaybackRouter:(id)arg3;	// IMP=0x00000000002131cc

@end

