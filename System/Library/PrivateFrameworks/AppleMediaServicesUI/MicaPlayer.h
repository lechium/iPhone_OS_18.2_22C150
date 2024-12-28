//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSDictionary, NSString, NSTimer;
@protocol MicaPlayerDelegate;

__attribute__((visibility("hidden")))
@interface MicaPlayer : NSObject
{
    _Bool _loopDuringPlayback;	// 8 = 0x8
    float _preferredPlaybackSpeed;	// 12 = 0xc
    id <MicaPlayerDelegate> _delegate;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSDictionary *_publishedObjects;	// 32 = 0x20
    CALayer *_rootLayer;	// 40 = 0x28
    double _retinaScale;	// 48 = 0x30
    double _documentDuration;	// 56 = 0x38
    NSTimer *_playTimer;	// 64 = 0x40
}

+ (id)updatePublishedObjects:(id)arg1 toReferenceLayersInTree:(id)arg2 ratherThanLayersInTree:(id)arg3;	// IMP=0x00100000000f5f83
+ (_Bool)boolFromDictionary:(id)arg1 key:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x00100000000f5d50
+ (id)rootDictForPath:(id)arg1;	// IMP=0x00100000000f5a9f
- (void).cxx_destruct;	// IMP=0x00000000000f6f46
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(nonatomic) _Bool loopDuringPlayback; // @synthesize loopDuringPlayback=_loopDuringPlayback;
@property(nonatomic) float preferredPlaybackSpeed; // @synthesize preferredPlaybackSpeed=_preferredPlaybackSpeed;
@property(nonatomic) double documentDuration; // @synthesize documentDuration=_documentDuration;
@property(nonatomic) double retinaScale; // @synthesize retinaScale=_retinaScale;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(retain, nonatomic) NSDictionary *publishedObjects; // @synthesize publishedObjects=_publishedObjects;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak id <MicaPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)runPlayTimer:(id)arg1;	// IMP=0x00000000000f6e1a
- (void)stopPlayTimer;	// IMP=0x00000000000f6ddc
- (void)startPlayTimerIfNeeded;	// IMP=0x00000000000f6c90
- (_Bool)isTimerNeeded;	// IMP=0x00000000000f6bdb
- (void)notifyDelegateDidChangePlaybackTimeIsPlaybackAtEnd:(_Bool)arg1;	// IMP=0x00000000000f6b28
- (void)notifyDelegateDidChangePlaybackTime;	// IMP=0x00000000000f6a72
- (void)notifyDelegateDidStopPlaying;	// IMP=0x00000000000f69d4
- (void)notifyDelegateDidStartPlaying;	// IMP=0x00000000000f6936
@property(readonly, nonatomic) _Bool isPlaybackAtEnd;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)pause;	// IMP=0x00000000000f668f
- (void)play;	// IMP=0x00000000000f65dc
- (id)publishedObjectWithKey:(id)arg1 required:(_Bool)arg2;	// IMP=0x00000000000f6544
- (id)publishedLayerWithKey:(id)arg1 required:(_Bool)arg2;	// IMP=0x00000000000f64ed
- (void)moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 animate:(_Bool)arg3;	// IMP=0x00000000000f6469
- (void)removeFromSuperlayer;	// IMP=0x00000000000f6408
- (void)addToLayer:(id)arg1 onTop:(_Bool)arg2 gravity:(id)arg3;	// IMP=0x00000000000f6322
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f5d9f
- (void)dealloc;	// IMP=0x00000000000f5a61
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2 rootLayer:(id)arg3 publishedObjects:(id)arg4;	// IMP=0x00000000000f593c
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2;	// IMP=0x00000000000f57cc
- (id)initWithFileName:(id)arg1 retinaScale:(double)arg2;	// IMP=0x00000000000f56e1
- (id)initWithData:(id)arg1 url:(id)arg2 retinaScale:(double)arg3;	// IMP=0x00000000000f5409

@end
