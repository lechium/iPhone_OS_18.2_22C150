//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface backtapInput : NSObject
{
    MLMultiArray *_model_input;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002d90
@property(retain, nonatomic) MLMultiArray *model_input; // @synthesize model_input=_model_input;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000002c60
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithModel_input:(id)arg1;	// IMP=0x0000000000002b60

@end
