//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingStringConstraint : HMFObject
{
    NSSet *_validValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009380bb
@property(copy) NSSet *validValues; // @synthesize validValues=_validValues;
- (id)initWithValidValues:(id)arg1;	// IMP=0x000000000093801a
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000938012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
