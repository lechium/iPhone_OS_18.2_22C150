//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol NavTrayViewControllerDelegate <NSObject>
- (void)pressedZoomToManeuverWithSender:(id)arg1;
- (void)pressedShowOverviewWithSender:(id)arg1;
- (void)pressedShowDirectionsListWithSender:(id)arg1;
- (void)pressedEndWithSender:(id)arg1 feedback:(unsigned long long)arg2;
- (void)suppressTransitionsOfContainee:(UIViewController *)arg1;
@end
