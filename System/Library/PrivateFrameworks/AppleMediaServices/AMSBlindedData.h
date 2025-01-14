//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface AMSBlindedData : NSObject
{
    MISSING_TYPE *blindedElement;	// 8 = 0x8
    MISSING_TYPE *privateInput;	// 24 = 0x18
    MISSING_TYPE *timestamp;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000035d20
- (void).cxx_destruct;	// IMP=0x0000000000036540
- (id)init;	// IMP=0x000000000003652d
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000036491
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003638a
@property(nonatomic, readonly) NSString *blindedElementString;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000361da
- (id)initWithBlindedElement:(id)arg1 privateInput:(id)arg2 timestamp:(id)arg3;	// IMP=0x0000000000035e6e
@property(nonatomic, readonly) NSString *timestamp;
@property(nonatomic, readonly) NSData *privateInput;
@property(nonatomic, readonly) NSData *blindedElement;

@end

