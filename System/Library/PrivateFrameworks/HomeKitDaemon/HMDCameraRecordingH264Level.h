//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingH264Level : HAPNumberParser
{
    long long _h264Level;	// 8 = 0x8
}

+ (id)arrayWithLevels:(id)arg1;	// IMP=0x0010000000b92170
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b92168
@property(readonly, nonatomic) long long h264Level; // @synthesize h264Level=_h264Level;
- (id)initWithH264Level:(long long)arg1;	// IMP=0x0000000000b920cb
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000b92074
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b91fd8
- (id)description;	// IMP=0x0000000000b91f64
- (unsigned long long)hash;	// IMP=0x0000000000b91f52
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b91ecf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b91e38
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b91d7b

@end

