//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDAudioCodecParameters : HAPTLVBase
{
    NSNumber *_audioChannelCount;	// 8 = 0x8
    NSArray *_bitRateSettings;	// 16 = 0x10
    NSArray *_audioSampleRates;	// 24 = 0x18
    NSNumber *_rtpPtime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001deca5
- (void).cxx_destruct;	// IMP=0x00000000001debb8
@property(readonly, copy, nonatomic) NSNumber *rtpPtime; // @synthesize rtpPtime=_rtpPtime;
@property(readonly, copy, nonatomic) NSArray *audioSampleRates; // @synthesize audioSampleRates=_audioSampleRates;
@property(readonly, copy, nonatomic) NSArray *bitRateSettings; // @synthesize bitRateSettings=_bitRateSettings;
@property(readonly, copy, nonatomic) NSNumber *audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dea5c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001de754
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001de575
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001de109
- (id)initWithChannelCount:(id)arg1 bitRateSetting:(id)arg2 audioSampleRate:(id)arg3 rtpPtime:(id)arg4;	// IMP=0x00000000001de00c

@end
