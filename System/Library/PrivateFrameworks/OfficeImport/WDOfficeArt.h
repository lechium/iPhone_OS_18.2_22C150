//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDOfficeArt
{
    OADDrawable *mDrawable;	// 16 = 0x10
    _Bool mFloating;	// 24 = 0x18
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;	// IMP=0x00600000003f2efa
- (void).cxx_destruct;	// IMP=0x00000000003f2f57
- (id)description;	// IMP=0x00000000003f2f19
- (void)propagateTextTypeToDrawables;	// IMP=0x00000000001aa3e5
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;	// IMP=0x00000000001aa4bd
- (id)imageName;	// IMP=0x00000000003f2dd4
- (id)imageData;	// IMP=0x00000000003f2c53
- (void)setImageBlipRef:(id)arg1;	// IMP=0x00000000003f2b79
- (id)imageBlipRef;	// IMP=0x00000000003f2a80
- (void)setFloating:(_Bool)arg1;	// IMP=0x00000000001aa3ab
- (_Bool)isFloating;	// IMP=0x0000000000159c97
- (void)clearDrawable;	// IMP=0x00000000003f2a5f
- (_Bool)isDrawableOverridden;	// IMP=0x000000000015af86
- (id)overrideDrawable;	// IMP=0x00000000003f2a57
- (void)setDrawable:(id)arg1;	// IMP=0x00000000000ddd8b
- (id)drawable;	// IMP=0x00000000000e25ab
- (int)runType;	// IMP=0x000000000015ae2e
- (id)initWithParagraph:(id)arg1;	// IMP=0x00000000000daf9e
- (void)checkForFloating:(id)arg1;	// IMP=0x000000000015971d

@end
