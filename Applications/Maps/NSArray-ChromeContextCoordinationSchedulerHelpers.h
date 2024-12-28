//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (ChromeContextCoordinationSchedulerHelpers)
+ (id)_navigation_newArrayWithDefaultValue:(id)arg1 withCapacity:(unsigned long long)arg2;	// IMP=0x00200000007e29c2
+ (_Bool);	// IMP=0x0010000000d1c164
+ (id)_maps_commonPrefixSharedBetweenArray:(id)arg1 suffix:(out id *)arg2 andArray:(id)arg3 suffix:(out id *)arg4;	// IMP=0x0010000000e92f0f
- (id)_maps_subarrayToIndex:(unsigned long long)arg1;	// IMP=0x00200000002d115d
- (id)_maps_subarrayFromIndex:(unsigned long long)arg1;	// IMP=0x00100000002d10d6
- (id)_maps_lastContextOfClass:(Class)arg1;	// IMP=0x00100000002d0fa0
- (id)_maps_firstContextOfClass:(Class)arg1;	// IMP=0x00100000002d0e47
- (_Bool)_maps_containsContextOfClass:(Class)arg1;	// IMP=0x00100000002d0dc0
- (_Bool)_maps_containsSearchResultEqualToResult:(id)arg1 forPurpose:(long long)arg2;	// IMP=0x0010000000b54f44
- (id)_maps_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d1c39b
- (id)_maps_map:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d1c1d8
- (_Bool)_maps_isPrefixOfArray:(id)arg1;	// IMP=0x0010000000e92d07
@property(readonly, nonatomic) NSArray *carShortenedArray;
@end
