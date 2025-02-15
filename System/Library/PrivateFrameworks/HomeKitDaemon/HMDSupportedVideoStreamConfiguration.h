//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDSupportedVideoStreamConfiguration : HAPTLVBase
{
    NSDictionary *_codecConfigurations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dd498
- (void).cxx_destruct;	// IMP=0x00000000001dd438
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dd3b7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dd27b
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001dd162
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000001dcc82
- (id)initWithCodecConfigurations:(id)arg1;	// IMP=0x00000000001dcc08

@end

