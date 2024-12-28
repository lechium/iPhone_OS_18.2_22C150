//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSObject
{
    Class isa;	// 0 = 0x0
}

+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024dae
+ (id)mutableCopy;	// IMP=0x0010000000024daa
+ (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024da6
+ (id)copy;	// IMP=0x0010000000024da2
+ (struct _NSZone *)zone;	// IMP=0x0010000000024d9f
+ (void)dealloc;	// IMP=0x0010000000024d9e
+ (id)init;	// IMP=0x0010000000024d9a
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024d95
+ (id)alloc;	// IMP=0x0010000000024d90
+ (unsigned long long)retainCount;	// IMP=0x0010000000024d88
+ (id)autorelease;	// IMP=0x0010000000024d84
+ (oneway void)release;	// IMP=0x0010000000024d83
+ (_Bool)retainWeakReference;	// IMP=0x0010000000024d80
+ (_Bool)allowsWeakReference;	// IMP=0x0010000000024d7d
+ (_Bool)_isDeallocating;	// IMP=0x0010000000024d7a
+ (_Bool)_tryRetain;	// IMP=0x0010000000024d77
+ (id)retain;	// IMP=0x0010000000024d73
+ (id)new;	// IMP=0x0010000000024d41
+ (id)debugDescription;	// IMP=0x0010000000024d34
+ (id)description;	// IMP=0x0010000000024d31
+ (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0010000000024d2e
+ (void)forwardInvocation:(id)arg1;	// IMP=0x0010000000024cf3
+ (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0010000000024ce1
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x0010000000024ccf
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x0010000000024c87
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0010000000024c44
+ (id)performSelector:(SEL)arg1;	// IMP=0x0010000000024c10
+ (void)doesNotRecognizeSelector:(SEL)arg1;	// IMP=0x0010000000024bdc
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x0010000000024bd9
+ (_Bool)resolveClassMethod:(SEL)arg1;	// IMP=0x0010000000024bd6
+ (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;	// IMP=0x0010000000024bb2
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;	// IMP=0x0010000000024b8e
+ (_Bool)isProxy;	// IMP=0x0010000000024b8b
+ (_Bool)isFault;	// IMP=0x0010000000024b88
+ (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024b81
+ (unsigned long long)hash;	// IMP=0x0010000000024b7d
+ (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0010000000024b47
+ (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0010000000024b39
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0010000000024b29
+ (_Bool)isAncestorOfObject:(id)arg1;	// IMP=0x0010000000024af1
+ (_Bool)isSubclassOfClass:(Class)arg1;	// IMP=0x0010000000024ada
+ (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0010000000024ac2
+ (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0010000000024abb
+ (Class)superclass;	// IMP=0x0010000000024ab6
+ (Class)class;	// IMP=0x0010000000024ab2
+ (id)self;	// IMP=0x0010000000024aae
+ (void)initialize;	// IMP=0x0010000000024aad
- (id)mutableCopy;	// IMP=0x000000000002510c
- (id)copy;	// IMP=0x00000000000250fd
- (struct _NSZone *)zone;	// IMP=0x00000000000250fa
- (void)finalize;	// IMP=0x00000000000250f9
- (void)dealloc;	// IMP=0x00000000000250d7
- (id)init;	// IMP=0x00000000000250d3
- (unsigned long long)retainCount;	// IMP=0x00000000000250c6
- (id)autorelease;	// IMP=0x00000000000250c1
- (oneway void)release;	// IMP=0x00000000000250bc
- (_Bool)retainWeakReference;	// IMP=0x00000000000250af
- (_Bool)allowsWeakReference;	// IMP=0x000000000002509a
- (_Bool)_isDeallocating;	// IMP=0x000000000002508e
- (_Bool)_tryRetain;	// IMP=0x0000000000025082
- (id)retain;	// IMP=0x000000000002507d
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002506a
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000002502f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000002501d
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x0000000000024fd5
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0000000000024f92
- (id)performSelector:(SEL)arg1;	// IMP=0x0000000000024f5e
- (void)doesNotRecognizeSelector:(SEL)arg1;	// IMP=0x0000000000024f2a
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;	// IMP=0x0000000000024f06
- (_Bool)isProxy;	// IMP=0x0000000000024f03
- (_Bool)isFault;	// IMP=0x0000000000024f00
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024ef9
@property(readonly) unsigned long long hash;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000024ead
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000024e81
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000024e4c
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0000000000024e29
@property(readonly) Class superclass;
- (Class)class;	// IMP=0x0000000000024dd3
- (id)self;	// IMP=0x0000000000024dcf

@end
