//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (TransparencyData)
+ (id)kt_dataWithUint64:(unsigned long long)arg1 length:(unsigned long long)arg2;	// IMP=0x00600000000024de
+ (id)kt_random;	// IMP=0x006000000000245b
+ (id)kt_dataWithHexString:(const char *)arg1;	// IMP=0x0060000000002070
- (id)kt_sha256WithSalt:(id)arg1;	// IMP=0x00100000000022f3
- (id)kt_sha256;	// IMP=0x0010000000002232
- (id)kt_hexString;	// IMP=0x001000000000214d
@end
