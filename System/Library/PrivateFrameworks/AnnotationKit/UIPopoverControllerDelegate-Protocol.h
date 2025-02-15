//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class UIPopoverController;

@protocol UIPopoverControllerDelegate <NSObject>

@optional
- (void)popoverController:(UIPopoverController *)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;
@end

