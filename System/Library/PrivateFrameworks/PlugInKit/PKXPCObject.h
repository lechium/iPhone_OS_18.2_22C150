//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PKXPCObject : NSObject
{
    NSObject<OS_xpc_object> *_object;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000240e0
+ (id)object:(id)arg1;	// IMP=0x0010000000023e40
- (void).cxx_destruct;	// IMP=0x0000000000024120
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024030
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023f00
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000023e90

@end

