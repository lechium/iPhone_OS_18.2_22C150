//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDH264Profile : HAPNumberParser
{
    unsigned long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x00100000000958b3
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000958ab
@property(readonly, nonatomic) unsigned long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(unsigned long long)arg1;	// IMP=0x0000000000095856
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000000957ff
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000095763
- (id)description;	// IMP=0x00000000000956ef
- (unsigned long long)hash;	// IMP=0x00000000000956dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009565a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000955c3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000095506

@end
