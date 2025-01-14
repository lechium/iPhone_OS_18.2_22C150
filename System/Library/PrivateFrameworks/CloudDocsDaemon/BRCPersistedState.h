//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCPersistedState : NSObject
{
    NSObject<OS_dispatch_queue> *_assertionQueue;	// 8 = 0x8
}

+ (id)loadFromClientStateInSession:(id)arg1;	// IMP=0x0010000000186b1b
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;	// IMP=0x0010000000186aa5
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000186a9d
- (void).cxx_destruct;	// IMP=0x0000000000186ba8
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000186b6f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000186b5d
- (void)assertQueue;	// IMP=0x0000000000186b2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

