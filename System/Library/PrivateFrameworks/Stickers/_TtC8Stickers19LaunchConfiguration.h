//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC8Stickers19LaunchConfiguration : NSObject
{
    MISSING_TYPE *sectionType;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 16 = 0x10
    MISSING_TYPE *creationDate;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000004c130
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004c0c0
- (void).cxx_destruct;	// IMP=0x000000000004c730
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c5a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c390
- (id)init;	// IMP=0x000000000004bf40
@property(nonatomic) double creationDate; // @synthesize creationDate;
@property(nonatomic, readonly) NSString *identifier;

@end
