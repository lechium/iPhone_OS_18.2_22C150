//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUReuseQueue : NSObject
{
    _Bool _reuseEnabled;	// 8 = 0x8
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;	// 16 = 0x10
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000545bb3
@property(nonatomic, getter=isReuseEnabled) _Bool reuseEnabled; // @synthesize reuseEnabled=_reuseEnabled;
@property(readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // @synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // @synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;	// IMP=0x00000000005459c5
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(_Bool *)arg2;	// IMP=0x0000000000545805
- (void)registerObjectCreationBlock:(CDUnknownBlockType)arg1 withReuseIdentifier:(id)arg2;	// IMP=0x0000000000545680
- (id)init;	// IMP=0x00000000005455df

@end

