//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay
{
    CUIPSDGradient *_gradient;	// 24 = 0x18
}

@property(retain) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;	// IMP=0x00000000000af11f
- (unsigned int)effectType;	// IMP=0x00000000000af114
- (id)init;	// IMP=0x00000000000af0c1
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000004f6cf
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f3cb

@end

