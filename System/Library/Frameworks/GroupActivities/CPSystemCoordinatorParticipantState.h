//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CPSystemCoordinatorParticipantState : NSObject
{
    MISSING_TYPE *isSpatial;	// 8 = 0x8
    MISSING_TYPE *isSpatialInitiator;	// 9 = 0x9
    MISSING_TYPE *roleIdentifier;	// 16 = 0x10
    MISSING_TYPE *xpcWrappedSeat;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ea370
- (void).cxx_destruct;	// IMP=0x00000000000ea7f0
- (id)init;	// IMP=0x00000000000ea770
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea5b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea4f0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e9f80

@end
