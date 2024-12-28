//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIGravityWellAdaptorInteraction;
@protocol _UIClickHighlightEffect;

__attribute__((visibility("hidden")))
@interface _UIGravityWellAdaptorEffect
{
    double _maxProgress;	// 8 = 0x8
    id <_UIClickHighlightEffect> _adaptedEffect;	// 16 = 0x10
    _UIGravityWellAdaptorInteraction *_adaptorInteraction;	// 24 = 0x18
}

+ (id)effectWithAdaptedClickEffect:(id)arg1;	// IMP=0x0060000000bc0d4d
- (void).cxx_destruct;	// IMP=0x0000000000bc1379
@property(retain, nonatomic) _UIGravityWellAdaptorInteraction *adaptorInteraction; // @synthesize adaptorInteraction=_adaptorInteraction;
@property(retain, nonatomic) id <_UIClickHighlightEffect> adaptedEffect; // @synthesize adaptedEffect=_adaptedEffect;
@property(nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bc117d
- (id)previewForContinuingToEffectWithPreview:(id)arg1;	// IMP=0x0000000000bc112d
- (void)endForHandOff;	// IMP=0x0000000000bc0fe5
- (void)end;	// IMP=0x0000000000bc0f39
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000bc0e76
- (void)begin;	// IMP=0x0000000000bc0dec
- (id)secondaryBodyPreviews;	// IMP=0x0000000000bc0de4

@end
