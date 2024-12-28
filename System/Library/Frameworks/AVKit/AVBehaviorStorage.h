//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface AVBehaviorStorage : NSObject
{
    id _AVKitOwner;	// 8 = 0x8
    NSMapTable *_behaviorsAndBehaviorContexts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014b15d
@property(readonly, nonatomic) NSMapTable *behaviorsAndBehaviorContexts; // @synthesize behaviorsAndBehaviorContexts=_behaviorsAndBehaviorContexts;
@property(nonatomic) __weak id AVKitOwner; // @synthesize AVKitOwner=_AVKitOwner;
- (id)behaviorContextOfClass:(Class)arg1;	// IMP=0x000000000014afbb
- (void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000014af13
- (void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014ae5e
- (void)enumerateAllBehaviorContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014ad07
- (id)behaviorOfClass:(Class)arg1;	// IMP=0x000000000014ab96
- (void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014aae1
- (void)enumerateAllBehaviorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014a98a
- (void)removeBehavior:(id)arg1;	// IMP=0x000000000014a824
- (void)addBehavior:(id)arg1;	// IMP=0x000000000014a5cc
- (id)behaviors;	// IMP=0x000000000014a552
- (id)initWithAVKitOwner:(id)arg1;	// IMP=0x000000000014a4c4

@end
