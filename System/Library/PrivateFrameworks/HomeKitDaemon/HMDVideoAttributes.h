//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDVideoResolution, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDVideoAttributes : HAPTLVBase
{
    NSNumber *_imageWidth;	// 8 = 0x8
    NSNumber *_imageHeight;	// 16 = 0x10
    HMDVideoResolution *_videoResolution;	// 24 = 0x18
    NSNumber *_framerate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001db86e
+ (_Bool)translateImageResolution:(id)arg1 imageWidth:(id *)arg2 imageHeight:(id *)arg3;	// IMP=0x00100000001db81d
- (void).cxx_destruct;	// IMP=0x00000000001db7ca
@property(readonly, copy, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, copy, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001db6a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001db3f4
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001db238
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001daf31
- (id)translateImageWidth:(id)arg1 imageHeight:(id)arg2;	// IMP=0x00000000001da86d
- (id)initWithResolution:(id)arg1 framerate:(id)arg2;	// IMP=0x00000000001da700

@end

