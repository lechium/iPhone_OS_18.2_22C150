//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CPSystemCoordinatorState : NSObject
{
    MISSING_TYPE *localParticipantState;	// 8 = 0x8
    MISSING_TYPE *groupImmersionStyle;	// 16 = 0x10
    MISSING_TYPE *activeSpatialParticipantCount;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e7e00
- (void).cxx_destruct;	// IMP=0x00000000000e85f0
- (id)init;	// IMP=0x00000000000e85a0
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e81a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7f40
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e7cd0

@end

