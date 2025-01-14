//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEvent, NSDictionary, UIScrollView, UIViewController;
@protocol EKEventViewDelegate, EKUIViewControllerNavigationDelegate;

@protocol EKEventViewControllerImpl <NSObject>
@property(readonly, nonatomic) UIViewController *eventDetailsViewController;
@property(readonly, nonatomic) UIScrollView *eventDetailsScrollView;
@property(nonatomic) int editorHideTransition;
@property(nonatomic) int editorShowTransition;
@property(nonatomic) __weak id <EKUIViewControllerNavigationDelegate> navigationDelegate;
@property(retain, nonatomic) NSDictionary *context;
@property(nonatomic) _Bool isLargeDayView;
@property(nonatomic) _Bool noninteractivePlatterMode;
@property(nonatomic) _Bool minimalMode;
@property(nonatomic) _Bool showsDetectedConferenceItem;
@property(nonatomic) _Bool showsDelegateMessage;
@property(nonatomic) _Bool showsDelegatorMessage;
@property(nonatomic) _Bool showsOutOfDateMessage;
@property(nonatomic) _Bool showsDoneButton;
@property(nonatomic) _Bool allowsSubitems;
@property(nonatomic) _Bool showsDeleteForICSPreview;
@property(nonatomic) _Bool showsUpdateCalendarForICSPreview;
@property(nonatomic) _Bool showsAddToCalendarForICSPreview;
@property(nonatomic) _Bool allowsInviteResponses;
@property(nonatomic, getter=isICSPreview) _Bool ICSPreview;
@property(nonatomic) _Bool inlineDayViewRespectsSelectedCalendarsFilter;
@property(nonatomic) _Bool calendarPreviewIsInlineDayView;
@property(nonatomic) _Bool eventEditViewPresented;
@property(nonatomic) __weak id <EKEventViewDelegate> delegate;
@property(nonatomic) _Bool allowsCalendarPreview;
@property(nonatomic) _Bool allowsEditing;
@property(retain, nonatomic) EKEvent *event;
- (void)_performEditKeyCommand;
- (void)openAttendeesDetailItem;
- (void)performAddToCalendar;
- (void)fullReloadWithNewEvent:(EKEvent *)arg1;
- (void)setNeedsReload;
- (void)editButtonTapped;
- (void)doneButtonTapped;
- (void)setShouldOverrideAuthorizationStatus:(_Bool)arg1 withRemoteUIStatus:(long long)arg2;
@end

