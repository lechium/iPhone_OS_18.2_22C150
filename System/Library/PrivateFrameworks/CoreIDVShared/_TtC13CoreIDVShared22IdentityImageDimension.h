//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13CoreIDVShared22IdentityImageDimension : NSObject
{
    MISSING_TYPE *height;	// 8 = 0x8
    MISSING_TYPE *width;	// 16 = 0x10
    MISSING_TYPE *scale;	// 24 = 0x18
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000007c920
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007c8b0
- (id)init;	// IMP=0x000000000007cd50
@property(nonatomic, readonly) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007cc90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007cb40

@end
