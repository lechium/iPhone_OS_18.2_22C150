//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CHKWidgetPersonality : NSObject
{
    MISSING_TYPE *extensionBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *kind;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e1720
- (void).cxx_destruct;	// IMP=0x00000000000e1b90
- (id)init;	// IMP=0x00000000000e1b30
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e19b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e18b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e1690
@property(nonatomic, readonly) long long hash;
- (_Bool)matchesPersonality:(id)arg1;	// IMP=0x00000000000e14b0
@property(nonatomic, readonly) NSString *kind;
@property(nonatomic, readonly) NSString *extensionBundleIdentifier;

@end
