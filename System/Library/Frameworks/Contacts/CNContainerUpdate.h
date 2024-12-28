//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContainerPropertyDescription, NSString;

__attribute__((visibility("hidden")))
@interface CNContainerUpdate : NSObject
{
    CNContainerPropertyDescription *_property;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)updateWithValue:(id)arg1 property:(id)arg2;	// IMP=0x00100000001381ba
- (void).cxx_destruct;	// IMP=0x0000000000138429
- (id)value;	// IMP=0x000000000013841b
- (void)applyToMutableContainer:(id)arg1;	// IMP=0x00000000001383af
- (id)property;	// IMP=0x00000000001383a1
@property(readonly, copy) NSString *description;
- (id)initWithProperty:(id)arg1 value:(id)arg2;	// IMP=0x0000000000138228

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
