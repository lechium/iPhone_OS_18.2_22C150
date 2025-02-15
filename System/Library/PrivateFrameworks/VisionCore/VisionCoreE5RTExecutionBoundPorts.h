//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VisionCoreE5RTExecutionBoundPorts : NSObject
{
    NSMutableDictionary *_namedPorts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000020573
- (void)releasePortNamed:(id)arg1;	// IMP=0x0000000000020503
- (void)releaseAllPorts;	// IMP=0x00000000000204f5
- (_Bool)getPort:(void **)arg1 named:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020403
- (_Bool)recordPort:(void *)arg1 named:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000202e8
@property(readonly, copy, nonatomic) NSArray *allPortNames;
- (void)dealloc;	// IMP=0x0000000000020298
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000020228
- (id)init;	// IMP=0x0000000000020211

@end

