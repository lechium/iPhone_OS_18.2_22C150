//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder
{
    OADPath *_path;	// 48 = 0x30
    struct CGSize _space;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000046195a
- (struct CGPoint)_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform)arg2 inPath:(struct CGPath *)arg3;	// IMP=0x0000000000156c69
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000156b17
- (struct CGAffineTransform)affineTransform;	// IMP=0x00000000001566aa
- (void)setSpace:(struct CGSize)arg1;	// IMP=0x000000000015664a
- (void)setPath:(id)arg1;	// IMP=0x0000000000156636

@end
