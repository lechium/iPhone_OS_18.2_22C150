//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSString;

@interface RequestThrottleRecord : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSString *_externalVersionID;	// 16 = 0x10
    NSString *_itemID;	// 24 = 0x18
    MISSING_TYPE *_requestDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000258916
- (void).cxx_destruct;	// IMP=0x0020000000258b16
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000258a60
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000025891e
- (unsigned long long)hash;	// IMP=0x0010000000258900
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000258826

@end
