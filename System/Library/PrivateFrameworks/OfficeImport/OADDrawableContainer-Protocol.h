//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@class NSArray, OADDrawable;

@protocol OADDrawableContainer <NSObject>
- (void)removeChild:(OADDrawable *)arg1;
- (void)replaceChild:(OADDrawable *)arg1 with:(OADDrawable *)arg2;
- (NSArray *)children;
- (OADDrawable *)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(NSArray *)arg1;
- (void)addChild:(OADDrawable *)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
@end

