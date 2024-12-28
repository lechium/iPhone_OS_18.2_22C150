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

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006500f9
- (void).cxx_destruct;	// IMP=0x000000000064ffa0
@property(readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // @synthesize mediaContainerConfigurations=_mediaContainerConfigurations;
@property(readonly, nonatomic) unsigned long long eventTriggerOptions; // @synthesize eventTriggerOptions=_eventTriggerOptions;
@property(readonly, copy, nonatomic) NSNumber *prebufferLength; // @synthesize prebufferLength=_prebufferLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000064fe73
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000064fca8
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000064fb33
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000064f7f4
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;	// IMP=0x000000000064f73f

@end
