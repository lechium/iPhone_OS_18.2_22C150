//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject
{
    NSMutableDictionary *_storeLinksDirs;	// 8 = 0x8
    NSMutableSet *_filesToCleanUp;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x006000000007d682
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000007d675
+ (void)initialize;	// IMP=0x006000000007d5ee
- (id)autorelease;	// IMP=0x000000000007d6b9
- (_Bool)_tryRetain;	// IMP=0x000000000007d6b1
- (_Bool)_isDeallocating;	// IMP=0x000000000007d6a9
- (oneway void)release;	// IMP=0x000000000007d6a3
- (unsigned long long)retainCount;	// IMP=0x000000000007d698
- (id)retain;	// IMP=0x000000000007d68f

@end
