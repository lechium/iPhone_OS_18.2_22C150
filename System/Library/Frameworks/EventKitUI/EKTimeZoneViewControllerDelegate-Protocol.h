//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKTimeZoneViewController, NSTimeZone;

@protocol EKTimeZoneViewControllerDelegate <NSObject>
- (void)timeZoneViewControllerDidCancel:(EKTimeZoneViewController *)arg1;
- (void)timeZoneViewController:(EKTimeZoneViewController *)arg1 didSelectTimeZone:(NSTimeZone *)arg2;
@end

