//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebOpenURLAction
{
    NSURL *_URL;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (id)_openIgnoringOverrides:(id)arg1;	// IMP=0x00100000000cbc17
+ (id)_openUniversalLink:(id)arg1;	// IMP=0x00100000000cb978
- (void).cxx_destruct;	// IMP=0x00000000000cbde3
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)runAction;	// IMP=0x00000000000cb3ef
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000cb1c0

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
