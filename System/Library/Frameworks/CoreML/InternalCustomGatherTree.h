//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InternalCustomGatherTree : NSObject
{
    vector_cd3186ef _shape;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000002abad2
- (void).cxx_destruct;	// IMP=0x00000000002abab6
@property(readonly, nonatomic) vector_cd3186ef shape; // @synthesize shape=_shape;
- (_Bool)setWeightData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002aba73
- (id)outputShapesForInputShapes:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ab74b
- (id)initWithParameterDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ab71c
- (_Bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002ab1e2

@end

