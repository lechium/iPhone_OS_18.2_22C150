//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNShotflowNetworkANSTv1
{
}

+ (_Bool)inputBGR;	// IMP=0x008000000041ecc1
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000041ecb5
+ (float)inputScale;	// IMP=0x008000000041eca7
+ (_Bool)hasPose;	// IMP=0x008000000041ec9f
+ (const void *)importantClasses;	// IMP=0x008000000041ec73
+ (unsigned long long)mumberPosClasses;	// IMP=0x008000000041ec68
+ (struct CGSize)inputImageSize;	// IMP=0x008000000041ec52
+ (id)inputLayerName;	// IMP=0x008000000041ec45
+ (id)modelName;	// IMP=0x008000000041ec38
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x000000000041f64d
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000041f4ac
- (void)initializeBuffers;	// IMP=0x000000000041ed7d

@end

