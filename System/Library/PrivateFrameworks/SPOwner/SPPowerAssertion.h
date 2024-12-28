//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPPowerAssertion : NSObject
{
    unsigned int _powerAssertionId;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000046d25
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int powerAssertionId; // @synthesize powerAssertionId=_powerAssertionId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)dealloc;	// IMP=0x0000000000046c77
- (void)_drop;	// IMP=0x0000000000046bcd
- (void)drop;	// IMP=0x0000000000046b6c
- (id)assertionType;	// IMP=0x0000000000046b4f
- (id)assertionName;	// IMP=0x0000000000046aa4
- (id)powerAssertionOption;	// IMP=0x0000000000046968
- (void)hold;	// IMP=0x000000000004671b
- (id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3;	// IMP=0x000000000004660f

@end
