//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TMLJSEnvironment : NSObject
{
}

+ (id)normalizeValue:(id)arg1 toType:(unsigned long long)arg2;	// IMP=0x008000000001b32c
+ (id)convertJsValue:(id)arg1 toType:(unsigned long long)arg2;	// IMP=0x008000000001aa3c
+ (id)convertTmlValue:(id)arg1;	// IMP=0x008000000001a1a7
+ (void)initializeJSContext:(id)arg1;	// IMP=0x0080000000019a41
+ (id)defaultModules;	// IMP=0x00800000000199da
+ (void)addToDefaultModules:(id)arg1;	// IMP=0x00800000000198e9
+ (void)requireModule:(id)arg1 forJSContext:(id)arg2;	// IMP=0x008000000001979d
+ (void)addGCCallback:(CDUnknownBlockType)arg1;	// IMP=0x0080000000019764
+ (void)forceGC;	// IMP=0x008000000001968b
+ (id)validCurrentContext;	// IMP=0x0080000000019671
+ (void)setCurrentContext:(id)arg1;	// IMP=0x008000000001965d
+ (id)currentContext;	// IMP=0x008000000001964c
+ (void)runInContext:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00800000000195ab
+ (id)createJSContextWithRuntimeContext:(id)arg1;	// IMP=0x0080000000019591
+ (id)protoJSContext;	// IMP=0x00800000000194e6
+ (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;	// IMP=0x00800000000194d4
+ (id)sharedVM;	// IMP=0x00800000000193b8
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000000193b0

@end

