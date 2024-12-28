//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingH264Profile : HAPNumberParser
{
    long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x00100000008989d6
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008989ce
@property(readonly, nonatomic) long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(long long)arg1;	// IMP=0x0000000000898931
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000008988da
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000089883e
- (id)description;	// IMP=0x00000000008987ca
- (unsigned long long)hash;	// IMP=0x00000000008987b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000898735
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000089869e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008985e1

@end
