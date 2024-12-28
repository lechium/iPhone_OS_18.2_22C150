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

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d82c1
@property(readonly, nonatomic) unsigned long long streamingStatus; // @synthesize streamingStatus=_streamingStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d8258
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d81df
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001d8143
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001d7f8f

@end
