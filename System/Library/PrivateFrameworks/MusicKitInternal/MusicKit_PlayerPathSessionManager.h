//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MusicKit_PlayerPathSessionManager : NSObject
{
    NSMutableDictionary *_sessionIDsByPlayerPath;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedSessionManager;	// IMP=0x0040000000016530
- (void).cxx_destruct;	// IMP=0x0000000000016669
- (id)sessionIDForPlayerPath:(id)arg1;	// IMP=0x0000000000016585
- (id)init;	// IMP=0x00000000000164d3

@end

