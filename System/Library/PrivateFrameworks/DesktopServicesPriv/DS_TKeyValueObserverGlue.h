//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DS_TKeyValueObserverGlue : NSObject
{
    struct function<void ()> _functor;	// 16 = 0x10
    struct function<void (NSDictionary<NSString *, NSObject *>*)> _functorWithChange;	// 64 = 0x40
    struct unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> _observedObjects;	// 112 = 0x70
    struct TString _observedKeyPath;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x00000000000426b5
- (void).cxx_destruct;	// IMP=0x000000000004263e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000424e0
- (void)initCommon:(const void *)arg1 observedKeyPath:(const void *)arg2;	// IMP=0x00000000000424a7
- (id)initWithFunctorWithChange:(const void *)arg1 observedObjects:(const void *)arg2 observedKeyPath:(const void *)arg3;	// IMP=0x000000000004239d
- (id)initWithFunctor:(const void *)arg1 observedObjects:(const void *)arg2 observedKeyPath:(const void *)arg3;	// IMP=0x0000000000042294

@end
