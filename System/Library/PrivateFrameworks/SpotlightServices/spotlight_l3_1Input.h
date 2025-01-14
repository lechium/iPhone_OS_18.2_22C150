//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface spotlight_l3_1Input : NSObject
{
    MLMultiArray *_id_features;	// 8 = 0x8
    MLMultiArray *_dense_features;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005d044
@property(retain, nonatomic) MLMultiArray *dense_features; // @synthesize dense_features=_dense_features;
@property(retain, nonatomic) MLMultiArray *id_features; // @synthesize id_features=_id_features;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000005cf47
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithId_features:(id)arg1 dense_features:(id)arg2;	// IMP=0x000000000005ce8e

@end

