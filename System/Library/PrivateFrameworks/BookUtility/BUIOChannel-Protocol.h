//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookUtility/NSObject-Protocol.h>

@protocol BUIOChannel <NSObject>
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(void (^)(void))arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
@end

