//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface Core_Audio_XPC_Raw_Transporter : NSObject
{
    NSObject<OS_xpc_object> *_object;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000736d3
+ (id)object:(id)arg1;	// IMP=0x0010000000073675
- (void).cxx_destruct;	// IMP=0x0000000000073665
@property(retain, nonatomic) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073503
- (void)dealloc;	// IMP=0x00000000000734c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073360
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000732e1

@end
