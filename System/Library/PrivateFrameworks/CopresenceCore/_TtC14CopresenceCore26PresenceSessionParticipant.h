//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC14CopresenceCore26PresenceSessionParticipant : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *handle;	// 16 = 0x10
    MISSING_TYPE *isCurrentDevice;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002e0b0
- (void).cxx_destruct;	// IMP=0x000000000002e4d0
- (id)init;	// IMP=0x000000000002e470
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e3f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e1c0
@property(nonatomic, readonly) NSString *description;

@end
