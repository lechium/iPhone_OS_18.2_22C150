//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AMSUIWebWalletPassAction
{
    _Bool _attemptLynxProvisioning;	// 8 = 0x8
    NSNumber *_lookupFeature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f314c
@property(retain, nonatomic) NSNumber *lookupFeature; // @synthesize lookupFeature=_lookupFeature;
@property(nonatomic) _Bool attemptLynxProvisioning; // @synthesize attemptLynxProvisioning=_attemptLynxProvisioning;
- (id)_lookupPassForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000f2789
- (id)_attemptLynxProvisioning;	// IMP=0x00000000000f2111
- (id)runAction;	// IMP=0x00000000000f1b79
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000f19eb

@end

