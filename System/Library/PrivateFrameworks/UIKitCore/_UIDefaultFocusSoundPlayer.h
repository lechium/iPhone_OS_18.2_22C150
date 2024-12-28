//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusSoundPlayer : NSObject
{
    NSMutableDictionary *_urlPools;	// 8 = 0x8
    NSMutableDictionary *_focusSoundPools;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_soundQueue;	// 24 = 0x18
    NSTimer *_unregisterTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0010000000b1a5b7
- (void).cxx_destruct;	// IMP=0x0000000000b1b1d5
@property(retain, nonatomic) NSTimer *unregisterTimer; // @synthesize unregisterTimer=_unregisterTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue; // @synthesize soundQueue=_soundQueue;
@property(retain, nonatomic) NSMutableDictionary *focusSoundPools; // @synthesize focusSoundPools=_focusSoundPools;
@property(retain, nonatomic) NSMutableDictionary *urlPools; // @synthesize urlPools=_urlPools;
- (void)_playSystemSound:(unsigned int)arg1 behavior:(unsigned int)arg2 withVolume:(double)arg3 pan:(double)arg4;	// IMP=0x0000000000b1a929
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;	// IMP=0x0000000000b1a838
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;	// IMP=0x0000000000b1a6b9
- (void)dealloc;	// IMP=0x0000000000b1a61c
- (void)_registerForSystemSoundsIfNecessary;	// IMP=0x0000000000b1a3c3
- (id)_init;	// IMP=0x0000000000b1a1f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
