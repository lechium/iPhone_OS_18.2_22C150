//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MLModelStructurePath : NSObject
{
    struct Path _cppPath;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001179d5
- (void).cxx_destruct;	// IMP=0x00000000001179b4
@property(readonly, nonatomic) struct Path cppPath; // @synthesize cppPath=_cppPath;
- (id)description;	// IMP=0x00000000001178f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000117855
@property(readonly, copy, nonatomic) NSArray *components;
- (unsigned long long)hash;	// IMP=0x0000000000117655
@property(readonly, nonatomic) _Bool isMLProgramOperationPath;
@property(readonly, nonatomic) _Bool isNeuralNetworkLayerPath;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000117514
- (id)initWithMLProgramOperationPathComponents:(id)arg1 scopedModelNames:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000115a39
- (id)initWithNeuralNetworkLayerName:(id)arg1 scopedModelNames:(id)arg2;	// IMP=0x0000000000115858
- (id)initWithCppPath:(struct Path)arg1;	// IMP=0x00000000001157eb

@end
