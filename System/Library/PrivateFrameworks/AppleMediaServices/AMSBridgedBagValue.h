//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSPromise;

__attribute__((visibility("hidden")))
@interface AMSBridgedBagValue
{
    AMSPromise *_valuePromise;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000031e9e4
@property(retain, nonatomic) AMSPromise *valuePromise; // @synthesize valuePromise=_valuePromise;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000031e8cc
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;	// IMP=0x000000000031e834

@end

