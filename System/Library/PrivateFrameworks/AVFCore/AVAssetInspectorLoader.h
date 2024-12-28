//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetInspectorLoader : NSObject
{
    AVWeakReference *_weakReference;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x001000000011fd4c
- (id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2;	// IMP=0x0000000000120048
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120033
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;	// IMP=0x000000000012002d
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;	// IMP=0x0000000000120027
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
@property(nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) double fragmentMindingInterval;
@property(readonly, nonatomic) long long fragmentCount;
@property(readonly, nonatomic) long long firstFragmentSequenceNumber;
@property(readonly, nonatomic, getter=_prefersNominalDurations) _Bool prefersNominalDurations;
@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *originalNetworkContentURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) NSArray *figChapters;
@property(readonly, nonatomic) NSArray *figChapterGroupInfo;
@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property(readonly, nonatomic, getter=isComposable) _Bool composable;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
@property(readonly, nonatomic, getter=isExportable) _Bool exportable;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) NSArray *variants;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
- (struct OpaqueFigFormatReader *)_copyFormatReader;	// IMP=0x000000000011ff1c
@property(readonly, nonatomic) NSURL *URL;
- (void)cancelLoading;	// IMP=0x000000000011ff0e
- (id)assetInspector;	// IMP=0x000000000011ff06
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011fedb
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011fead
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011fea2
- (void)dealloc;	// IMP=0x000000000011fe67
@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
- (id)init;	// IMP=0x000000000011fdfe

@end
