//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPFetcherResponse : NSObject
{
    long long _state;	// 8 = 0x8
    id _userData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cccee
@property(readonly, retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 fetcher:(id)arg2;	// IMP=0x00000000000ccc19

@end
