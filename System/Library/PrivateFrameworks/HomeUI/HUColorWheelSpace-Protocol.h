//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@protocol HUColorWheelSpace <NSObject>
@property(readonly, nonatomic) unsigned long long type;
- (CDStruct_c3b9c2ee)coordinateForColor:(CDStruct_d2b197d1)arg1 isValid:(out _Bool *)arg2;
- (CDStruct_d2b197d1)colorForCoordinate:(CDStruct_c3b9c2ee)arg1;

@optional
@property(nonatomic) unsigned long long mirroringBiasAxis;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@end

