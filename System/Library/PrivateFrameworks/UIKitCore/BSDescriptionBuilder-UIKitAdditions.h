//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSDescriptionBuilder.h>

@interface BSDescriptionBuilder (UIKitAdditions)
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2 skipIfNotSupported:(_Bool)arg3;	// IMP=0x0070000000b0687e
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000b06869
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000b0679e
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000b06789
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000b066bf
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x0070000000b066aa
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2 skipIfUnknown:(_Bool)arg3;	// IMP=0x0070000000b065e0
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2;	// IMP=0x0070000000b065cb
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2 skipIfIdentity:(_Bool)arg3;	// IMP=0x0070000000b0644b
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2;	// IMP=0x0070000000b06437
- (id)ui_appendRect:(struct CGRect)arg1 withName:(id)arg2 ifNotEqualTo:(struct CGRect)arg3;	// IMP=0x0070000000b063ad
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2 ifNotEqualTo:(double)arg3;	// IMP=0x0070000000b0637a
- (id)ui_appendInteger:(long long)arg1 withName:(id)arg2 ifNotEqualTo:(long long)arg3;	// IMP=0x0070000000b0634a
- (id)ui_appendCornerRadii:(struct UIRectCornerRadii)arg1 withName:(id)arg2;	// IMP=0x0070000000b062d2
- (id)ui_appendEdgeInsets:(struct UIEdgeInsets)arg1 withName:(id)arg2;	// IMP=0x0070000000b0625a
- (id)ui_appendVector:(struct CGVector)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;	// IMP=0x0070000000b06143
- (id)ui_appendVector:(struct CGVector)arg1 withName:(id)arg2;	// IMP=0x0070000000b0612a
- (id)ui_appendPoint3D:(struct CAPoint3D)arg1 withName:(id)arg2;	// IMP=0x0070000000b060aa
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2;	// IMP=0x0070000000b0602f
- (id)ui_appendSet:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000b05fa2
- (id)ui_appendArray:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000b05f15
- (id)ui_appendObject:(id)arg1 withName:(id)arg2 usingLightweightDescription:(_Bool)arg3;	// IMP=0x0070000000b05d81
- (void)ui_appendOrientationDebuggingArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x00700000014a3d9f
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;	// IMP=0x00700000014a3c1e
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2;	// IMP=0x00700000014a3c09
@end

