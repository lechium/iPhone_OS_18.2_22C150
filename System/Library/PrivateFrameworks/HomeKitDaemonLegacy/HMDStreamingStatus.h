//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDStreamingStatus : HAPTLVBase
{
    unsigned long long _streamingStatus;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000954fe
@property(readonly, nonatomic) unsigned long long streamingStatus; // @synthesize streamingStatus=_streamingStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095495
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009541c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000095380
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000951cc

@end
