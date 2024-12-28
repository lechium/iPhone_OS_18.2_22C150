//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSQLCore, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSObject
{
    NSSQLCore *_sqlCore;	// 8 = 0x8
    NSSQLModel *_model;	// 16 = 0x10
    struct __CFDictionary *_cachedDeleteTriggersByEntity;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (id)sqlCore;	// IMP=0x00000000001ba952
- (void)dealloc;	// IMP=0x00000000001ba8f2
- (id)initWithSQLCore:(id)arg1;	// IMP=0x00000000001ba813

@end
