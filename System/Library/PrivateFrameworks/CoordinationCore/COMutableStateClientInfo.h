//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface COMutableStateClientInfo
{
}

@property(copy, nonatomic) NSDictionary *state; // @dynamic state;
@property(copy, nonatomic) NSDictionary *observers; // @dynamic observers;
- (void)removeObserverWithPredicate:(id)arg1;	// IMP=0x000000000008c1e5
- (void)addObserverWithPredicate:(id)arg1;	// IMP=0x000000000008c0b8
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 cluster:(id)arg3;	// IMP=0x000000000008bed2
- (void)removeKeyPath:(id)arg1 cluster:(id)arg2;	// IMP=0x000000000008bd9e
- (id)initWithSuite:(id)arg1 clusters:(id)arg2 state:(id)arg3 observers:(id)arg4;	// IMP=0x000000000008bcf2

@end

