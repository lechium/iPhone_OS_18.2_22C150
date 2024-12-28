//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HDIDSMessagePersistentContext : NSObject
{
    _Bool _fromRequest;	// 8 = 0x8
    unsigned short _messageID;	// 10 = 0xa
    NSString *_idsIdentifier;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004dae6
- (void).cxx_destruct;	// IMP=0x0000000000036c00
- (id)description;	// IMP=0x000000000076b66c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036a1d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000370fe

@end
