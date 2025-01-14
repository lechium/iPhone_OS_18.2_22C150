//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSMutableSet, PKInk;

@protocol PKStrokeRenderCache <NSObject>
- (_Bool)lockPurgeableResourcesAddToSet:(NSMutableSet *)arg1;
- (_Bool)needsCompute;
- (unsigned long long)cacheCost;
- (_Bool)isCompatibleWithInk:(PKInk *)arg1 renderZoomFactor:(long long)arg2;
@end

