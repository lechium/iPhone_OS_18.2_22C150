//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ChromeNavigationDisplay, ChromeNavigationDisplayConfiguration, MKMapView;

@protocol ChromeNavigationDisplayDelegate <NSObject>

@optional
- (void)chromeNavigationDisplayDidRenderRoute:(ChromeNavigationDisplay *)arg1;
- (void)chromeNavigationDisplay:(ChromeNavigationDisplay *)arg1 didChangePanning:(_Bool)arg2 animated:(_Bool)arg3;
- (void)chromeNavigationDisplay:(ChromeNavigationDisplay *)arg1 userDidTapMap:(MKMapView *)arg2 atPoint:(struct CGPoint)arg3;
- (void)chromeNavigationDisplay:(ChromeNavigationDisplay *)arg1 configurationDidChange:(ChromeNavigationDisplayConfiguration *)arg2;
@end
