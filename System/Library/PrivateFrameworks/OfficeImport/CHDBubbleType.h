//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHDBubbleType
{
    _Bool mShowNegativeBubbles;	// 41 = 0x29
    _Bool mSizeRepresentsRadius;	// 42 = 0x2a
    int mBubbleScale;	// 44 = 0x2c
}

- (void)setSizeRepresentsRadius:(_Bool)arg1;	// IMP=0x00000000003c2114
- (_Bool)isSizeRepresentingRadius;	// IMP=0x00000000003c2104
- (void)setBubbleScale:(int)arg1;	// IMP=0x00000000003c20f4
- (int)bubbleScale;	// IMP=0x00000000003c20e4
- (void)setShowNegBubbles:(_Bool)arg1;	// IMP=0x00000000003c20d4
- (_Bool)isShowNegBubbles;	// IMP=0x00000000003c20c4
- (_Bool)is3DType;	// IMP=0x00000000003c1f7c
- (int)defaultLabelPosition;	// IMP=0x00000000003c1f21
- (id)initWithChart:(id)arg1;	// IMP=0x00000000003c1edf

@end

