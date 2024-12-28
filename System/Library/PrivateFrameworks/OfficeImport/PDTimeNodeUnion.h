//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

__attribute__((visibility("hidden")))
@interface PDTimeNodeUnion : NSObject
{
    PDAnimateTimeBehavior *mTimeBehavior;	// 8 = 0x8
    PDAnimateEffectBehavior *mEffectBehavior;	// 16 = 0x10
    PDAnimateMotionBehavior *mMotionBehavior;	// 24 = 0x18
    PDAnimateRotateBehavior *mRotateBehavior;	// 32 = 0x20
    PDAnimateScaleBehavior *mScaleBehavior;	// 40 = 0x28
    PDAnimateColorBehavior *mColorBehavior;	// 48 = 0x30
    PDAudioNode *mAudio;	// 56 = 0x38
    PDVideoNode *mVideo;	// 64 = 0x40
    PDParallelTimeNode *mParallelTimeNodeGroup;	// 72 = 0x48
    PDSequentialTimeNode *mSequentialTimeNodeGroup;	// 80 = 0x50
    PDSetBehavior *mSetBehavior;	// 88 = 0x58
    PDCmdBehavior *mCmdBehavior;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000439781
- (id)description;	// IMP=0x0000000000439743
- (void)setCmdBehavior:(id)arg1;	// IMP=0x000000000022fb79
- (id)cmdBehavior;	// IMP=0x0000000000439735
- (void)setBehavior:(id)arg1;	// IMP=0x00000000001dc568
- (id)behavior;	// IMP=0x0000000000439727
- (void)setSequential:(id)arg1;	// IMP=0x00000000001d37e9
- (id)sequential;	// IMP=0x0000000000439719
- (void)setParallel:(id)arg1;	// IMP=0x00000000001d37d8
- (id)parallel;	// IMP=0x000000000043970b
- (void)setVideo:(id)arg1;	// IMP=0x000000000023bbd8
- (id)video;	// IMP=0x00000000004396fd
- (void)setAudio:(id)arg1;	// IMP=0x0000000000237995
- (id)audio;	// IMP=0x00000000004396ef
- (void)setColorBehavior:(id)arg1;	// IMP=0x00000000004396de
- (id)colorBehavior;	// IMP=0x00000000004396d0
- (void)setScaleBehavior:(id)arg1;	// IMP=0x000000000021b8e5
- (id)scaleBehavior;	// IMP=0x00000000004396c2
- (void)setRotateBehavior:(id)arg1;	// IMP=0x000000000022b9ec
- (id)rotateBehavior;	// IMP=0x00000000004396b4
- (void)setMotionBehavior:(id)arg1;	// IMP=0x00000000001d37b6
- (id)motionBehavior;	// IMP=0x00000000004396a6
- (void)setEffectBehavior:(id)arg1;	// IMP=0x00000000001dc835
- (id)effectBehavior;	// IMP=0x0000000000439698
- (void)setTimeBehavior:(id)arg1;	// IMP=0x00000000001e93f7
- (id)timeBehavior;	// IMP=0x000000000043968a
- (id)commonBehavior;	// IMP=0x0000000000439631
- (id)init;	// IMP=0x00000000001d1c67

@end
