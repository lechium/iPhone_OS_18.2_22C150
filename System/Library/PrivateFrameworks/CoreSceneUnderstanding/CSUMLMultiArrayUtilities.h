//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSUMLMultiArrayUtilities : NSObject
{
}

+ (_Bool)compareMLMultiArrayShapesForShape1:(id)arg1 Shape2:(id)arg2;	// IMP=0x008000000003bbe0
+ (id)reshapeMLMultiArray:(id)arg1 toShape:(id)arg2;	// IMP=0x008000000003ae50
+ (id)copyFromNSDataAndReshape:(id)arg1 shape:(id)arg2;	// IMP=0x008000000003a2c0
+ (void)printMLMultiArray:(id)arg1;	// IMP=0x008000000003a1e0
+ (id)castToFP16WithDeepCopyFromTensor:(const void *)arg1;	// IMP=0x0080000000039a30
+ (id)deepCopyFromTensor:(const void *)arg1;	// IMP=0x0080000000039410
+ (id)shallowCopyFromTensor:(const void *)arg1;	// IMP=0x0080000000038a40

@end

