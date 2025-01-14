//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelTypeRegistry : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00800000001df4c8
- (id)loadNeuralNetworkClasses:(_Bool)arg1 trainWithMLCompute:(_Bool)arg2;	// IMP=0x00000000001df430
- (Class)classForCompilingModelType:(int)arg1;	// IMP=0x00000000001df16c
- (id)classesForLoadingModelType:(int)arg1 configuration:(id)arg2 isUpdatable:(_Bool)arg3 isEncrypted:(_Bool)arg4;	// IMP=0x00000000001de698
- (id)classesForLoadingModelType:(int)arg1;	// IMP=0x00000000001de613
- (id)init;	// IMP=0x00000000001de5e4

@end

