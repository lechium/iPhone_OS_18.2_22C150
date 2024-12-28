//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDReselectedRTPParameters : HAPTLVBase
{
    NSNumber *_maximumBitrate;	// 8 = 0x8
    NSNumber *_minimumBitrate;	// 16 = 0x10
    NSNumber *_rtcpInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a5353
- (void).cxx_destruct;	// IMP=0x00000000000a5311
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a51fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4faa
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000a4e5c
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000a4cc5
@property(readonly, copy) NSData *tlvData;
- (id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3;	// IMP=0x00000000000a4acb

@end
