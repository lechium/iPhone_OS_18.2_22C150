//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class IMWeakReference;

__attribute__((visibility("hidden")))
@interface _CKWeakWrapper : NSProxy
{
    IMWeakReference *_weakReference;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000187770
@property(retain, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain, nonatomic) IMWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (id)description;	// IMP=0x00000000001876ac
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000018763c
- (Class)class;	// IMP=0x00000000001875c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000187532
- (unsigned long long)hash;	// IMP=0x00000000001874c4
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000187493
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000001873fa
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000187381
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000001872aa
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000018725a
- (id)initWithObject:(id)arg1;	// IMP=0x00000000001871c4

@end

