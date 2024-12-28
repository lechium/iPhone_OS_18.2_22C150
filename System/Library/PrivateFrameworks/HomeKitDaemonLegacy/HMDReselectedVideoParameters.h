//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDReselectedRTPParameters, HMDVideoAttributes, NSData;

__attribute__((visibility("hidden")))
@interface HMDReselectedVideoParameters : HAPTLVBase
{
    HMDVideoAttributes *_videoAttributes;	// 8 = 0x8
    HMDReselectedRTPParameters *_rtpParameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a5b23
- (void).cxx_destruct;	// IMP=0x00000000000a5af2
@property(readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a5a22
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5862
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000a56f8
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000a551e
@property(readonly, copy) NSData *tlvData;
- (id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2;	// IMP=0x00000000000a535b

@end
