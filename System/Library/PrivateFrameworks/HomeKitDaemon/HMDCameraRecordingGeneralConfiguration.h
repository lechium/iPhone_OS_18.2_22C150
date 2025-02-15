//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase
{
    NSNumber *_prebufferLength;	// 8 = 0x8
    unsigned long long _eventTriggerOptions;	// 16 = 0x10
    NSArray *_mediaContainerConfigurations;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008b7341
- (void).cxx_destruct;	// IMP=0x00000000008b71e8
@property(readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // @synthesize mediaContainerConfigurations=_mediaContainerConfigurations;
@property(readonly, nonatomic) unsigned long long eventTriggerOptions; // @synthesize eventTriggerOptions=_eventTriggerOptions;
@property(readonly, copy, nonatomic) NSNumber *prebufferLength; // @synthesize prebufferLength=_prebufferLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008b70bb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008b6ef0
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000008b6d7b
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000008b6a3c
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;	// IMP=0x00000000008b6987

@end

