//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JetUI/NSObject-Protocol.h>

@class UITraitCollection;

@protocol JUPlaceable <NSObject>
- (void)placeAtRect:(struct CGRect)arg1 withTraitCollection:(UITraitCollection *)arg2;
- (struct JUMeasurements)measureToFit:(struct CGSize)arg1 withTraitCollection:(UITraitCollection *)arg2;
@end
