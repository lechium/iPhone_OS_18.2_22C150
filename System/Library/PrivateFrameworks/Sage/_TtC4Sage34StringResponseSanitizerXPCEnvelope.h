//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC4Sage34StringResponseSanitizerXPCEnvelope : NSObject
{
    MISSING_TYPE *_sanitizer;	// 8 = 0x8
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000001d487
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001d44a
- (void).cxx_destruct;	// IMP=0x000000000001d5d1
- (id)init;	// IMP=0x000000000001d5be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d551
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d509
@property(nonatomic, copy) NSData *_sanitizer;

@end
