//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NEKCapabilities : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
}

+ (id)instance;	// IMP=0x0040000000040592
- (void).cxx_destruct;	// IMP=0x00200000000409d7
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)_changed:(id)arg1;	// IMP=0x001000000004095c
- (_Bool)_query:(id)arg1;	// IMP=0x00100000000407f8
@property(readonly, nonatomic) _Bool canUseDataTransfer;
@property(readonly, nonatomic) _Bool canUseLzfse;
- (void)dealloc;	// IMP=0x00100000000406c5
- (id)init;	// IMP=0x00100000000405e7

@end

