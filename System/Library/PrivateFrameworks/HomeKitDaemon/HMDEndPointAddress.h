//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDEndPointAddress : HAPTLVBase
{
    _Bool _isIPv6Address;	// 8 = 0x8
    NSString *_ipAddress;	// 16 = 0x10
    NSNumber *_videoRTPPort;	// 24 = 0x18
    NSNumber *_audioRTPPort;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001e1c95
- (void).cxx_destruct;	// IMP=0x00000000001e1c53
@property(readonly, copy, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort=_audioRTPPort;
@property(readonly, copy, nonatomic) NSNumber *videoRTPPort; // @synthesize videoRTPPort=_videoRTPPort;
@property(readonly, nonatomic) _Bool isIPv6Address; // @synthesize isIPv6Address=_isIPv6Address;
@property(readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e1b08
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e1878
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001e16e5
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001e14a8
@property(readonly, copy) NSData *tlvData;
- (_Bool)isCompatibleWithRemoteEndPointAddress:(id)arg1;	// IMP=0x00000000001e127d
- (id)initWithIPAddress:(id)arg1 isIPv6Address:(_Bool)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4;	// IMP=0x00000000001e11a4

@end
