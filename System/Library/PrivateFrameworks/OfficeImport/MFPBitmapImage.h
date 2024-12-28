//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage
{
    NSData *mBitmapData;	// 8 = 0x8
    OITSUImage *mPhoneBitmapImage;	// 16 = 0x10
    struct CGSize mPixelSize;	// 24 = 0x18
    struct CGSize mPointSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000036ae9e
- (struct CGSize)pointSize;	// IMP=0x000000000036ae86
- (struct CGSize)pixelSize;	// IMP=0x000000000036ae6e
- (id)phoneImage;	// IMP=0x000000000036ae59
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;	// IMP=0x000000000036ad4e
- (id)initWithBitmapData:(id)arg1;	// IMP=0x000000000036abc7

@end
