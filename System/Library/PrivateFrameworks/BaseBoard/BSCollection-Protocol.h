//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSFastEnumeration-Protocol.h>
#import <BaseBoard/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSSet;

@protocol BSCollection <NSObject, NSFastEnumeration, NSCopying>
@property(readonly) unsigned long long count;
- (NSOrderedSet *)bs_orderedSet;
- (NSArray *)bs_array;
- (NSSet *)bs_set;
@end

