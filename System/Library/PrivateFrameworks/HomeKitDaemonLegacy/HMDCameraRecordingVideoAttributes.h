//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingVideoAttributes : HAPTLVBase
{
    NSNumber *_imageWidth;	// 8 = 0x8
    NSNumber *_imageHeight;	// 16 = 0x10
    long long _resolution;	// 24 = 0x18
    NSNumber *_frameRate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000089aac5
- (void).cxx_destruct;	// IMP=0x000000000089a699
@property(readonly, copy, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000089a572
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000089a44d
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000089a2ff
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000089a00c
- (id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3;	// IMP=0x0000000000899f18
- (id)initWithResolution:(long long)arg1 frameRate:(id)arg2;	// IMP=0x0000000000899e44

@end

