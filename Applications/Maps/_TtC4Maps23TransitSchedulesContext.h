//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeViewController, MISSING_TYPE, TransitSchedulesViewController;

@interface _TtC4Maps23TransitSchedulesContext : NSObject
{
    MISSING_TYPE *chromeViewController;	// 8 = 0x8
    MISSING_TYPE *viewController;	// 16 = 0x10
}

+ (MISSING_TYPE *)shouldDisplayScheduleFor:departureSequence: /* Error: Ran out of types for this method. */;	// IMP=0x0040000000076950
- (void).cxx_destruct;	// IMP=0x0020000000076ca0
- (id)init;	// IMP=0x0010000000076c40
- (id)initWithDepartureSequence:(id)arg1 timeZone:(id)arg2 scheduleWindowStartDate:(id)arg3 includeAllDirections:(_Bool)arg4;	// IMP=0x0010000000076b10
- (id)initWithRouteStep:(id)arg1;	// IMP=0x0010000000076a60
- (id)initWithMapItem:(id)arg1 departureSequence:(id)arg2;	// IMP=0x0010000000076990
@property(nonatomic, readonly) TransitSchedulesViewController *viewController; // @synthesize viewController;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController;
- (id)routeAnnotationsProvider;	// IMP=0x00100000000198e0
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000000197e0
- (void)prepareToEnterStackInChromeViewController:(id)arg1;	// IMP=0x00100000000196c0
- (_Bool)wantsMapSelectionControl;	// IMP=0x00100000000196b0
- (id)desiredCards;	// IMP=0x0010000000019640
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x0010000000087150
- (void)transitSchedulesViewController:(id)arg1 wantsToOpenURL:(id)arg2;	// IMP=0x0010000000189730
- (void)transitSchedulesViewController:(id)arg1 wantsToDoDirectionItem:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x00100000001895d0
- (void)transitSchedulesViewController:(id)arg1 wantsToDisplayIncidents:(id)arg2 fromView:(id)arg3;	// IMP=0x00100000001895c0
- (id)mapCameraControllerForTransitSchedulesViewController:(id)arg1;	// IMP=0x0010000000189510
- (id)routeAnnotationsControllerFor:(id)arg1;	// IMP=0x00100000001894f0
- (void)transitSchedulesViewControllerWantsToUpdateRouteAnnotations:(id)arg1;	// IMP=0x0010000000189450
- (void)transitSchedulesViewController:(id)arg1 wantsToShowInfoForLine:(id)arg2;	// IMP=0x00100000001893e0

@end
