//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface ScandiumRIrRatioModelOutput : NSObject
{
    MLMultiArray *_Identity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000030ce7
@property(retain, nonatomic) MLMultiArray *Identity; // @synthesize Identity=_Identity;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000030c42
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithIdentity:(id)arg1;	// IMP=0x0000000000030bb7

@end
