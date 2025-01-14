//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredAnimation : NSObject
{
    _Bool _finalized;	// 8 = 0x8
    _Bool _autoreverses;	// 9 = 0x9
    NSString *_key;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    id _initialValue;	// 32 = 0x20
    double _repeatCount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001a1aefa
@property(nonatomic) _Bool autoreverses; // @synthesize autoreverses=_autoreverses;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) id initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x0000000001a1ada9
- (void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(CDUnknownBlockType)arg4;	// IMP=0x0000000001a1aab6
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;	// IMP=0x0000000001a1aab0
- (void)_finalize;	// IMP=0x0000000001a1aaa6
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x0000000001a1a9aa
- (void)addAnimationFrameForValue:(id)arg1;	// IMP=0x0000000001a1a8a2
@property(readonly, nonatomic) NSArray *animationFrames;
- (id)_animationFrames;	// IMP=0x0000000001a1a803
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

@end

