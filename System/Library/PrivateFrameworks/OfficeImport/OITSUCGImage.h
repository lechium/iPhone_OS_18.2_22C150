//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OITSUCGImage
{
    struct CGImage *mCGImage;	// 8 = 0x8
    long long mOrientation;	// 16 = 0x10
    double mScale;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000002823c3
- (long long)imageOrientation;	// IMP=0x00000000002823b2
- (double)scale;	// IMP=0x0000000000282383
- (struct CGSize)size;	// IMP=0x00000000002822b7
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x00000000002822a6
- (struct CGImage *)CGImage;	// IMP=0x0000000000282295
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000282247
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00000000002821b7

@end
