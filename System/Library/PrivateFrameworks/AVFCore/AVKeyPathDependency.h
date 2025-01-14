//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVKVODispatcher, AVTwoPartKeyPath, AVWeakReference, NSString;
@protocol AVCallbackCancellation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVKeyPathDependency : NSObject
{
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;	// 8 = 0x8
    AVKVODispatcher *_KVODispatcher;	// 16 = 0x10
    AVWeakReference *_weakReferenceToObject;	// 24 = 0x18
    NSString *_dependentKey;	// 32 = 0x20
    AVTwoPartKeyPath *_dependencyKeyPath;	// 40 = 0x28
    id <AVCallbackCancellation> _leafPropertyChangeNotifier;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x0060000000184f13
- (void)_reactToSecondLevelPropertyChange:(id)arg1;	// IMP=0x0000000000185501
- (void)_reactToTopLevelPropertyChange:(id)arg1;	// IMP=0x0000000000185394
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1;	// IMP=0x00000000001852f3
- (void)initializationIsCompleteForObject:(id)arg1;	// IMP=0x00000000001851d3
- (id)description;	// IMP=0x0000000000185139
- (void)dealloc;	// IMP=0x00000000001850cc
- (id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3;	// IMP=0x0000000000184f24

@end

