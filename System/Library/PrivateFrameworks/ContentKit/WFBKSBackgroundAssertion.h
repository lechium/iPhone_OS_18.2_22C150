//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFBackgroundAssertion.h"

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface WFBKSBackgroundAssertion : WFBackgroundAssertion
{
    NSString *_taskName;	// 8 = 0x8
    CDUnknownBlockType _expirationHandler;	// 16 = 0x10
    BKSProcessAssertion *_assertion;	// 24 = 0x18
    id _observer;	// 32 = 0x20
}

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000089e66
- (void).cxx_destruct;	// IMP=0x0000000000089a03
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(readonly, copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)end;	// IMP=0x0000000000089860
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000894d7

@end

