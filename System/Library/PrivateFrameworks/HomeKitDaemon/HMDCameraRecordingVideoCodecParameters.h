//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingVideoCodecParameters : HAPTLVBase
{
    NSArray *_profiles;	// 8 = 0x8
    NSArray *_levels;	// 16 = 0x10
    NSNumber *_bitRate;	// 24 = 0x18
    NSNumber *_iFrameInterval;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b92fd8
- (void).cxx_destruct;	// IMP=0x0000000000b92eeb
@property(readonly, copy, nonatomic) NSNumber *iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(readonly, copy, nonatomic) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b92d8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b92b1c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b928df
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000b92476
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 bitRate:(id)arg3 iFrameInterval:(id)arg4;	// IMP=0x0000000000b92379

@end
