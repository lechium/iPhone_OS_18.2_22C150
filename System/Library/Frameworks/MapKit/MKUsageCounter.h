//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKUsageCounter : NSObject
{
    NSMutableSet *_countedEventsSet;	// 8 = 0x8
}

+ (id)sharedCounter;	// IMP=0x006000000011173a
- (void).cxx_destruct;	// IMP=0x000000000011199e
- (void)countUsageOfTypeIfNeeded:(unsigned long long)arg1;	// IMP=0x0000000000111916
- (void)createCountedEventsSetIfNeeded;	// IMP=0x00000000001118df
- (void)count:(unsigned long long)arg1;	// IMP=0x00000000001117ae
- (id)fieldNameForType:(unsigned long long)arg1;	// IMP=0x000000000011178f

@end

