//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVEventManagerSelectorAction
{
    id _target;	// 16 = 0x10
    SEL _selector;	// 24 = 0x18
    unsigned long long _parameterCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007a386
- (unsigned long long)hash;	// IMP=0x000000000007a2d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007a1d4
- (_Bool)hasMatchingTarget:(id)arg1 withSelector:(SEL)arg2 forEvent:(id)arg3;	// IMP=0x000000000007a167
- (void)sendAction:(id)arg1;	// IMP=0x000000000007a0c6
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 event:(id)arg3;	// IMP=0x0000000000079ffc

@end

