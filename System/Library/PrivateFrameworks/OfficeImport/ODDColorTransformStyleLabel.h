//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;	// 8 = 0x8
    ODDFillColorList *mLineColors;	// 16 = 0x10
    ODDFillColorList *mEffectColors;	// 24 = 0x18
    ODDFillColorList *mTextLineColors;	// 32 = 0x20
    ODDFillColorList *mTextFillColors;	// 40 = 0x28
    ODDFillColorList *mTextEffectColors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032f3e0
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;	// IMP=0x00000000001e740a
- (void)setTextEffectColors:(id)arg1;	// IMP=0x00000000001e141f
- (id)textEffectColors;	// IMP=0x000000000032f3d2
- (void)setTextFillColors:(id)arg1;	// IMP=0x00000000001e140e
- (id)textFillColors;	// IMP=0x00000000001e7898
- (void)setTextLineColors:(id)arg1;	// IMP=0x00000000001e13fd
- (id)textLineColors;	// IMP=0x000000000032f3c4
- (void)setEffectColors:(id)arg1;	// IMP=0x00000000001e13ec
- (id)effectColors;	// IMP=0x00000000001e788a
- (void)setLineColors:(id)arg1;	// IMP=0x00000000001e13db
- (id)lineColors;	// IMP=0x00000000001e786e
- (void)setFillColors:(id)arg1;	// IMP=0x00000000001e13ca
- (id)fillColors;	// IMP=0x00000000001e7741

@end

