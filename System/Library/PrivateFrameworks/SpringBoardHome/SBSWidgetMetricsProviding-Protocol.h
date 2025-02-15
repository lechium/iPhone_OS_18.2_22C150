//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class CHSWidget, CHSWidgetMetrics, CHSWidgetMetricsSpecification, NSString, UISDeviceContext, UISDisplayContext;

@protocol SBSWidgetMetricsProviding <NSObject>
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1;
@end

