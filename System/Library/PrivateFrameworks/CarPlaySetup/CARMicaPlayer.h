//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSDictionary, NSString, NSTimer;
@protocol CARMicaPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CARMicaPlayer : NSObject
{
    _Bool _loopDuringPlayback;	// 8 = 0x8
    _Bool _isNotifyingDelegate;	// 9 = 0x9
    float _preferredPlaybackSpeed;	// 12 = 0xc
    id <CARMicaPlayerDelegate> _delegate;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    CALayer *_rootLayer;	// 32 = 0x20
    double _retinaScale;	// 40 = 0x28
    double _documentDuration;	// 48 = 0x30
    NSDictionary *_publishedObjects;	// 56 = 0x38
    NSTimer *_playTimer;	// 64 = 0x40
}

+ (id)updatePublishedObjects:(id)arg1 toReferenceLayersInTree:(id)arg2 ratherThanLayersInTree:(id)arg3;	// IMP=0x001000000000bcb0
+ (_Bool)boolFromDictionary:(id)arg1 key:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x001000000000ba7d
+ (id)rootDictForPath:(id)arg1;	// IMP=0x001000000000b83b
- (void).cxx_destruct;	// IMP=0x000000000000cbf3
@property(nonatomic) _Bool isNotifyingDelegate; // @synthesize isNotifyingDelegate=_isNotifyingDelegate;
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(retain, nonatomic) NSDictionary *publishedObjects; // @synthesize publishedObjects=_publishedObjects;
@property(nonatomic) _Bool loopDuringPlayback; // @synthesize loopDuringPlayback=_loopDuringPlayback;
@property(nonatomic) float preferredPlaybackSpeed; // @synthesize preferredPlaybackSpeed=_preferredPlaybackSpeed;
@property(nonatomic) double documentDuration; // @synthesize documentDuration=_documentDuration;
@property(nonatomic) double retinaScale; // @synthesize retinaScale=_retinaScale;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak id <CARMicaPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)runPlayTimer:(id)arg1;	// IMP=0x000000000000cabb
- (void)stopPlayTimer;	// IMP=0x000000000000ca7d
- (void)startPlayTimerIfNeeded;	// IMP=0x000000000000c931
- (_Bool)isTimerNeeded;	// IMP=0x000000000000c87c
- (void)notifyDelegateDidChangePlaybackTime;	// IMP=0x000000000000c79f
- (void)notifyDelegateDidStopPlaying;	// IMP=0x000000000000c701
- (void)notifyDelegateDidStartPlaying;	// IMP=0x000000000000c663
@property(readonly, nonatomic) _Bool isPlaybackAtEnd;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)pause;	// IMP=0x000000000000c3bc
- (void)play;	// IMP=0x000000000000c309
- (id)publishedObjectWithKey:(id)arg1 required:(_Bool)arg2;	// IMP=0x000000000000c271
- (id)publishedLayerWithKey:(id)arg1 required:(_Bool)arg2;	// IMP=0x000000000000c21a
- (void)moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 animate:(_Bool)arg3;	// IMP=0x000000000000c196
- (void)removeFromSuperlayer;	// IMP=0x000000000000c135
- (void)addToLayer:(id)arg1 onTop:(_Bool)arg2 gravity:(id)arg3;	// IMP=0x000000000000c04f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bacc
- (void)dealloc;	// IMP=0x000000000000b7fd
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2 rootLayer:(id)arg3 publishedObjects:(id)arg4;	// IMP=0x000000000000b6d8
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2;	// IMP=0x000000000000b568
- (id)initWithFileName:(id)arg1 retinaScale:(double)arg2;	// IMP=0x000000000000b47d

@end

