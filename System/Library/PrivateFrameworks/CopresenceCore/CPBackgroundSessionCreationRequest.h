//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CPBackgroundSessionCreationRequest : NSObject
{
    MISSING_TYPE *id;	// 0 = 0x0
    MISSING_TYPE *activitySessionRequest;	// 0 = 0x0
    MISSING_TYPE *members;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *localMember;	// 0 = 0x0
    MISSING_TYPE *isCrossAccount;	// 1163157343 = 0x45545f5f
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b3b70
- (void).cxx_destruct;	// IMP=0x00000000000b48a0
- (id)init;	// IMP=0x00000000000b4840
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b4330
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b4130
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b3970

@end
