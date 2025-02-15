//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKit/NTKUtilityComplicationView-Protocol.h>

@protocol NTKUtilityFlatComplicationViewDelegate;

@protocol NTKUtilityFlatComplicationView <NTKUtilityComplicationView, CLKMonochromeComplicationView>
@property(nonatomic) double tracking;
@property(nonatomic) double baselineOffset;
@property(nonatomic) long long textAlignment;
@property(readonly, nonatomic) double textWidthInRadians;
@property(nonatomic) __weak id <NTKUtilityFlatComplicationViewDelegate> delegate;
@end

