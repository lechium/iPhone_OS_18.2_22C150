//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SwitchProfileIntent;

@interface _TtC20SiriIdentityInternal26SwitchProfileIntentHandler : NSObject
{
    MISSING_TYPE *pbAccess;	// 8 = 0x8
    MISSING_TYPE *assistantServices;	// 48 = 0x30
    MISSING_TYPE *siriKitEventSender;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001b1a0
- (void)handleSwitchProfile:(SwitchProfileIntent *)arg1 completion:(void (^)(SwitchProfileIntentResponse *))arg2;	// IMP=0x000000000001837b
- (void)confirmSwitchProfile:(SwitchProfileIntent *)arg1 completion:(void (^)(SwitchProfileIntentResponse *))arg2;	// IMP=0x0000000000017b51
- (void)resolveAccountForSwitchProfile:(SwitchProfileIntent *)arg1 withCompletion:(void (^)(SwitchProfileAccountResolutionResult *))arg2;	// IMP=0x0000000000017789
- (id)init;	// IMP=0x0000000000016957

@end
